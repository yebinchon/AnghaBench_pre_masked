
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int * LPSTR ;
typedef int LPCWSTR ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,int ,int ,scalar_t__,int *,int ,int *,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static UINT FUNC_7(LPCWSTR VAR_0, DWORD VAR_1,
                                        LPSTR VAR_2, DWORD VAR_3)
{
    CHAR *VAR_4;
    INT VAR_5;
    UINT VAR_6 = 0;

    VAR_5 = FUNC_5(932,0,VAR_0,VAR_1,0,0,((void*)0),((void*)0));
    VAR_4 = FUNC_2(FUNC_1(),0,VAR_5);
    FUNC_5(932,0,VAR_0,VAR_1,VAR_4,VAR_5,((void*)0),((void*)0));
    FUNC_4("%s\n",FUNC_6(VAR_4,VAR_5));

    VAR_6 = FUNC_0(VAR_4, VAR_5, ((void*)0));
    if (VAR_3 >= VAR_6)
    {
        FUNC_0(VAR_4, VAR_5, VAR_2);
    }
    FUNC_3(FUNC_1(),0,VAR_4);
    return VAR_6;

}
