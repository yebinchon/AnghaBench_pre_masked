
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib_notifier_info {struct net* net; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int FUNC_0 (int *,int,struct fib_notifier_info*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(struct net *VAR_1, enum fib_event_type VAR_2,
         struct fib_notifier_info *VAR_3)
{
 int VAR_4;

 VAR_3->net = VAR_1;
 VAR_4 = FUNC_0(&VAR_0, VAR_2, VAR_3);
 return FUNC_1(VAR_4);
}
