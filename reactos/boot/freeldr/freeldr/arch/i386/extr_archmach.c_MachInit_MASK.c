
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int MACHVTBL ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,int) ;

VOID
FUNC_7(const char *VAR_1)
{
    ULONG VAR_2;

    FUNC_6(&VAR_0, 0, sizeof(MACHVTBL));



    FUNC_4((ULONG*)0xcf8, FUNC_0(0, 0, 0));
    VAR_2 = FUNC_3((ULONG*)0xcfc);
    if (VAR_2 == 0x02a510de)
    {
        FUNC_5(VAR_1);
    }
    else
    {
        FUNC_2(VAR_1);
    }

    FUNC_1();
}
