
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int Jbig2Ctx ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(Jbig2Ctx *VAR_0, Jbig2Image *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    VAR_1->refcount--;
    if (VAR_1->refcount == 0)
        FUNC_0(VAR_0, VAR_1);
}
