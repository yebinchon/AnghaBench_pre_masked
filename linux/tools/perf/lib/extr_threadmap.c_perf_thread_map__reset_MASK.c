
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int err_thread; int * map; } ;


 int FUNC_0 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct perf_thread_map *VAR_0, int VAR_1, int VAR_2)
{
 size_t VAR_3 = (VAR_2 - VAR_1) * sizeof(VAR_0->map[0]);

 FUNC_0(&VAR_0->map[VAR_1], 0, VAR_3);
 VAR_0->err_thread = -1;
}
