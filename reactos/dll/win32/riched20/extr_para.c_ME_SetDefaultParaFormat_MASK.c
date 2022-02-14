
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int texthost; } ;
struct TYPE_6__ {int cbSize; int dwMask; int sStyle; int wAlignment; int bOutlineLevel; } ;
typedef TYPE_1__ PARAFORMAT2 ;
typedef int PARAFORMAT ;
typedef TYPE_2__ ME_TextEditor ;
typedef int HRESULT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(ME_TextEditor *VAR_4, PARAFORMAT2 *VAR_5)
{
    const PARAFORMAT2 *VAR_6;
    HRESULT VAR_7;

    FUNC_3(VAR_5, sizeof(PARAFORMAT2));
    VAR_5->cbSize = sizeof(PARAFORMAT2);
    VAR_5->dwMask = VAR_2;
    VAR_5->wAlignment = VAR_0;
    VAR_5->sStyle = -1;
    VAR_5->bOutlineLevel = VAR_3;

    VAR_7 = FUNC_1( VAR_4->texthost, (const PARAFORMAT **)&VAR_6 );
    if (FUNC_2(VAR_7))
    {

        if (VAR_6->dwMask & VAR_1)
            VAR_5->wAlignment = VAR_6->wAlignment;
        FUNC_0( VAR_4->texthost, (PARAFORMAT *)VAR_5 );
    }
}
