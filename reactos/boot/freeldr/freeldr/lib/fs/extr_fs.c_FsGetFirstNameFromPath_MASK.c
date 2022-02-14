
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef char* PCSTR ;
typedef char* PCHAR ;


 int FUNC_0 (char*,char*,char*) ;
 size_t FUNC_1 (char*) ;

VOID FUNC_2(PCHAR VAR_0, PCSTR VAR_1)
{
    size_t VAR_2;
    size_t VAR_3;

    VAR_3 = FUNC_1(VAR_1);




    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    {
        if ((VAR_1[VAR_2] == '\\') || (VAR_1[VAR_2] == '/'))
        {
            break;
        }
        else
        {
            VAR_0[VAR_2] = VAR_1[VAR_2];
        }
    }

    VAR_0[VAR_2] = 0;

    FUNC_0("FsGetFirstNameFromPath() Path = %s FirstName = %s\n", VAR_1, VAR_0);
}
