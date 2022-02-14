
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct machine {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,struct perf_thread_map*,int ,struct machine*,int ) ;
 int FUNC_2 (struct perf_thread_map*) ;
 struct perf_thread_map* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct machine *VAR_1)
{
 struct perf_thread_map *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(FUNC_0());

 VAR_3 = FUNC_1(((void*)0), VAR_2,
      VAR_0,
      VAR_1, 0);

 FUNC_2(VAR_2);
 return VAR_3;
}
