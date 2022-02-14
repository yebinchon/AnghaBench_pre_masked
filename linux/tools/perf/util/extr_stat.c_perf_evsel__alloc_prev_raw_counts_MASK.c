
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_counts {int dummy; } ;
struct evsel {struct perf_counts* prev_raw_counts; } ;


 int VAR_0 ;
 struct perf_counts* FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct evsel *VAR_1,
          int VAR_2, int VAR_3)
{
 struct perf_counts *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  VAR_1->prev_raw_counts = VAR_4;

 return VAR_4 ? 0 : -VAR_0;
}
