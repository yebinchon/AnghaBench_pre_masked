
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(char VAR_0)
{
    const char* VAR_1;

    switch (VAR_0)
    {
    case 'C': VAR_1 = "signed char"; break;
    case 'D': VAR_1 = "char"; break;
    case 'E': VAR_1 = "unsigned char"; break;
    case 'F': VAR_1 = "short"; break;
    case 'G': VAR_1 = "unsigned short"; break;
    case 'H': VAR_1 = "int"; break;
    case 'I': VAR_1 = "unsigned int"; break;
    case 'J': VAR_1 = "long"; break;
    case 'K': VAR_1 = "unsigned long"; break;
    case 'M': VAR_1 = "float"; break;
    case 'N': VAR_1 = "double"; break;
    case 'O': VAR_1 = "long double"; break;
    case 'X': VAR_1 = "void"; break;
    case 'Z': VAR_1 = "..."; break;
    default: VAR_1 = ((void*)0); break;
    }
    return VAR_1;
}
