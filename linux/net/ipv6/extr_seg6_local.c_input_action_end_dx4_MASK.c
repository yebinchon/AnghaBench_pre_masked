
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; int protocol; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct seg6_local_lwt {TYPE_1__ nh4; } ;
struct iphdr {int saddr; int daddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3,
    struct seg6_local_lwt *VAR_4)
{
 struct iphdr *VAR_5;
 __be32 VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_3, VAR_2))
  goto drop;

 if (!FUNC_6(VAR_3, sizeof(struct iphdr)))
  goto drop;

 VAR_3->protocol = FUNC_2(VAR_1);

 VAR_5 = FUNC_3(VAR_3);

 VAR_6 = VAR_4->nh4.s_addr ?: VAR_5->daddr;

 FUNC_7(VAR_3);

 VAR_7 = FUNC_4(VAR_3, VAR_6, VAR_5->saddr, 0, VAR_3->dev);
 if (VAR_7)
  goto drop;

 return FUNC_1(VAR_3);

drop:
 FUNC_5(VAR_3);
 return -VAR_0;
}
