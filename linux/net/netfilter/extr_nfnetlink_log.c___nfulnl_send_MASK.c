
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct nfulnl_instance {int qlen; TYPE_1__* skb; int peer_portid; int net; } ;
struct nfgenmsg {int dummy; } ;
struct TYPE_5__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 struct nlmsghdr* FUNC_3 (TYPE_1__*,int ,int ,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct nfulnl_instance *VAR_2)
{
 if (VAR_2->qlen > 1) {
  struct nlmsghdr *VAR_3 = FUNC_3(VAR_2->skb, 0, 0,
       VAR_1,
       sizeof(struct nfgenmsg),
       0);
  if (FUNC_0(!VAR_3, "bad nlskb size: %u, tailroom %d\n",
         VAR_2->skb->len, FUNC_4(VAR_2->skb))) {
   FUNC_1(VAR_2->skb);
   goto out;
  }
 }
 FUNC_2(VAR_2->skb, VAR_2->net, VAR_2->peer_portid,
     VAR_0);
out:
 VAR_2->qlen = 0;
 VAR_2->skb = ((void*)0);
}
