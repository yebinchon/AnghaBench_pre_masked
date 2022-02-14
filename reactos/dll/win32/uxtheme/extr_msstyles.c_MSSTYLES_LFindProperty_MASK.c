
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iPropertyId; int iPrimitiveType; struct TYPE_4__* next; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;



__attribute__((used)) static PTHEME_PROPERTY FUNC_0(PTHEME_PROPERTY VAR_0, int VAR_1, int VAR_2)
{
    PTHEME_PROPERTY VAR_3 = VAR_0;
    while(VAR_3) {
        if(VAR_3->iPropertyId == VAR_2) {
            if(VAR_3->iPrimitiveType == VAR_1) {
                return VAR_3;
            }
            else {
                if(!VAR_1)
                    return VAR_3;
                return ((void*)0);
            }
        }
        VAR_3 = VAR_3->next;
    }
    return ((void*)0);
}
