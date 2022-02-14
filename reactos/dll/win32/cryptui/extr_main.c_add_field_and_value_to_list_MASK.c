
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct detail_data {int dummy; } ;
typedef int create_detailed_value_func ;
struct TYPE_2__ {int mask; int iItem; int iSubItem; void* pszText; scalar_t__ lParam; } ;
typedef TYPE_1__ LVITEMW ;
typedef void* LPWSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 int FUNC_1 (struct detail_data*,int ,void*) ;

__attribute__((used)) static void FUNC_2(HWND VAR_5, struct detail_data *VAR_6,
 LPWSTR VAR_7, LPWSTR VAR_8, create_detailed_value_func VAR_9, void *VAR_10)
{
    LVITEMW VAR_11;
    int VAR_12 = FUNC_0(VAR_5, VAR_2, 0, 0);

    VAR_11.mask = VAR_1 | VAR_0;
    VAR_11.iItem = VAR_12;
    VAR_11.iSubItem = 0;
    VAR_11.pszText = VAR_7;
    VAR_11.lParam = (LPARAM)VAR_6;
    FUNC_0(VAR_5, VAR_3, 0, (LPARAM)&VAR_11);
    if (VAR_8)
    {
        VAR_11.pszText = VAR_8;
        VAR_11.iSubItem = 1;
        FUNC_0(VAR_5, VAR_4, VAR_12, (LPARAM)&VAR_11);
    }
    FUNC_1(VAR_6, VAR_9, VAR_10);
}
