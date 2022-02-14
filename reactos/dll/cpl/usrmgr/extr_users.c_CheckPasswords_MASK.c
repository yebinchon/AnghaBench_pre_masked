
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int TCHAR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static BOOL
FUNC_4(HWND VAR_5,
               INT VAR_6,
               INT VAR_7)
{
    TCHAR VAR_8[VAR_3];
    TCHAR VAR_9[VAR_3];
    UINT VAR_10;
    UINT VAR_11;

    VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_8, VAR_3);
    VAR_11 = FUNC_0(VAR_5, VAR_7, VAR_9, VAR_3);


    if (VAR_10 != VAR_11 || FUNC_3(VAR_8, VAR_9) != 0)
    {
        FUNC_1(VAR_5,
                   FUNC_2("The passwords you entered are not the same!"),
                   FUNC_2("ERROR"),
                   VAR_2 | VAR_1);
        return VAR_0;
    }

    return VAR_4;
}
