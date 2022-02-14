
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {scalar_t__ ifindex; } ;
struct TYPE_5__ {int ra_chain; } ;
struct net {TYPE_1__ ipv4; } ;
struct ip_ra_chain {struct sock* sk; int next; } ;
struct TYPE_7__ {scalar_t__ inet_num; } ;
struct TYPE_6__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (struct net_device*) ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct net*,struct sk_buff*,int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct ip_ra_chain* FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;

bool FUNC_8(struct sk_buff *VAR_2)
{
 struct ip_ra_chain *VAR_3;
 u8 VAR_4 = FUNC_3(VAR_2)->protocol;
 struct sock *VAR_5 = ((void*)0);
 struct net_device *VAR_6 = VAR_2->dev;
 struct net *VAR_7 = FUNC_0(VAR_6);

 for (VAR_3 = FUNC_6(VAR_7->ipv4.ra_chain); VAR_3; VAR_3 = FUNC_6(VAR_3->next)) {
  struct sock *VAR_8 = VAR_3->sk;




  if (VAR_8 && FUNC_1(VAR_8)->inet_num == VAR_4 &&
      (!VAR_8->sk_bound_dev_if ||
       VAR_8->sk_bound_dev_if == VAR_6->ifindex)) {
   if (FUNC_4(FUNC_3(VAR_2))) {
    if (FUNC_2(VAR_7, VAR_2, VAR_1))
     return 1;
   }
   if (VAR_5) {
    struct sk_buff *VAR_9 = FUNC_7(VAR_2, VAR_0);
    if (VAR_9)
     FUNC_5(VAR_5, VAR_9);
   }
   VAR_5 = VAR_8;
  }
 }

 if (VAR_5) {
  FUNC_5(VAR_5, VAR_2);
  return 1;
 }
 return 0;
}
