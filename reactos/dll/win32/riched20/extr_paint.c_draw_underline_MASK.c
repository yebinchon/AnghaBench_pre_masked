
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hDC; } ;
struct TYPE_5__ {scalar_t__ nWidth; int style; } ;
typedef TYPE_1__ ME_Run ;
typedef TYPE_2__ ME_Context ;
typedef scalar_t__ HPEN ;
typedef int COLORREF ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int,int,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5( ME_Context *VAR_0, ME_Run *VAR_1, int VAR_2, int VAR_3, COLORREF VAR_4 )
{
    HPEN VAR_5;

    VAR_5 = FUNC_4( VAR_1->style, VAR_4 );
    if (VAR_5)
    {
        HPEN VAR_6 = FUNC_3( VAR_0->hDC, VAR_5 );
        FUNC_2( VAR_0->hDC, VAR_2, VAR_3 + 1, ((void*)0) );
        FUNC_1( VAR_0->hDC, VAR_2 + VAR_1->nWidth, VAR_3 + 1 );
        FUNC_3( VAR_0->hDC, VAR_6 );
        FUNC_0( VAR_5 );
    }
    return;
}
