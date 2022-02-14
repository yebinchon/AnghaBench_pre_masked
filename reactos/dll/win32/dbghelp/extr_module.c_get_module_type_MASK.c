
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum module_type { ____Placeholder_module_type } module_type ;
typedef int BOOL ;






__attribute__((used)) static const char* FUNC_0(enum module_type VAR_0, BOOL VAR_1)
{
    switch (VAR_0)
    {
    case 130: return VAR_1 ? "Virtual ELF" : "ELF";
    case 128: return VAR_1 ? "Virtual PE" : "PE";
    case 129: return VAR_1 ? "Virtual Mach-O" : "Mach-O";
    default: return "---";
    }
}
