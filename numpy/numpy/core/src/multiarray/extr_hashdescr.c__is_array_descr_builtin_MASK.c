
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fields; } ;
typedef TYPE_1__ PyArray_Descr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_1(PyArray_Descr* VAR_1)
{
    if (VAR_1->fields != ((void*)0) && VAR_1->fields != VAR_0) {
        return 0;
    }
    if (FUNC_0(VAR_1)) {
        return 0;
    }
    return 1;
}
