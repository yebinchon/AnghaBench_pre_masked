
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* bits; } ;
struct TYPE_6__ {size_t classCount; struct TYPE_6__* classList; TYPE_1__ u; scalar_t__ converted; } ;
typedef TYPE_2__ regexp_t ;
typedef size_t UINT ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(regexp_t *VAR_0)
{
    if (VAR_0->classList) {
        UINT VAR_1;
        for (VAR_1 = 0; VAR_1 < VAR_0->classCount; VAR_1++) {
            if (VAR_0->classList[VAR_1].converted)
                FUNC_0(VAR_0->classList[VAR_1].u.bits);
            VAR_0->classList[VAR_1].u.bits = ((void*)0);
        }
        FUNC_0(VAR_0->classList);
    }
    FUNC_0(VAR_0);
}
