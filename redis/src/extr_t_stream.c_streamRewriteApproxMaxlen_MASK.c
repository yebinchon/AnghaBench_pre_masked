
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
typedef TYPE_1__ stream ;
typedef int robj ;
typedef int client ;


 int * FUNC_0 (char*,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;

void FUNC_4(client *VAR_0, stream *VAR_1, int VAR_2) {
    robj *VAR_3 = FUNC_1(VAR_1->length);
    robj *VAR_4 = FUNC_0("=",1);

    FUNC_3(VAR_0,VAR_2,VAR_3);
    FUNC_3(VAR_0,VAR_2-1,VAR_4);

    FUNC_2(VAR_4);
    FUNC_2(VAR_3);
}
