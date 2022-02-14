
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IsAdvancedView; } ;
typedef char TCHAR ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int **,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_5 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

extern void FUNC_6(void)
{
    HKEY VAR_13 = ((void*)0);

    if (FUNC_3(VAR_1, VAR_10, 0, ((void*)0), VAR_7, VAR_4, ((void*)0), &VAR_13, ((void*)0)) == VAR_0)
    {
        TCHAR VAR_14[VAR_5];

        VAR_12 = FUNC_1(VAR_11, VAR_3);
        FUNC_0(VAR_12, VAR_14, VAR_5);

        if(*VAR_14 != '\0')
            FUNC_4(VAR_13, FUNC_5("Font"), 0, VAR_8, (LPBYTE) VAR_14, (DWORD) VAR_5);

        VAR_12 = FUNC_1(VAR_11, VAR_2);
        FUNC_0(VAR_12, VAR_14, VAR_5);

        if(*VAR_14 != '\0')
            FUNC_4(VAR_13, FUNC_5("CodePage"), 0, VAR_8, (LPBYTE) VAR_14, (DWORD) VAR_5);

        FUNC_4(VAR_13, FUNC_5("Advanced"), 0, VAR_6, (LPBYTE)&VAR_9.IsAdvancedView, (DWORD) sizeof(DWORD));

        FUNC_2(VAR_13);
    }
}
