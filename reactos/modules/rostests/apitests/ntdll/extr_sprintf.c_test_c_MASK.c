
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2()
{
    char VAR_0[64];

    FUNC_1(VAR_0, "%c", 0x3031);
    FUNC_0(VAR_0, "1");

    FUNC_1(VAR_0, "%hc", 0x3031);
    FUNC_0(VAR_0, "1");

    FUNC_1(VAR_0, "%wc", 0x3031);
    FUNC_0(VAR_0, "?");

    FUNC_1(VAR_0, "%lc", 0x3031);
    FUNC_0(VAR_0, "?");

    FUNC_1(VAR_0, "%Lc", 0x3031);
    FUNC_0(VAR_0, "1");

    FUNC_1(VAR_0, "%Ic", 0x3031);
    FUNC_0(VAR_0, "Ic");

    FUNC_1(VAR_0, "%Iwc", 0x3031);
    FUNC_0(VAR_0, "Iwc");

    FUNC_1(VAR_0, "%I32c", 0x3031);
    FUNC_0(VAR_0, "1");

    FUNC_1(VAR_0, "%I64c", 0x3031);
    FUNC_0(VAR_0, "1");

    FUNC_1(VAR_0, "%4c", 0x3031);
    FUNC_0(VAR_0, "   1");

    FUNC_1(VAR_0, "%04c", 0x3031);
    FUNC_0(VAR_0, "0001");

    FUNC_1(VAR_0, "%+4c", 0x3031);
    FUNC_0(VAR_0, "   1");

}
