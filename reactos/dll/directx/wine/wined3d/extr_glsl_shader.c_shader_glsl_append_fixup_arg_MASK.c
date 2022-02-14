
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fixup_channel_source { ____Placeholder_fixup_channel_source } fixup_channel_source ;
typedef scalar_t__ BOOL ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, const char *VAR_1,
        BOOL VAR_2, enum fixup_channel_source VAR_3)
{
    switch(VAR_3)
    {
        case 128:
            FUNC_1(VAR_0, "0.0");
            break;

        case 133:
            FUNC_1(VAR_0, "1.0");
            break;

        case 131:
            FUNC_1(VAR_0, VAR_1);
            FUNC_1(VAR_0, ".x");
            break;

        case 130:
            FUNC_1(VAR_0, VAR_1);
            FUNC_1(VAR_0, ".y");
            break;

        case 129:
            FUNC_1(VAR_0, VAR_1);
            FUNC_1(VAR_0, ".z");
            break;

        case 132:
            FUNC_1(VAR_0, VAR_1);
            FUNC_1(VAR_0, ".w");
            break;

        default:
            FUNC_0("Unhandled channel source %#x\n", VAR_3);
            FUNC_1(VAR_0, "undefined");
            break;
    }

    if (VAR_2) FUNC_1(VAR_0, " * 2.0 - 1.0");
}
