
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct ipv6_pinfo {scalar_t__ rtalert_isolate; } ;
struct ip6_ra_chain {int sel; struct sock* sk; struct ip6_ra_chain* next; } ;
struct TYPE_2__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 struct ip6_ra_chain* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, int VAR_4)
{
 struct ip6_ra_chain *VAR_5;
 struct sock *VAR_6 = ((void*)0);

 FUNC_4(&VAR_2);
 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  struct sock *VAR_7 = VAR_5->sk;
  if (VAR_7 && VAR_5->sel == VAR_4 &&
      (!VAR_7->sk_bound_dev_if ||
       VAR_7->sk_bound_dev_if == VAR_3->dev->ifindex)) {
   struct ipv6_pinfo *VAR_8 = FUNC_1(VAR_7);

   if (VAR_8 && VAR_8->rtalert_isolate &&
       !FUNC_2(FUNC_7(VAR_7), FUNC_0(VAR_3->dev))) {
    continue;
   }
   if (VAR_6) {
    struct sk_buff *VAR_9 = FUNC_6(VAR_3, VAR_0);
    if (VAR_9)
     FUNC_3(VAR_6, VAR_9);
   }
   VAR_6 = VAR_7;
  }
 }

 if (VAR_6) {
  FUNC_3(VAR_6, VAR_3);
  FUNC_5(&VAR_2);
  return 1;
 }
 FUNC_5(&VAR_2);
 return 0;
}
