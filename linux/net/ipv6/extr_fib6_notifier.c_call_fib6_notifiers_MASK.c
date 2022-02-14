
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib_notifier_info {int family; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int,struct fib_notifier_info*) ;

int FUNC_1(struct net *VAR_1, enum fib_event_type VAR_2,
   struct fib_notifier_info *VAR_3)
{
 VAR_3->family = VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
