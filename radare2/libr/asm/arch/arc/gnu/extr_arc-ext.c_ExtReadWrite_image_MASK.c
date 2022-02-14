
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ExtReadWrite { ____Placeholder_ExtReadWrite } ExtReadWrite ;







__attribute__((used)) static const char* FUNC_0(enum ExtReadWrite VAR_0)
{
    switch (VAR_0)
    {
        case 131 : return "INVALID";
        case 130 : return "RO";
        case 128 : return "WO";
        case 129: return "R/W";
        default : return "???";
    }
}
