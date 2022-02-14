
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_sample_id {int id; } ;
struct perf_counts_values {int dummy; } ;
struct evsel {int dummy; } ;


 struct perf_sample_id* FUNC_0 (struct evsel*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,struct perf_counts_values*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct evsel *VAR_1, u32 VAR_2, u32 VAR_3,
        struct perf_counts_values *VAR_4)
{
 struct perf_sample_id *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return FUNC_1(((void*)0), VAR_2, VAR_3, VAR_5->id, VAR_4,
        VAR_0, ((void*)0));
}
