
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mask; scalar_t__ pszText; } ;
struct TYPE_6__ {scalar_t__ nNotifyFormat; } ;
typedef int * LPVOID ;
typedef int LPSTR ;
typedef TYPE_1__ HEADER_INFO ;
typedef TYPE_2__ HDITEMW ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(const HEADER_INFO *VAR_3, HDITEMW *VAR_4,
    const HDITEMW *VAR_5, BOOL VAR_6, LPVOID *VAR_7)
{
    *VAR_7 = ((void*)0);
    *VAR_4 = *VAR_5;

    if (VAR_5->mask & VAR_0 && VAR_5->pszText != VAR_1)
    {
        if (VAR_6 && VAR_3->nNotifyFormat != VAR_2)
        {
            VAR_4->pszText = ((void*)0);
            FUNC_1((LPSTR *)&VAR_4->pszText, VAR_5->pszText);
            *VAR_7 = VAR_4->pszText;
        }

        if (!VAR_6 && VAR_3->nNotifyFormat == VAR_2)
        {
            VAR_4->pszText = ((void*)0);
            FUNC_0(&VAR_4->pszText, (LPSTR)VAR_5->pszText);
            *VAR_7 = VAR_4->pszText;
        }
    }
}
