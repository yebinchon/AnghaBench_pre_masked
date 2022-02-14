
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIRP ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

BOOLEAN
FUNC_3(PIRP VAR_3)
{
    BOOLEAN VAR_4 = VAR_0;

    FUNC_2(VAR_1, "NtfsIsIrpTopLevel()\n");

    if (FUNC_0() == ((void*)0))
    {
        FUNC_1(VAR_3);
        VAR_4 = VAR_2;
    }

    return VAR_4;
}
