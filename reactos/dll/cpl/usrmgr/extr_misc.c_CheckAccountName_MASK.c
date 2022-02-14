
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;

BOOL
FUNC_5(HWND VAR_4,
                 INT VAR_5,
                 LPTSTR VAR_6)
{
    TCHAR VAR_7[256];
    UINT VAR_8;

    if (VAR_6)
        VAR_8 = FUNC_3(VAR_6);
    else
        VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7, 256);


    if (VAR_8 > 0 &&
        FUNC_4((VAR_6) ? VAR_6 : VAR_7, FUNC_2("\"*+,/\\:;<=>?[]|")) != ((void*)0))
    {
        FUNC_1(VAR_4,
                   FUNC_2("The account name you entered is invalid! An account name must not contain the following characters: *+,/:;<=>?[\\]|"),
                   FUNC_2("ERROR"),
                   VAR_2 | VAR_1);
        return VAR_0;
    }

    return VAR_3;
}
