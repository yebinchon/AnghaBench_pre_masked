
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uAlign; int * himl; int margin; int member_0; } ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int * HWND ;
typedef int * HIMAGELIST ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ BUTTON_IMAGELIST ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int * FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int * FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;
 int * FUNC_11 (scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void)
{
    HWND VAR_6;
    HIMAGELIST VAR_7;
    BUTTON_IMAGELIST VAR_8 = {0};
    HDC VAR_9;
    HBITMAP VAR_10;
    INT VAR_11 = 16;
    INT VAR_12 = 16;
    INT VAR_13;
    DWORD VAR_14;
    BOOL VAR_15;

    VAR_9 = FUNC_3(0);
    VAR_10 = FUNC_0(VAR_9, VAR_11, VAR_12);
    FUNC_9(VAR_10 != ((void*)0), "Expect hbmp not null\n");

    VAR_7 = FUNC_11(VAR_11, VAR_12, VAR_5, 1, 0);
    FUNC_9(VAR_7 != ((void*)0), "Expect himl not null\n");
    VAR_13 = FUNC_10(VAR_7, VAR_10, ((void*)0));
    FUNC_9(VAR_13 == 0, "Expect index == 0\n");
    FUNC_1(VAR_10);
    FUNC_5(0, VAR_9);

    for (VAR_14 = VAR_3; VAR_14 <= VAR_2; VAR_14++)
    {
        VAR_6 = FUNC_8(VAR_14, ((void*)0));
        FUNC_9(VAR_6 != ((void*)0), "Expect hwnd not null\n");


        VAR_15 = FUNC_6(VAR_6, VAR_0, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_GETIMAGELIST return true\n");
        FUNC_9(VAR_8.himl == 0 && FUNC_4(&VAR_8.margin) && VAR_8.uAlign == 0,
           "Expect BUTTON_IMAGELIST is empty\n");


        VAR_8.himl = 0;
        VAR_8.uAlign = VAR_4;
        VAR_15 = FUNC_6(VAR_6, VAR_1, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15 || FUNC_7(!VAR_15),
           "Expect BCM_SETIMAGELIST return true\n");


        VAR_8.himl = VAR_7;
        VAR_8.uAlign = -1;
        VAR_15 = FUNC_6(VAR_6, VAR_1, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_SETIMAGELIST return true\n");


        VAR_8.himl = VAR_7;
        VAR_8.uAlign = VAR_4;
        VAR_15 = FUNC_6(VAR_6, VAR_1, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_SETIMAGELIST return true\n");
        VAR_15 = FUNC_6(VAR_6, VAR_0, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_GETIMAGELIST return true\n");
        FUNC_9(VAR_8.himl == VAR_7, "Expect himl to be same\n");
        FUNC_9(VAR_8.uAlign == VAR_4, "Expect uAlign to be %x\n",
           VAR_4);


        VAR_15 = FUNC_6(VAR_6, VAR_1, 0, 0);
        FUNC_9(!VAR_15, "Expect BCM_SETIMAGELIST return false\n");
        VAR_15 = FUNC_6(VAR_6, VAR_0, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_GETIMAGELIST return true\n");
        FUNC_9(VAR_8.himl == VAR_7, "Expect himl to be same\n");


        VAR_8.himl = VAR_7;
        VAR_8.uAlign = VAR_4;
        VAR_15 = FUNC_6(VAR_6, VAR_1, 0, (LPARAM)&VAR_8);
        FUNC_9(VAR_15, "Expect BCM_SETIMAGELIST return true\n");
        VAR_15 = FUNC_6(VAR_6, VAR_0, 0, 0);
        FUNC_9(!VAR_15, "Expect BCM_GETIMAGELIST return false\n");

        FUNC_2(VAR_6);
    }

    FUNC_12(VAR_7);
}
