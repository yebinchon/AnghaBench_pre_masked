
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int resp; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (TYPE_1__*,void*,long,int) ;

void FUNC_1(client *VAR_0, void *VAR_1, long VAR_2) {
    int VAR_3 = VAR_0->resp == 2 ? '*' : '%';
    if (VAR_0->resp == 2) VAR_2 *= 2;
    FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3);
}
