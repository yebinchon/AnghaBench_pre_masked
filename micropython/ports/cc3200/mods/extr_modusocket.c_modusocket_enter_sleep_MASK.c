
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_2__ {scalar_t__ sd; } ;
typedef int SlFdSet_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int *,int *,int *) ;

void FUNC_2 (void) {
    SlFdSet_t VAR_2;
    int16_t VAR_3 = 0;

    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        int16_t VAR_5;
        if ((VAR_5 = VAR_1[VAR_4].sd) >= 0) {
            FUNC_0(VAR_5, &VAR_2);
            VAR_3 = (VAR_3 > VAR_5) ? VAR_3 : VAR_5;
        }
    }

    if (VAR_3 > 0) {

        FUNC_1(VAR_3 + 1, &VAR_2, ((void*)0), ((void*)0), ((void*)0));
    }
}
