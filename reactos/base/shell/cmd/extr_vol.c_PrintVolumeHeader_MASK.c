
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int * LPTSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int,int *,int *,int *,int *,int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static INT
FUNC_7 (LPTSTR VAR_3)
{
    TCHAR VAR_4[80];
    DWORD VAR_5;


    if (!FUNC_3(VAR_3,
                             VAR_4,
                             80,
                             &VAR_5,
                             ((void*)0),
                             ((void*)0),
                             ((void*)0),
                             0))
    {
        FUNC_1(FUNC_2 (), FUNC_6(""));
        return 1;
    }


    if (VAR_4[0] != '\0')
    {
        FUNC_0(VAR_0, VAR_3[0],VAR_4);
    }
    else
    {
        FUNC_0(VAR_1, VAR_3[0]);
    }


    FUNC_0(VAR_2, FUNC_4(VAR_5), FUNC_5(VAR_5));
    return 0;
}
