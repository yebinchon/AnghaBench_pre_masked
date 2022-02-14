
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* value; scalar_t__* name; int entry; } ;
typedef TYPE_1__ cookie_t ;
typedef char WCHAR ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static cookie_t *FUNC_8( const WCHAR *VAR_0 )
{
    cookie_t *VAR_1;
    const WCHAR *VAR_2;
    int VAR_3;

    if (!(VAR_2 = FUNC_6( VAR_0, '=' ))) VAR_2 = VAR_0 + FUNC_7( VAR_0 );
    VAR_3 = VAR_2 - VAR_0;
    while (VAR_3 && VAR_0[VAR_3 - 1] == ' ') VAR_3--;
    if (!VAR_3) return ((void*)0);

    if (!(VAR_1 = FUNC_2( sizeof(cookie_t) ))) return ((void*)0);
    FUNC_4( &VAR_1->entry );

    if (!(VAR_1->name = FUNC_1( (VAR_3 + 1) * sizeof(WCHAR) )))
    {
        FUNC_3( VAR_1 );
        return ((void*)0);
    }
    FUNC_5( VAR_1->name, VAR_0, VAR_3 * sizeof(WCHAR) );
    VAR_1->name[VAR_3] = 0;

    if (*VAR_2++ == '=')
    {
        while (*VAR_2 == ' ') VAR_2++;
        VAR_3 = FUNC_7( VAR_2 );
        while (VAR_3 && VAR_2[VAR_3 - 1] == ' ') VAR_3--;

        if (!(VAR_1->value = FUNC_1( (VAR_3 + 1) * sizeof(WCHAR) )))
        {
            FUNC_0( VAR_1 );
            return ((void*)0);
        }
        FUNC_5( VAR_1->value, VAR_2, VAR_3 * sizeof(WCHAR) );
        VAR_1->value[VAR_3] = 0;
    }
    return VAR_1;
}
