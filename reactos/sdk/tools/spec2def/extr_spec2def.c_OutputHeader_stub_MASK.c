
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(FILE *VAR_1)
{
    FUNC_0(VAR_1, "/* This file is autogenerated, do not edit. */\n\n"
            "#include <stubs.h>\n");

    if (VAR_0)
    {
        FUNC_0(VAR_1, "#include <wine/debug.h>\n");
        FUNC_0(VAR_1, "#include <inttypes.h>\n");
        FUNC_0(VAR_1, "WINE_DECLARE_DEBUG_CHANNEL(relay);\n");
    }

    FUNC_0(VAR_1, "\n");
}
