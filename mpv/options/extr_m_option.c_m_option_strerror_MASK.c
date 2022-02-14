
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(int VAR_0)
{
    switch (VAR_0) {
    case 128:
        return "option not found";
    case 130:
        return "option requires parameter";
    case 131:
        return "option parameter could not be parsed";
    case 129:
        return "parameter is outside values allowed for option";
    case 132:
        return "option doesn't take a parameter";
    default:
        return "parser error";
    }
}
