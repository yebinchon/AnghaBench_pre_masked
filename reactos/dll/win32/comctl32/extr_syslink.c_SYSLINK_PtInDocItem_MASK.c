
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nText; TYPE_1__* Blocks; } ;
struct TYPE_4__ {scalar_t__ nSkip; scalar_t__ nChars; int rc; } ;
typedef int POINT ;
typedef TYPE_1__* PDOC_TEXTBLOCK ;
typedef TYPE_2__ DOC_ITEM ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1 (const DOC_ITEM *VAR_2, POINT VAR_3)
{
    PDOC_TEXTBLOCK VAR_4;
    int VAR_5;

    VAR_4 = VAR_2->Blocks;
    if (VAR_4 != ((void*)0))
    {
        VAR_5 = VAR_2->nText;

        while(VAR_5 > 0)
        {
            if (FUNC_0(&VAR_4->rc, VAR_3))
            {
                return VAR_1;
            }
            VAR_5 -= VAR_4->nChars + VAR_4->nSkip;
            VAR_4++;
        }
    }

    return VAR_0;
}
