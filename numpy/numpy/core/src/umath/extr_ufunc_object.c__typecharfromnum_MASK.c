
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char type; } ;
typedef TYPE_1__ PyArray_Descr ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static char
FUNC_2(int VAR_0) {
    PyArray_Descr *VAR_1;
    char VAR_2;

    VAR_1 = FUNC_0(VAR_0);
    VAR_2 = VAR_1->type;
    FUNC_1(VAR_1);
    return VAR_2;
}
