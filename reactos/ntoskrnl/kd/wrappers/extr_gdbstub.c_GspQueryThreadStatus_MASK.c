
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PETHREAD ;
typedef int * PCHAR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 char* VAR_0 ;
 int FUNC_1 (int ) ;

VOID
FUNC_2(PCHAR VAR_1)
{
    PETHREAD VAR_2;
    PCHAR VAR_3 = &VAR_1[0];

    if (FUNC_0(VAR_3, &VAR_2))
    {
        FUNC_1(VAR_2);

        VAR_0[0] = 'O';
        VAR_0[1] = 'K';
        VAR_0[2] = '\0';
    }
    else
    {
        VAR_0[0] = 'E';
        VAR_0[1] = '\0';
    }
}
