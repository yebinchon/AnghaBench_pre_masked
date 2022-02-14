
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*,char) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static BOOL FUNC_1(char VAR_5, const char** VAR_6,
                                   const char** VAR_7, unsigned VAR_8)
{
    *VAR_6 = *VAR_7 = ((void*)0);

    if (!(VAR_8 & (VAR_4 | VAR_2)))
    {
        if (VAR_8 & VAR_3)
        {
            if (((VAR_5 - 'A') % 2) == 1) *VAR_7 = "dll_export ";
            switch (VAR_5)
            {
            case 'A': case 'B': *VAR_6 = "cdecl"; break;
            case 'C': case 'D': *VAR_6 = "pascal"; break;
            case 'E': case 'F': *VAR_6 = "thiscall"; break;
            case 'G': case 'H': *VAR_6 = "stdcall"; break;
            case 'I': case 'J': *VAR_6 = "fastcall"; break;
            case 'K': case 'L': break;
            case 'M': *VAR_6 = "clrcall"; break;
            default: FUNC_0("Unknown calling convention %c\n", VAR_5); return VAR_0;
            }
        }
        else
        {
            if (((VAR_5 - 'A') % 2) == 1) *VAR_7 = "__dll_export ";
            switch (VAR_5)
            {
            case 'A': case 'B': *VAR_6 = "__cdecl"; break;
            case 'C': case 'D': *VAR_6 = "__pascal"; break;
            case 'E': case 'F': *VAR_6 = "__thiscall"; break;
            case 'G': case 'H': *VAR_6 = "__stdcall"; break;
            case 'I': case 'J': *VAR_6 = "__fastcall"; break;
            case 'K': case 'L': break;
            case 'M': *VAR_6 = "__clrcall"; break;
            default: FUNC_0("Unknown calling convention %c\n", VAR_5); return VAR_0;
            }
        }
    }
    return VAR_1;
}
