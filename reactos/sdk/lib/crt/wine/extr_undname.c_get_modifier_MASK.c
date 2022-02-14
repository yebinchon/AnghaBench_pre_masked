
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_symbol {char* current; int flags; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_0(struct parsed_symbol *VAR_4, const char **VAR_5, const char **VAR_6)
{
    *VAR_6 = ((void*)0);
    if (*VAR_4->current == 'E')
    {
        if (!(VAR_4->flags & VAR_3))
        {
            *VAR_6 = "__ptr64";
            if (VAR_4->flags & VAR_2)
                *VAR_6 = *VAR_6 + 2;
        }
        VAR_4->current++;
    }
    switch (*VAR_4->current++)
    {
    case 'A': *VAR_5 = ((void*)0); break;
    case 'B': *VAR_5 = "const"; break;
    case 'C': *VAR_5 = "volatile"; break;
    case 'D': *VAR_5 = "const volatile"; break;
    default: return VAR_0;
    }
    return VAR_1;
}
