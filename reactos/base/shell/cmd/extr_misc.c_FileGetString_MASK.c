
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPTSTR ;
typedef char* LPSTR ;
typedef scalar_t__ INT ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;
 int VAR_3 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char,scalar_t__) ;

BOOL FUNC_6 (HANDLE VAR_4, LPTSTR VAR_5, INT VAR_6)
{
    LPSTR VAR_7;
    DWORD VAR_8;
    INT VAR_9 = 0;



    VAR_7 = VAR_5;


    if (FUNC_1(VAR_4, VAR_7, VAR_6 - 1, &VAR_8, ((void*)0)))
    {

        CHAR *VAR_10 = FUNC_5(VAR_7, '\n', VAR_8);
        VAR_9 = VAR_8;
        if (VAR_10)
        {
            VAR_9 = (INT)(VAR_10 - VAR_7) + 1;
            FUNC_2(VAR_4, VAR_9 - VAR_8, ((void*)0), VAR_1);
        }
    }

    if (!VAR_9)
    {



        return VAR_0;
    }

    VAR_7[VAR_9++] = '\0';




    return VAR_3;
}
