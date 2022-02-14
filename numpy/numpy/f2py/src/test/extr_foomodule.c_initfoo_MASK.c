
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int *) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_9 () ;

void FUNC_10() {
    int VAR_6;
    PyObject *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    FUNC_9();

    VAR_7 = FUNC_8("foo", VAR_5);

    VAR_8 = FUNC_4(VAR_7);
    VAR_9 = FUNC_5("This module 'foo' demonstrates the usage of fortranobject.");
    FUNC_0(VAR_8, "__doc__", VAR_9);


    VAR_10 = FUNC_2(VAR_3,VAR_2);
    FUNC_0(VAR_8, "mod", VAR_10);
    FUNC_6(VAR_10);
    VAR_10 = FUNC_2(VAR_0,VAR_1);
    FUNC_0(VAR_8, "foodata", VAR_10);
    FUNC_6(VAR_10);
    for(VAR_6=0;VAR_4[VAR_6].name!=((void*)0);VAR_6++) {
        VAR_10 = FUNC_3(&VAR_4[VAR_6]);
        FUNC_0(VAR_8, VAR_4[VAR_6].name, VAR_10);
        FUNC_6(VAR_10);
    }

    FUNC_6(VAR_9);

    if (FUNC_1())
        FUNC_7("can't initialize module foo");
}
