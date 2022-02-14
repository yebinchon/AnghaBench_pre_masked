
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPWSTR ;
typedef int * LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int,int ,int *,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static UINT FUNC_8(LPCSTR VAR_1, DWORD VAR_2,
                                            LPWSTR VAR_3, DWORD VAR_4)
{
    CHAR *VAR_5;
    UINT VAR_6 = 0;
    int VAR_7 = FUNC_1(VAR_1,VAR_2);
    FUNC_6("Japanese code %i\n",VAR_7);

    switch (VAR_7)
    {
    case 0:
        if (VAR_3)
            VAR_6 = FUNC_5(VAR_0,0,VAR_1,VAR_2,VAR_3,VAR_4);
        else
            VAR_6 = FUNC_5(VAR_0,0,VAR_1,VAR_2,0,0);
        break;

    case 932:
        if (VAR_3)
            VAR_6 = FUNC_5(932,0,VAR_1,VAR_2,VAR_3,VAR_4);
        else
            VAR_6 = FUNC_5(932,0,VAR_1,VAR_2,0,0);
        break;

    case 51932:
        if (VAR_3)
            VAR_6 = FUNC_5(20932,0,VAR_1,VAR_2,VAR_3,VAR_4);
        else
            VAR_6 = FUNC_5(20932,0,VAR_1,VAR_2,0,0);
        break;

    case 50220:
        VAR_5 = FUNC_3(FUNC_2(),0,VAR_2);
        VAR_6 = FUNC_0(VAR_1,VAR_2,VAR_5);
        if (VAR_6)
        {
            FUNC_6("%s\n",FUNC_7(VAR_5,VAR_6));
            if (VAR_3)
                VAR_6 = FUNC_5(932,0,VAR_5,VAR_6,VAR_3,VAR_4);
            else
                VAR_6 = FUNC_5(932,0,VAR_5,VAR_6,0,0);
        }
        FUNC_4(FUNC_2(),0,VAR_5);
        break;
    }
    return VAR_6;
}
