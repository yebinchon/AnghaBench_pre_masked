
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_counts_values {int dummy; } ;
struct perf_counts {int values; } ;


 struct perf_counts_values* FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline struct perf_counts_values*
FUNC_1(struct perf_counts *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0->values, VAR_1, VAR_2);
}
