
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iItem; scalar_t__ lParam; scalar_t__ iSubItem; int mask; } ;
typedef int PCCERT_CONTEXT ;
typedef TYPE_1__ LVITEMW ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(HWND VAR_3)
{
    LVITEMW VAR_4;
    int VAR_5 = FUNC_1(VAR_3, VAR_1, 0, 0), VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        VAR_4.mask = VAR_0;
        VAR_4.iItem = VAR_6;
        VAR_4.iSubItem = 0;
        FUNC_1(VAR_3, VAR_2, 0, (LPARAM)&VAR_4);
        FUNC_0((PCCERT_CONTEXT)VAR_4.lParam);
    }
}
