
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_counts {int values; int loaded; } ;


 int FUNC_0 (struct perf_counts*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct perf_counts *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->loaded);
  FUNC_1(VAR_0->values);
  FUNC_0(VAR_0);
 }
}
