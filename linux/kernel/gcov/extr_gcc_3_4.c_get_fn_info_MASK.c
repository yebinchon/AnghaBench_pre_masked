
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {scalar_t__ functions; } ;
struct gcov_fn_info {int dummy; } ;


 unsigned int FUNC_0 (struct gcov_info*) ;

__attribute__((used)) static struct gcov_fn_info *FUNC_1(struct gcov_info *VAR_0, unsigned int VAR_1)
{
 return (struct gcov_fn_info *)
  ((char *) VAR_0->functions + VAR_1 * FUNC_0(VAR_0));
}
