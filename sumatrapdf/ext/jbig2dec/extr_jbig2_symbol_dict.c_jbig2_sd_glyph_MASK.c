
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** glyphs; } ;
typedef TYPE_1__ Jbig2SymbolDict ;
typedef int Jbig2Image ;



Jbig2Image *
FUNC_0(Jbig2SymbolDict *VAR_0, unsigned int VAR_1)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return VAR_0->glyphs[VAR_1];
}
