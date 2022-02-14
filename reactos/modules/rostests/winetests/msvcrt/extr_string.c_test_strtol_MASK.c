
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    static char VAR_3[] = "-0x";

    char* VAR_4;
    LONG VAR_5;
    ULONG VAR_6;



    VAR_2 = VAR_0;
    VAR_5 = FUNC_2("-1234", &VAR_4, 0);
    FUNC_1(VAR_5==-1234, "wrong value %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_0 || FUNC_0(VAR_2 == 0), "wrong errno %d\n", VAR_2);
    VAR_2 = VAR_0;
    VAR_6 = FUNC_3("1234", &VAR_4, 0);
    FUNC_1(VAR_6==1234, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == VAR_0 || FUNC_0(VAR_2 == 0), "wrong errno %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_5 = FUNC_2("2147483647L", &VAR_4, 0);
    FUNC_1(VAR_5==2147483647, "wrong value %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_0 || FUNC_0(VAR_2 == 0), "wrong errno %d\n", VAR_2);
    VAR_2 = VAR_0;
    VAR_5 = FUNC_2("-2147483648L", &VAR_4, 0);
    FUNC_1(VAR_5==-2147483647L - 1, "wrong value %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_0 || FUNC_0(VAR_2 == 0), "wrong errno %d\n", VAR_2);
    VAR_2 = VAR_0;
    VAR_6 = FUNC_3("4294967295UL", &VAR_4, 0);
    FUNC_1(VAR_6==4294967295ul, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == VAR_0 || FUNC_0(VAR_2 == 0), "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_5 = FUNC_2("9223372036854775807L", &VAR_4, 0);
    FUNC_1(VAR_5==2147483647, "wrong value %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_1, "wrong errno %d\n", VAR_2);
    VAR_2 = 0;
    VAR_6 = FUNC_3("9223372036854775807L", &VAR_4, 0);
    FUNC_1(VAR_6==4294967295ul, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_6 = FUNC_3("-2", ((void*)0), 0);
    FUNC_1(VAR_6 == -2, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == 0, "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_6 = FUNC_3("-4294967294", ((void*)0), 0);
    FUNC_1(VAR_6 == 2, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == 0, "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_6 = FUNC_3("-4294967295", ((void*)0), 0);
    FUNC_1(VAR_6==1, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == 0, "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_6 = FUNC_3("-4294967296", ((void*)0), 0);
    FUNC_1(VAR_6 == 1, "wrong value %u\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "wrong errno %d\n", VAR_2);

    VAR_2 = 0;
    VAR_5 = FUNC_2(VAR_3, &VAR_4, 0);
    FUNC_1(VAR_5 == 0, "wrong value %d\n", VAR_5);
    FUNC_1(VAR_2 == 0, "wrong errno %d\n", VAR_2);
    FUNC_1(VAR_4 == VAR_3, "e = %p, neg = %p\n", VAR_4, VAR_3);
}
