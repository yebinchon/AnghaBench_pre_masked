
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int resp; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int messagebulk; int * mbulkhdr; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(client *VAR_1, robj *VAR_2, robj *VAR_3) {
    if (VAR_1->resp == 2)
        FUNC_0(VAR_1,VAR_0.mbulkhdr[3]);
    else
        FUNC_2(VAR_1,3);
    FUNC_0(VAR_1,VAR_0.messagebulk);
    FUNC_1(VAR_1,VAR_2);
    FUNC_1(VAR_1,VAR_3);
}
