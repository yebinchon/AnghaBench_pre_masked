
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* handleError ) (void*,int,int) ;void* errorUptr; } ;
typedef TYPE_1__ FONScontext ;



void FUNC_0(FONScontext* VAR_0, void (*VAR_1)(void* VAR_2, int VAR_3, int VAR_4), void* VAR_5)
{
 if (VAR_0 == ((void*)0)) return;
 VAR_0->handleError = VAR_1;
 VAR_0->errorUptr = VAR_5;
}
