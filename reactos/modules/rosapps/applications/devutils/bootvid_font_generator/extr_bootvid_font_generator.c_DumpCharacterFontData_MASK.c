
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(DWORD VAR_2[])
{
    static int VAR_3 = 0;
    int VAR_4;

    FUNC_0(VAR_1, "    ");

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_0(VAR_1, "0x%02X, ", VAR_2[VAR_4]);

    FUNC_0(VAR_1, " // %d\n", VAR_3);
    VAR_3 += VAR_0;
}
