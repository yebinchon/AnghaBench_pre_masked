
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {int member_0; } ;
struct TYPE_4__ {size_t num; int * array; } ;
struct TYPE_5__ {TYPE_1__ roots; } ;
typedef TYPE_2__ profiler_snapshot_t ;
typedef int (* dump_csv_func ) (void*,struct dstr*) ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,int *,int *,int (*) (void*,struct dstr*),void*) ;

__attribute__((used)) static void FUNC_3(const profiler_snapshot_t *VAR_0,
       dump_csv_func VAR_1, void *VAR_2)
{
 struct dstr VAR_3 = {0};

 FUNC_1(&VAR_3, "id,parent_id,name_id,parent_name_id,name,"
    "time_between_calls,time_delta_µs,count\n");
 VAR_1(VAR_2, &VAR_3);

 for (size_t VAR_4 = 0; VAR_4 < VAR_0->roots.num; VAR_4++)
  FUNC_2(&VAR_3, ((void*)0), &VAR_0->roots.array[VAR_4], VAR_1,
          VAR_2);

 FUNC_0(&VAR_3);
}
