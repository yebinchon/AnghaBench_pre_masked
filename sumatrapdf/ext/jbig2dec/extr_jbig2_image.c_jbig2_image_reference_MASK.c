
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int Jbig2Ctx ;



Jbig2Image *
FUNC_0(Jbig2Ctx *VAR_0, Jbig2Image *VAR_1)
{
    if (VAR_1)
        VAR_1->refcount++;
    return VAR_1;
}
