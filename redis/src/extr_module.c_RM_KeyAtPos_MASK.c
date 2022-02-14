
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int* keys_pos; int keys_count; } ;
typedef TYPE_1__ RedisModuleCtx ;


 int VAR_0 ;
 int* FUNC_0 (int*,int) ;

void FUNC_1(RedisModuleCtx *VAR_1, int VAR_2) {
    if (!(VAR_1->flags & VAR_0)) return;
    if (VAR_2 <= 0) return;
    VAR_1->keys_pos = FUNC_0(VAR_1->keys_pos,sizeof(int)*(VAR_1->keys_count+1));
    VAR_1->keys_pos[VAR_1->keys_count++] = VAR_2;
}
