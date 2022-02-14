
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct raw_sock {int count; int uniq; scalar_t__ bound; scalar_t__ ifindex; int filter; int notifier; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct net_device*,struct sock*) ;
 struct raw_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct raw_sock *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_7(VAR_1);

 FUNC_12(&VAR_2->notifier);

 FUNC_5(VAR_1);


 if (VAR_2->bound) {
  if (VAR_2->ifindex) {
   struct net_device *VAR_3;

   VAR_3 = FUNC_0(FUNC_9(VAR_1), VAR_2->ifindex);
   if (VAR_3) {
    FUNC_6(FUNC_1(VAR_3), VAR_3, VAR_1);
    FUNC_2(VAR_3);
   }
  } else {
   FUNC_6(FUNC_9(VAR_1), ((void*)0), VAR_1);
  }
 }

 if (VAR_2->count > 1)
  FUNC_4(VAR_2->filter);

 VAR_2->ifindex = 0;
 VAR_2->bound = 0;
 VAR_2->count = 0;
 FUNC_3(VAR_2->uniq);

 FUNC_10(VAR_1);
 VAR_0->sk = ((void*)0);

 FUNC_8(VAR_1);
 FUNC_11(VAR_1);

 return 0;
}
