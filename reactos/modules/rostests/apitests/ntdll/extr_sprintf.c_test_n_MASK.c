
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __int64 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,char*,int*) ;

void
FUNC_3()
{
    int VAR_0 = 123;
    __int64 VAR_1;
    char VAR_2[64];

    FUNC_2(VAR_2, "%07s%n", "test", &VAR_0);
    FUNC_1(VAR_0, 7);

    VAR_0 = 0x12345678;
    FUNC_2(VAR_2, "%s%hn", "test", &VAR_0);
    FUNC_1(VAR_0, 0x12340004);

    VAR_0 = 0x12345678;
    FUNC_2(VAR_2, "%s%hhn", "test", &VAR_0);
    FUNC_1(VAR_0, 0x12340004);

    VAR_1 = 0x0123456781234567ULL;
    FUNC_2(VAR_2, "%s%lln", "test", &VAR_1);
    FUNC_0(VAR_1 == 0x123456700000004ULL, " ");

}
