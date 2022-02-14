
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_info {int fib6_flags; int expires; } ;
struct fib6_gc_args {int more; } ;


 int FUNC_0 (char*,struct fib6_info*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct fib6_info*,struct fib6_gc_args*,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct fib6_info *VAR_2, void *VAR_3)
{
 struct fib6_gc_args *VAR_4 = VAR_3;
 unsigned long VAR_5 = VAR_1;






 if (VAR_2->fib6_flags & VAR_0 && VAR_2->expires) {
  if (FUNC_2(VAR_5, VAR_2->expires)) {
   FUNC_0("expiring %p\n", VAR_2);
   return -1;
  }
  VAR_4->more++;
 }





 FUNC_1(VAR_2, VAR_4, VAR_5);

 return 0;
}
