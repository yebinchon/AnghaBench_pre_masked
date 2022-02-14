
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* value; struct TYPE_5__* key; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef TYPE_1__ PROFILEKEY ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( PROFILESECTION *VAR_0 )
{
    PROFILESECTION *VAR_1;
    PROFILEKEY *VAR_2, *VAR_3;

    for ( ; VAR_0; VAR_0 = VAR_1)
    {
        for (VAR_2 = VAR_0->key; VAR_2; VAR_2 = VAR_3)
        {
            VAR_3 = VAR_2->next;
            FUNC_1( FUNC_0(), 0, VAR_2->value );
            FUNC_1( FUNC_0(), 0, VAR_2 );
        }
        VAR_1 = VAR_0->next;
        FUNC_1( FUNC_0(), 0, VAR_0 );
    }
}
