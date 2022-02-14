
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ himl; scalar_t__ uAlign; int margin; } ;
typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ HIMAGELIST ;
typedef TYPE_1__ BUTTON_IMAGELIST ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char*,int ,int,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;

void FUNC_6()
{
    HWND VAR_4;
    BOOL VAR_5;
    BUTTON_IMAGELIST VAR_6;

    VAR_4 = FUNC_0(L"Button", L"Test2", 0, 10, 10, 100, 100, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4 (VAR_4 != ((void*)0), "Expected CreateWindowW to succeed\n");

    VAR_5 = FUNC_2(VAR_4, VAR_0, 0, (LPARAM)&VAR_6);
    FUNC_4 (VAR_5 == VAR_3, "Expected BCM_GETIMAGELIST to succeed\n");
    FUNC_4 (VAR_6.himl == 0, "Expected 0 himl\n");
    FUNC_4 (VAR_6.uAlign == 0, "Expected 0 uAlign\n");
    FUNC_5(VAR_6.margin, 0, 0, 0, 0);

    FUNC_3(&VAR_6.margin, 0,0,0,1);
    VAR_5 = FUNC_2(VAR_4, VAR_1, 0, (LPARAM)&VAR_6);
    FUNC_4 (VAR_5 == VAR_2, "Expected BCM_SETIMAGELIST to fail\n");

    VAR_6.himl = (HIMAGELIST)0xdead;
    VAR_5 = FUNC_2(VAR_4, VAR_1, 0, (LPARAM)&VAR_6);
    FUNC_4 (VAR_5 == VAR_3, "Expected BCM_SETIMAGELIST to fail\n");

    VAR_5 = FUNC_2(VAR_4, VAR_0, 0, (LPARAM)&VAR_6);
    FUNC_4 (VAR_5 == VAR_3, "Expected BCM_GETIMAGELIST to succeed\n");
    FUNC_4 (VAR_6.himl == (HIMAGELIST)0xdead, "Expected 0 himl\n");
    FUNC_4 (VAR_6.uAlign == 0, "Expected 0 uAlign\n");
    FUNC_5(VAR_6.margin, 0, 0, 0, 1);

    VAR_6.himl = 0;
    VAR_5 = FUNC_2(VAR_4, VAR_1, 0, (LPARAM)&VAR_6);
    FUNC_4 (VAR_5 == VAR_2, "Expected BCM_SETIMAGELIST to fail\n");

    FUNC_1(VAR_4);
}
