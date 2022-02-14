
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_mem_data_src {int dummy; } perf_mem_data_src ;
struct mem_info {union perf_mem_data_src data_src; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int,struct mem_info*) ;
 int FUNC_2 (char*,int,struct mem_info*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(union perf_mem_data_src VAR_0,
    const char *VAR_1)
{
 char VAR_2[100];
 char VAR_3[100];
 struct mem_info VAR_4 = { .data_src = VAR_0 };

 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, sizeof VAR_2, &VAR_4);
 VAR_5 += FUNC_1(VAR_2 + VAR_5, sizeof VAR_2 - VAR_5, &VAR_4);
 FUNC_3(VAR_3, sizeof VAR_3, "unexpected %s", VAR_2);
 FUNC_0(VAR_3, !FUNC_4(VAR_1, VAR_2));
 return 0;
}
