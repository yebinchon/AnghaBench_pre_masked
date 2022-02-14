
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int dummy; } ;
struct fib_rule {int dummy; } ;
struct fib_lookup_arg {scalar_t__ lookup_ptr; } ;


 int FUNC_0 (struct fib_rule*,struct flowi*,int,struct fib_lookup_arg*) ;
 int FUNC_1 (struct fib_rule*,struct flowi*,int,struct fib_lookup_arg*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_1, struct flowi *VAR_2,
       int VAR_3, struct fib_lookup_arg *VAR_4)
{
 if (VAR_4->lookup_ptr == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
