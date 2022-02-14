
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t iItem; int iSubItem; int * pszText; scalar_t__ lParam; scalar_t__ iImage; int mask; } ;
typedef int TCHAR ;
typedef TYPE_1__ LV_ITEM ;
typedef int LPARAM ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int* VAR_3 ;
 void** VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,void*,int *,int) ;
 int FUNC_3 (int ,int ,size_t,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5 ( DWORD VAR_7, DWORD VAR_8, DWORD VAR_9 , DWORD VAR_10, int VAR_11 ) {
    TCHAR VAR_12[256];
    LV_ITEM VAR_13;

    FUNC_2(VAR_5, VAR_7, VAR_12, 256);
    FUNC_4(&VAR_13, 0, sizeof(LV_ITEM));
    VAR_13.mask = VAR_0;
    VAR_13.iImage = 0;
    VAR_13.pszText = VAR_12;
    VAR_13.iItem = FUNC_0(VAR_6);
    VAR_13.lParam = 0;
    (void)FUNC_1(VAR_6, &VAR_13);

    VAR_2[VAR_13.iItem] = VAR_9;
    VAR_4[VAR_13.iItem] = VAR_10;
    VAR_3[VAR_13.iItem] = VAR_11;

    FUNC_2(VAR_5, VAR_8, VAR_12, 256);
    VAR_13.pszText = VAR_12;
    VAR_13.iSubItem = 1;
    FUNC_3(VAR_6, VAR_1, VAR_13.iItem, (LPARAM) &VAR_13);
}
