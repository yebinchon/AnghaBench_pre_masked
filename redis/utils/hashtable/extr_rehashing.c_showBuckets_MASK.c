
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__* table; } ;
typedef TYPE_1__ dictht ;


 int FUNC_0 (char*,...) ;

void FUNC_1(dictht VAR_0) {
    if (VAR_0.table == ((void*)0)) {
        FUNC_0("NULL\n");
    } else {
        int VAR_1;
        for (VAR_1 = 0; VAR_1 < VAR_0.size; VAR_1++) {
            FUNC_0("%c", VAR_0.table[VAR_1] ? '1' : '0');
        }
        FUNC_0("\n");
    }
}
