
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_symbol {char* current; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,char*,int) ;
 char* FUNC_1 (struct parsed_symbol*,int) ;

__attribute__((used)) static const char* FUNC_2(struct parsed_symbol* VAR_2)
{
    char* VAR_3;
    BOOL VAR_4 = VAR_0;

    if (*VAR_2->current == '?')
    {
        VAR_4 = VAR_1;
        VAR_2->current++;
    }
    if (*VAR_2->current >= '0' && *VAR_2->current <= '8')
    {
        VAR_3 = FUNC_1(VAR_2, 3);
        if (VAR_4) VAR_3[0] = '-';
        VAR_3[VAR_4 ? 1 : 0] = *VAR_2->current + 1;
        VAR_3[VAR_4 ? 2 : 1] = '\0';
        VAR_2->current++;
    }
    else if (*VAR_2->current == '9')
    {
        VAR_3 = FUNC_1(VAR_2, 4);
        if (VAR_4) VAR_3[0] = '-';
        VAR_3[VAR_4 ? 1 : 0] = '1';
        VAR_3[VAR_4 ? 2 : 1] = '0';
        VAR_3[VAR_4 ? 3 : 2] = '\0';
        VAR_2->current++;
    }
    else if (*VAR_2->current >= 'A' && *VAR_2->current <= 'P')
    {
        int VAR_5 = 0;

        while (*VAR_2->current >= 'A' && *VAR_2->current <= 'P')
        {
            VAR_5 *= 16;
            VAR_5 += *VAR_2->current++ - 'A';
        }
        if (*VAR_2->current != '@') return ((void*)0);

        VAR_3 = FUNC_1(VAR_2, 17);
        FUNC_0(VAR_3, "%s%u", VAR_4 ? "-" : "", VAR_5);
        VAR_2->current++;
    }
    else return ((void*)0);
    return VAR_3;
}
