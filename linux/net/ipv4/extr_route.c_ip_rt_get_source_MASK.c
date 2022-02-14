
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int mark; TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;
struct rtable {TYPE_2__ dst; } ;
struct iphdr {int daddr; int tos; int saddr; } ;
struct flowi4 {int flowi4_mark; int flowi4_iif; int flowi4_oif; int flowi4_tos; int saddr; int daddr; } ;
struct fib_result {int dummy; } ;
typedef int __be32 ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,struct flowi4*,struct fib_result*,int ) ;
 int FUNC_3 (int ,struct fib_result*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct rtable*) ;
 int FUNC_10 (struct rtable*,int ) ;

void FUNC_11(u8 *VAR_1, struct sk_buff *VAR_2, struct rtable *VAR_3)
{
 __be32 VAR_4;

 if (FUNC_9(VAR_3))
  VAR_4 = FUNC_5(VAR_2)->saddr;
 else {
  struct fib_result VAR_5;
  struct iphdr *VAR_6 = FUNC_5(VAR_2);
  struct flowi4 VAR_7 = {
   .daddr = VAR_6->daddr,
   .saddr = VAR_6->saddr,
   .flowi4_tos = FUNC_0(VAR_6->tos),
   .flowi4_oif = VAR_3->dst.dev->ifindex,
   .flowi4_iif = VAR_2->dev->ifindex,
   .flowi4_mark = VAR_2->mark,
  };

  FUNC_7();
  if (FUNC_2(FUNC_1(VAR_3->dst.dev), &VAR_7, &VAR_5, 0) == 0)
   VAR_4 = FUNC_3(FUNC_1(VAR_3->dst.dev), &VAR_5);
  else
   VAR_4 = FUNC_4(VAR_3->dst.dev,
            FUNC_10(VAR_3, VAR_6->daddr),
            VAR_0);
  FUNC_8();
 }
 FUNC_6(VAR_1, &VAR_4, 4);
}
