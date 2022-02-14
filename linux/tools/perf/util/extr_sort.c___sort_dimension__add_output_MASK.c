
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_dimension {int taken; } ;
struct perf_hpp_list {int dummy; } ;


 scalar_t__ FUNC_0 (struct sort_dimension*,struct perf_hpp_list*) ;

__attribute__((used)) static int FUNC_1(struct perf_hpp_list *VAR_0,
     struct sort_dimension *VAR_1)
{
 if (VAR_1->taken)
  return 0;

 if (FUNC_0(VAR_1, VAR_0) < 0)
  return -1;

 VAR_1->taken = 1;
 return 0;
}
