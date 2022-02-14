
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int client ;
struct TYPE_4__ {int postponed_arrays_count; int * postponed_arrays; } ;
typedef TYPE_1__ RedisModuleCtx ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,int) ;

int FUNC_4(RedisModuleCtx *VAR_2, long VAR_3) {
    client *VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 == ((void*)0)) return VAR_0;
    if (VAR_3 == VAR_1) {
        VAR_2->postponed_arrays = FUNC_3(VAR_2->postponed_arrays,sizeof(void*)*
                (VAR_2->postponed_arrays_count+1));
        VAR_2->postponed_arrays[VAR_2->postponed_arrays_count] =
            FUNC_1(VAR_4);
        VAR_2->postponed_arrays_count++;
    } else {
        FUNC_0(VAR_4,VAR_3);
    }
    return VAR_0;
}
