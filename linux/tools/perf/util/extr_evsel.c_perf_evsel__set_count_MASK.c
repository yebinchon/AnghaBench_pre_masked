
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct perf_counts_values {void* run; void* ena; void* val; } ;
struct evsel {int counts; } ;


 struct perf_counts_values* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct evsel *VAR_0, int VAR_1, int VAR_2,
        u64 VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct perf_counts_values *VAR_6;

 VAR_6 = FUNC_0(VAR_0->counts, VAR_1, VAR_2);

 VAR_6->val = VAR_3;
 VAR_6->ena = VAR_4;
 VAR_6->run = VAR_5;

 FUNC_1(VAR_0->counts, VAR_1, VAR_2, 1);
}
