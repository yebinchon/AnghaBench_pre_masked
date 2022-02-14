
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int robj ;
struct TYPE_10__ {int resp; } ;
typedef TYPE_1__ client ;
struct TYPE_11__ {int unsubscribebulk; int * mbulkhdr; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_6(client *VAR_1, robj *VAR_2) {
    if (VAR_1->resp == 2)
        FUNC_0(VAR_1,VAR_0.mbulkhdr[3]);
    else
        FUNC_4(VAR_1,3);
    FUNC_0(VAR_1,VAR_0.unsubscribebulk);
    if (VAR_2)
        FUNC_1(VAR_1,VAR_2);
    else
        FUNC_3(VAR_1);
    FUNC_2(VAR_1,FUNC_5(VAR_1));
}
