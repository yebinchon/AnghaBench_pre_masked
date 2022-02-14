
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_5__ {scalar_t__* value; scalar_t__* name; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* key; scalar_t__* name; struct TYPE_4__* next; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef TYPE_2__ PROFILEKEY ;
typedef int HANDLE ;
typedef int ENCODING ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

__attribute__((used)) static void FUNC_7( HANDLE VAR_0, const PROFILESECTION *VAR_1, ENCODING VAR_2 )
{
    PROFILEKEY *VAR_3;
    WCHAR *VAR_4, *VAR_5;

    FUNC_4(VAR_0, VAR_2);

    for ( ; VAR_1; VAR_1 = VAR_1->next)
    {
        int VAR_6 = 0;

        if (VAR_1->name[0]) VAR_6 += FUNC_6(VAR_1->name) + 4;

        for (VAR_3 = VAR_1->key; VAR_3; VAR_3 = VAR_3->next)
        {
            VAR_6 += FUNC_6(VAR_3->name) + 2;
            if (VAR_3->value) VAR_6 += FUNC_6(VAR_3->value) + 1;
        }

        VAR_4 = FUNC_1(FUNC_0(), 0, VAR_6 * sizeof(WCHAR));
        if (!VAR_4) return;

        VAR_5 = VAR_4;
        if (VAR_1->name[0])
        {
            *VAR_5++ = '[';
            FUNC_5( VAR_5, VAR_1->name );
            VAR_5 += FUNC_6(VAR_5);
            *VAR_5++ = ']';
            *VAR_5++ = '\r';
            *VAR_5++ = '\n';
        }

        for (VAR_3 = VAR_1->key; VAR_3; VAR_3 = VAR_3->next)
        {
            FUNC_5( VAR_5, VAR_3->name );
            VAR_5 += FUNC_6(VAR_5);
            if (VAR_3->value)
            {
                *VAR_5++ = '=';
                FUNC_5( VAR_5, VAR_3->value );
                VAR_5 += FUNC_6(VAR_5);
            }
            *VAR_5++ = '\r';
            *VAR_5++ = '\n';
        }
        FUNC_3( VAR_0, VAR_4, VAR_6, VAR_2 );
        FUNC_2(FUNC_0(), 0, VAR_4);
    }
}
