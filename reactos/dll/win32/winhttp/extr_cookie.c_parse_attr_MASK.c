
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr {scalar_t__* value; scalar_t__* name; } ;
typedef char WCHAR ;


 int FUNC_0 (struct attr*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct attr*) ;
 int FUNC_3 (scalar_t__*,char const*,int) ;

__attribute__((used)) static struct attr *FUNC_4( const WCHAR *VAR_0, int *VAR_1 )
{
    const WCHAR *VAR_2 = VAR_0, *VAR_3;
    struct attr *VAR_4;
    int VAR_5;

    while (*VAR_2 == ' ') VAR_2++;
    VAR_3 = VAR_2;
    while (*VAR_3 && *VAR_3 != ' ' && *VAR_3 != '=' && *VAR_3 != ';') VAR_3++;
    VAR_5 = VAR_3 - VAR_2;
    if (!VAR_5) return ((void*)0);

    if (!(VAR_4 = FUNC_1( sizeof(struct attr) ))) return ((void*)0);
    if (!(VAR_4->name = FUNC_1( (VAR_5 + 1) * sizeof(WCHAR) )))
    {
        FUNC_2( VAR_4 );
        return ((void*)0);
    }
    FUNC_3( VAR_4->name, VAR_2, VAR_5 * sizeof(WCHAR) );
    VAR_4->name[VAR_5] = 0;
    VAR_4->value = ((void*)0);

    VAR_2 = VAR_3;
    while (*VAR_2 == ' ') VAR_2++;
    if (*VAR_2++ == '=')
    {
        while (*VAR_2 == ' ') VAR_2++;
        VAR_3 = VAR_2;
        while (*VAR_3 && *VAR_3 != ';') VAR_3++;
        VAR_5 = VAR_3 - VAR_2;
        while (VAR_5 && VAR_2[VAR_5 - 1] == ' ') VAR_5--;

        if (!(VAR_4->value = FUNC_1( (VAR_5 + 1) * sizeof(WCHAR) )))
        {
            FUNC_0( VAR_4 );
            return ((void*)0);
        }
        FUNC_3( VAR_4->value, VAR_2, VAR_5 * sizeof(WCHAR) );
        VAR_4->value[VAR_5] = 0;
    }

    while (*VAR_3 == ' ') VAR_3++;
    if (*VAR_3 == ';') VAR_3++;
    *VAR_1 = VAR_3 - VAR_0;

    return VAR_4;
}
