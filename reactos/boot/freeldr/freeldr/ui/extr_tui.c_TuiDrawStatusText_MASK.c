
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef scalar_t__ SIZE_T ;
typedef char* PCSTR ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,scalar_t__,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;

VOID FUNC_4(PCSTR VAR_4)
{
    SIZE_T VAR_5;

    FUNC_1(0, VAR_0-1, " ", FUNC_0(VAR_3, VAR_2));
    FUNC_1(1, VAR_0-1, VAR_4, FUNC_0(VAR_3, VAR_2));

    for (VAR_5=FUNC_3(VAR_4)+1; VAR_5<VAR_1; VAR_5++)
    {
        FUNC_1((ULONG)VAR_5, VAR_0-1, " ", FUNC_0(VAR_3, VAR_2));
    }

    FUNC_2();
}
