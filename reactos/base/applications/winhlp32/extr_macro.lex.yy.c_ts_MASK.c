
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(int VAR_0)
{
    static char VAR_1[2] = {0,0};

    switch (VAR_0)
    {
    case 132: return "EMPTY";
    case 128: return "VOID_FUNCTION";
    case 133: return "BOOL_FUNCTION";
    case 130: return "INTEGER";
    case 129: return "STRING";
    case 131: return "IDENTIFIER";
    default: VAR_1[0] = (char)VAR_0; return VAR_1;
    }
}
