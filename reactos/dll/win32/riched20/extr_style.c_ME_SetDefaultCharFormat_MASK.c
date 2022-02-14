
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int cbSize; } ;
struct TYPE_15__ {int script_cache; int * font_cache; int tm; int fmt; } ;
struct TYPE_14__ {TYPE_1__* pBuffer; } ;
struct TYPE_13__ {TYPE_3__* pDefaultStyle; } ;
typedef TYPE_2__ ME_TextEditor ;
typedef TYPE_3__ ME_Style ;
typedef TYPE_4__ CHARFORMAT2W ;


 TYPE_3__* FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

void FUNC_6(ME_TextEditor *VAR_0, CHARFORMAT2W *VAR_1)
{
    ME_Style *VAR_2, *VAR_3 = VAR_0->pBuffer->pDefaultStyle;

    FUNC_4(VAR_1->cbSize == sizeof(CHARFORMAT2W));
    VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_1);
    VAR_3->fmt = VAR_2->fmt;
    VAR_3->tm = VAR_2->tm;
    if (VAR_3->font_cache)
    {
        FUNC_5( VAR_3->font_cache );
        VAR_3->font_cache = ((void*)0);
    }
    FUNC_3( &VAR_3->script_cache );
    FUNC_2( VAR_2 );
    FUNC_1( VAR_0 );
}
