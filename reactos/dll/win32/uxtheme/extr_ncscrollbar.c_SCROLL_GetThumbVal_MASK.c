
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_5__ {scalar_t__ nMin; scalar_t__ nPage; scalar_t__ nMax; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static UINT FUNC_3( SCROLLINFO *VAR_3, RECT *VAR_4,
                                  BOOL VAR_5, INT VAR_6 )
{
    INT VAR_7;
    INT VAR_8 = VAR_5 ? VAR_4->bottom-VAR_4->top : VAR_4->right-VAR_4->left;
    INT VAR_9;

    if ((VAR_8 -= 2*(FUNC_0(VAR_2) - VAR_0)) <= 0)
        return VAR_3->nMin;

    if (VAR_3->nPage)
    {
        VAR_7 = FUNC_1(VAR_8,VAR_3->nPage,(VAR_3->nMax-VAR_3->nMin+1));
        if (VAR_7 < VAR_1) VAR_7 = VAR_1;
    }
    else VAR_7 = FUNC_0(VAR_2);

    if ((VAR_8 -= VAR_7) <= 0) return VAR_3->nMin;

    VAR_6 = FUNC_2( 0, VAR_6 - (FUNC_0(VAR_2) - VAR_0) );
    if (VAR_6 > VAR_8) VAR_6 = VAR_8;

    if (!VAR_3->nPage)
        VAR_9 = VAR_3->nMax - VAR_3->nMin;
    else
        VAR_9 = VAR_3->nMax - VAR_3->nMin - VAR_3->nPage + 1;

    return VAR_3->nMin + FUNC_1(VAR_6, VAR_9, VAR_8);
}
