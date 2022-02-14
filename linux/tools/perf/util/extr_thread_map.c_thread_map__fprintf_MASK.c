
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct perf_thread_map*,int) ;

size_t FUNC_2(struct perf_thread_map *VAR_0, FILE *VAR_1)
{
 int VAR_2;
 size_t VAR_3 = FUNC_0(VAR_1, "%d thread%s: ",
     VAR_0->nr, VAR_0->nr > 1 ? "s" : "");
 for (VAR_2 = 0; VAR_2 < VAR_0->nr; ++VAR_2)
  VAR_3 += FUNC_0(VAR_1, "%s%d", VAR_2 ? ", " : "", FUNC_1(VAR_0, VAR_2));

 return VAR_3 + FUNC_0(VAR_1, "\n");
}
