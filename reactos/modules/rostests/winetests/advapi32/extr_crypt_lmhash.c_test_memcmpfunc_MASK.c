
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* memcmpfunc ) (unsigned char*,unsigned char*) ;


 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(memcmpfunc VAR_0)
{
    unsigned char VAR_1[0x20], VAR_2[0x20];
    int VAR_3;

    if (!VAR_0)
    {
        FUNC_2("function is not available\n");
        return;
    }

    FUNC_0(VAR_1, 0, sizeof VAR_1);
    FUNC_0(VAR_2, 0, sizeof VAR_2);
    VAR_1[0x10] = 1;

    VAR_3 = VAR_0(VAR_1, VAR_2);
    FUNC_1( VAR_3 == 1, "wrong error code\n");

    FUNC_0(VAR_1, 1, sizeof VAR_1);
    FUNC_0(VAR_2, 1, sizeof VAR_2);
    VAR_1[0x10] = 0;

    VAR_3 = VAR_0(VAR_1, VAR_2);
    FUNC_1( VAR_3 == 1, "wrong error code\n");

    FUNC_0(VAR_1, 0, sizeof VAR_1);
    FUNC_0(VAR_2, 1, sizeof VAR_2);

    VAR_3 = VAR_0(VAR_1, VAR_2);
    FUNC_1( VAR_3 == 0, "wrong error code\n");

    FUNC_0(VAR_1, 1, sizeof VAR_1);
    FUNC_0(VAR_2, 0, sizeof VAR_2);

    VAR_3 = VAR_0(VAR_1, VAR_2);
    FUNC_1( VAR_3 == 0, "wrong error code\n");
}
