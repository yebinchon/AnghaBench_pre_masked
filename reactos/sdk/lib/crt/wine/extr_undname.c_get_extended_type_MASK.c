
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(char VAR_0)
{
    const char* VAR_1;

    switch (VAR_0)
    {
    case 'D': VAR_1 = "__int8"; break;
    case 'E': VAR_1 = "unsigned __int8"; break;
    case 'F': VAR_1 = "__int16"; break;
    case 'G': VAR_1 = "unsigned __int16"; break;
    case 'H': VAR_1 = "__int32"; break;
    case 'I': VAR_1 = "unsigned __int32"; break;
    case 'J': VAR_1 = "__int64"; break;
    case 'K': VAR_1 = "unsigned __int64"; break;
    case 'L': VAR_1 = "__int128"; break;
    case 'M': VAR_1 = "unsigned __int128"; break;
    case 'N': VAR_1 = "bool"; break;
    case 'W': VAR_1 = "wchar_t"; break;
    default: VAR_1 = ((void*)0); break;
    }
    return VAR_1;
}
