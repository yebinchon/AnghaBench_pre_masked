
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
struct TYPE_3__ {char* pszText; int iItem; int lParam; int mask; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ COMBOBOXEXITEMA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,int ,int ,char*,int ) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_14[] = "test";
    HWND VAR_15;
    COMBOBOXEXITEMA VAR_16;
    BOOL VAR_17;

    VAR_15 = FUNC_2(VAR_9 | VAR_11 | VAR_10 | VAR_4);

    FUNC_8(VAR_15);

    FUNC_4(VAR_12, VAR_7);

    FUNC_5(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.mask = VAR_1;
    VAR_16.pszText = VAR_14;
    VAR_16.iItem = -1;
    VAR_17 = FUNC_1(VAR_15, VAR_3, 0, (LPARAM)&VAR_16);
    FUNC_3(VAR_8, VAR_17);

    FUNC_7(VAR_12, VAR_5, VAR_13, "set item data for edit", VAR_6);


    VAR_16.mask = VAR_0;
    VAR_16.iItem = -1;
    VAR_16.lParam = 0xdeadbeef;
    VAR_17 = FUNC_1(VAR_15, VAR_2, 0, (LPARAM)&VAR_16);
    FUNC_3(VAR_8, VAR_17);
    FUNC_6(VAR_16.lParam == 0, "Expected zero, got %lx\n", VAR_16.lParam);

    VAR_16.lParam = 0x1abe11ed;
    VAR_17 = FUNC_1(VAR_15, VAR_3, 0, (LPARAM)&VAR_16);
    FUNC_3(VAR_8, VAR_17);

    VAR_16.lParam = 0;
    VAR_17 = FUNC_1(VAR_15, VAR_2, 0, (LPARAM)&VAR_16);
    FUNC_3(VAR_8, VAR_17);
    FUNC_6(VAR_16.lParam == 0x1abe11ed, "Expected 0x1abe11ed, got %lx\n", VAR_16.lParam);

    FUNC_0(VAR_15);
}
