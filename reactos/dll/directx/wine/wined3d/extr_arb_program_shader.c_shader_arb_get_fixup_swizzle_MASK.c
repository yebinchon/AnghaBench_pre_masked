
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fixup_channel_source { ____Placeholder_fixup_channel_source } fixup_channel_source ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static const char *FUNC_1(enum fixup_channel_source VAR_0)
{
    switch(VAR_0)
    {
        case 128: return "0";
        case 133: return "1";
        case 131: return "x";
        case 130: return "y";
        case 129: return "z";
        case 132: return "w";
        default:
            FUNC_0("Unhandled channel source %#x\n", VAR_0);
            return "undefined";
    }
}
