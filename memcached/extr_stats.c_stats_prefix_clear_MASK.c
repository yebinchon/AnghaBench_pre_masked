
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prefix; struct TYPE_4__* next; } ;
typedef TYPE_1__ PREFIX_STATS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1() {
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        PREFIX_STATS *VAR_5, *VAR_6;
        for (VAR_5 = VAR_2[VAR_4]; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
            VAR_6 = VAR_5->next;
            FUNC_0(VAR_5->prefix);
            FUNC_0(VAR_5);
        }
        VAR_2[VAR_4] = ((void*)0);
    }
    VAR_1 = 0;
    VAR_3 = 0;
}
