
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_nClientHeight; int m_nClientWidth; int * m_dcPlot; int * m_dcGrid; } ;
typedef TYPE_1__ TGraphCtrl ;
typedef int HWND ;
typedef int * HDC ;
typedef scalar_t__ HBITMAP ;


 int FUNC_0 (int *,int ,int ,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;

void FUNC_6(TGraphCtrl* VAR_2, HWND VAR_3, HDC VAR_4)
{
    HDC VAR_5;
    HBITMAP VAR_6;
    HBITMAP VAR_7;
    VAR_5 = FUNC_2(VAR_4);
    VAR_6 = (HBITMAP)FUNC_1(VAR_4, VAR_2->m_nClientWidth, VAR_2->m_nClientHeight);
    VAR_7 = (HBITMAP)FUNC_5(VAR_5, VAR_6);

    if (VAR_5 != ((void*)0))
    {

        FUNC_0(VAR_5, 0, 0, VAR_2->m_nClientWidth, VAR_2->m_nClientHeight, VAR_2->m_dcGrid, 0, 0, VAR_0);


        FUNC_0(VAR_5, 0, 0, VAR_2->m_nClientWidth, VAR_2->m_nClientHeight, VAR_2->m_dcPlot, 0, 0, VAR_1);

        FUNC_0(VAR_4, 0, 0, VAR_2->m_nClientWidth, VAR_2->m_nClientHeight, VAR_5, 0, 0, VAR_0);
    }
    FUNC_5(VAR_5, VAR_7);
    FUNC_4(VAR_6);
    FUNC_3(VAR_5);
}
