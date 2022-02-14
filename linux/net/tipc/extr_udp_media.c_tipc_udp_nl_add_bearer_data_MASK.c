
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_media_addr {int dummy; } ;
struct TYPE_6__ {int list; } ;
struct udp_bearer {TYPE_3__ rcast; } ;
struct tipc_nl_msg {int skb; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_4__ {int value; } ;
struct tipc_bearer {TYPE_2__ bcast_addr; int media_ptr; TYPE_1__ addr; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct udp_media_addr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nlattr*) ;
 int FUNC_3 (int ,struct nlattr*) ;
 struct nlattr* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct udp_bearer* FUNC_6 (int ) ;

int FUNC_7(struct tipc_nl_msg *VAR_6, struct tipc_bearer *VAR_7)
{
 struct udp_media_addr *VAR_8 = (struct udp_media_addr *)&VAR_7->addr.value;
 struct udp_media_addr *VAR_9;
 struct udp_bearer *VAR_10;
 struct nlattr *VAR_11;

 VAR_10 = FUNC_6(VAR_7->media_ptr);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_6->skb, VAR_2);
 if (!VAR_11)
  goto msg_full;

 if (FUNC_0(VAR_6->skb, VAR_8, VAR_3))
  goto msg_full;

 VAR_9 = (struct udp_media_addr *)&VAR_7->bcast_addr.value;
 if (FUNC_0(VAR_6->skb, VAR_9, VAR_5))
  goto msg_full;

 if (!FUNC_1(&VAR_10->rcast.list)) {
  if (FUNC_5(VAR_6->skb, VAR_4))
   goto msg_full;
 }

 FUNC_3(VAR_6->skb, VAR_11);
 return 0;
msg_full:
 FUNC_2(VAR_6->skb, VAR_11);
 return -VAR_0;
}
