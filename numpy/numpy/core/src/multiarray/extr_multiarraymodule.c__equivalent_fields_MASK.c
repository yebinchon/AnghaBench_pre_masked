
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * names; int * fields; } ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(PyArray_Descr *VAR_1, PyArray_Descr *VAR_2) {

    int VAR_3;

    if (VAR_1->fields == VAR_2->fields && VAR_1->names == VAR_2->names) {
        return 1;
    }
    if (VAR_1->fields == ((void*)0) || VAR_2->fields == ((void*)0)) {
        return 0;
    }

    VAR_3 = FUNC_2(VAR_1->fields, VAR_2->fields, VAR_0);
    if (VAR_3 != 1 || FUNC_1()) {
        FUNC_0();
        return 0;
    }

    VAR_3 = FUNC_2(VAR_1->names, VAR_2->names, VAR_0);
    if (VAR_3 != 1 || FUNC_1()) {
        FUNC_0();
        return 0;
    }

    return 1;
}
