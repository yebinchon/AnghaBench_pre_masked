
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * m_brushBack; int * m_dcPlot; int * m_dcGrid; int * m_bitmapPlot; int * m_bitmapGrid; int * m_bitmapOldPlot; int * m_bitmapOldGrid; int ** m_penPlot; } ;
typedef TYPE_1__ TGraphCtrl ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(TGraphCtrl* VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_1(VAR_1->m_penPlot[VAR_2]);




    if (VAR_1->m_bitmapOldGrid != ((void*)0)) FUNC_2(VAR_1->m_dcGrid, VAR_1->m_bitmapOldGrid);
    if (VAR_1->m_bitmapOldPlot != ((void*)0)) FUNC_2(VAR_1->m_dcPlot, VAR_1->m_bitmapOldPlot);
    if (VAR_1->m_bitmapGrid != ((void*)0)) FUNC_1(VAR_1->m_bitmapGrid);
    if (VAR_1->m_bitmapPlot != ((void*)0)) FUNC_1(VAR_1->m_bitmapPlot);
    if (VAR_1->m_dcGrid != ((void*)0)) FUNC_0(VAR_1->m_dcGrid);
    if (VAR_1->m_dcPlot != ((void*)0)) FUNC_0(VAR_1->m_dcPlot);
    if (VAR_1->m_brushBack != ((void*)0)) FUNC_1(VAR_1->m_brushBack);
}
