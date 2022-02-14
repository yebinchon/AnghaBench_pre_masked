
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LPWSTR ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int,int ,int *,scalar_t__,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static UINT FUNC_7(LPCSTR VAR_0, DWORD VAR_1,
                                        LPWSTR VAR_2, DWORD VAR_3)
{
    CHAR *VAR_4;
    UINT VAR_5 = 0;
    VAR_4 = FUNC_2(FUNC_1(),0,VAR_1);
    VAR_5 = FUNC_0(VAR_0,VAR_1,VAR_4);
    if (VAR_5)
    {
        FUNC_5("%s\n",FUNC_6(VAR_4,VAR_5));
        if (VAR_2)
            VAR_5 = FUNC_4(932,0,VAR_4,VAR_5,VAR_2,VAR_3);
        else
            VAR_5 = FUNC_4(932,0,VAR_4,VAR_5,0,0);
    }
    FUNC_3(FUNC_1(),0,VAR_4);
    return VAR_5;

}
