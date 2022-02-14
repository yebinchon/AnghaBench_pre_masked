
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef char* PCHAR ;


 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

VOID FUNC_2(PCHAR VAR_0)
{
    ULONG VAR_1;

    for (VAR_1=0; VAR_1<FUNC_1(VAR_0); VAR_1++)
    {

        if (VAR_0[VAR_1] == '\\' && VAR_0[VAR_1+1] == 'n')
        {

            VAR_0[VAR_1] = '\n';


            FUNC_0(&VAR_0[VAR_1+1], &VAR_0[VAR_1+2]);
        }
    }
}
