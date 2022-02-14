
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int amqueue_used; TYPE_1__* amqueue; } ;
struct TYPE_4__ {int type; void* ptr; } ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(RedisModuleCtx *VAR_2, int VAR_3, void *VAR_4) {
    if (!(VAR_2->flags & VAR_1)) return 0;

    int VAR_5 = (VAR_2->amqueue_used+1)/2;
    for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        for (int VAR_7 = 0; VAR_7 < 2; VAR_7++) {


            int VAR_8 = (VAR_7 == 0) ? (VAR_2->amqueue_used - 1 - VAR_6) : VAR_6;
            if (VAR_2->amqueue[VAR_8].type == VAR_3 &&
                VAR_2->amqueue[VAR_8].ptr == VAR_4)
            {
                VAR_2->amqueue[VAR_8].type = VAR_0;



                if (VAR_8 != VAR_2->amqueue_used-1) {
                    VAR_2->amqueue[VAR_8] = VAR_2->amqueue[VAR_2->amqueue_used-1];
                }



                VAR_2->amqueue_used--;
                return 1;
            }
        }
    }
    return 0;
}
