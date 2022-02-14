
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_info {scalar_t__ should_flush; int fib6_nsiblings; } ;


 scalar_t__ FUNC_0 (int) ;
 struct fib6_info* FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*) ;
 int FUNC_3 (struct fib6_info*,int) ;

void FUNC_4(struct fib6_info *VAR_0)
{
 struct fib6_info *VAR_1;
 int VAR_2;





 if (!VAR_0->fib6_nsiblings || VAR_0->should_flush)
  return;





 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(!VAR_1))
  return;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_2);
}
