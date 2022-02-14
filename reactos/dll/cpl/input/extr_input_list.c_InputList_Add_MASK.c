
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_7__ {int pszIndicator; TYPE_1__* pLocale; int * pLayout; int wFlags; struct TYPE_7__* pNext; } ;
struct TYPE_6__ {int dwId; } ;
typedef TYPE_1__ LOCALE_LIST_NODE ;
typedef int LAYOUT_LIST_NODE ;
typedef TYPE_2__ INPUT_LIST_NODE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (scalar_t__*) ;
 size_t FUNC_5 (scalar_t__*) ;

BOOL
FUNC_6(LOCALE_LIST_NODE *VAR_7, LAYOUT_LIST_NODE *VAR_8)
{
    WCHAR VAR_9[VAR_4];
    INPUT_LIST_NODE *VAR_10;

    if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
    {
        return VAR_0;
    }

    for (VAR_10 = VAR_6; VAR_10 != ((void*)0); VAR_10 = VAR_10->pNext)
    {
        if (VAR_10->pLocale == VAR_7 && VAR_10->pLayout == VAR_8)
        {
            return VAR_0;
        }
    }

    VAR_10 = FUNC_2();

    VAR_10->wFlags = VAR_1;

    VAR_10->pLocale = VAR_7;
    VAR_10->pLayout = VAR_8;

    if (FUNC_1(FUNC_3(VAR_10->pLocale->dwId),
                       VAR_3 | VAR_2,
                       VAR_9,
                       FUNC_0(VAR_9)))
    {
        size_t VAR_11 = FUNC_5(VAR_9);

        if (VAR_11 > 0)
        {
            VAR_9[VAR_11 - 1] = 0;
            VAR_10->pszIndicator = FUNC_4(VAR_9);
        }
    }

    return VAR_5;
}
