
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* ptr; int encoding; } ;
typedef TYPE_1__ robj ;
struct TYPE_9__ {scalar_t__ maxmemory; int maxmemory_policy; } ;
struct TYPE_8__ {TYPE_1__** integers; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (long long) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;

robj *FUNC_3(long long VAR_8, int VAR_9) {
    robj *VAR_10;

    if (VAR_6.maxmemory == 0 ||
        !(VAR_6.maxmemory_policy & VAR_2))
    {


        VAR_9 = 0;
    }

    if (VAR_8 >= 0 && VAR_8 < VAR_4 && VAR_9 == 0) {
        FUNC_1(VAR_7.integers[VAR_8]);
        VAR_10 = VAR_7.integers[VAR_8];
    } else {
        if (VAR_8 >= VAR_1 && VAR_8 <= VAR_0) {
            VAR_10 = FUNC_0(VAR_5, ((void*)0));
            VAR_10->encoding = VAR_3;
            VAR_10->ptr = (void*)((long)VAR_8);
        } else {
            VAR_10 = FUNC_0(VAR_5,FUNC_2(VAR_8));
        }
    }
    return VAR_10;
}
