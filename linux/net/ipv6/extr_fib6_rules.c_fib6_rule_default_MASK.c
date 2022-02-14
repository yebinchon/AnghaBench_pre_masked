
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_rule {scalar_t__ action; scalar_t__ table; scalar_t__ l3mdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fib_rule const*) ;

bool FUNC_1(const struct fib_rule *VAR_3)
{
 if (!FUNC_0(VAR_3) || VAR_3->action != VAR_0 ||
     VAR_3->l3mdev)
  return 0;
 if (VAR_3->table != VAR_1 && VAR_3->table != VAR_2)
  return 0;
 return 1;
}
