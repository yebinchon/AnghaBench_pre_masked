
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int czero; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_4(client *VAR_2) {
    robj *VAR_3 = FUNC_3(VAR_2,VAR_2->argv[1],VAR_1.czero);
    if (VAR_3 == ((void*)0) || FUNC_1(VAR_2,VAR_3,VAR_0)) return;
    FUNC_0(VAR_2,FUNC_2(VAR_3));
}
