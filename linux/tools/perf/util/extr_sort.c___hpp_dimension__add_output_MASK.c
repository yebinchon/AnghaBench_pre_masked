
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;
struct perf_hpp_fmt {int dummy; } ;
struct hpp_dimension {int taken; } ;


 struct perf_hpp_fmt* FUNC_0 (struct hpp_dimension*,int ) ;
 int FUNC_1 (struct perf_hpp_list*,struct perf_hpp_fmt*) ;

__attribute__((used)) static int FUNC_2(struct perf_hpp_list *VAR_0,
           struct hpp_dimension *VAR_1)
{
 struct perf_hpp_fmt *VAR_2;

 if (VAR_1->taken)
  return 0;

 VAR_2 = FUNC_0(VAR_1, 0);
 if (!VAR_2)
  return -1;

 VAR_1->taken = 1;
 FUNC_1(VAR_0, VAR_2);
 return 0;
}
