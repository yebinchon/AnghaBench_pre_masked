
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * aftersleep; } ;
typedef TYPE_1__ aeEventLoop ;
typedef int aeBeforeSleepProc ;



void FUNC_0(aeEventLoop *VAR_0, aeBeforeSleepProc *VAR_1) {
    VAR_0->aftersleep = VAR_1;
}
