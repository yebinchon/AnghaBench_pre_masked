
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef scalar_t__ LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__* VAR_0 ;

LPSTR FUNC_3(ULONG VAR_1)
{
    LPSTR VAR_2;

    FUNC_1();

    FUNC_0((0,"GetFromCommandLineHistory(): current = %u\n",VAR_1));


    VAR_2 = VAR_0[VAR_1] + 1;

    FUNC_0((0,"GetFromCommandLineHistory(%s)\n",VAR_2));

    FUNC_2();

    return VAR_2;
}
