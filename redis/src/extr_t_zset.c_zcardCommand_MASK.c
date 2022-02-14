
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int czero; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int * FUNC_2 (TYPE_1__*,int *,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(client *VAR_2) {
    robj *VAR_3 = VAR_2->argv[1];
    robj *VAR_4;

    if ((VAR_4 = FUNC_2(VAR_2,VAR_3,VAR_1.czero)) == ((void*)0) ||
        FUNC_1(VAR_2,VAR_4,VAR_0)) return;

    FUNC_0(VAR_2,FUNC_3(VAR_4));
}
