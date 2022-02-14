
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* value; int name; } ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_2__* key; int name; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef TYPE_2__ PROFILEKEY ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_3( PROFILESECTION **VAR_2,
          LPCWSTR VAR_3, LPCWSTR VAR_4 )
{
    while (*VAR_2)
    {
        if (!FUNC_2( (*VAR_2)->name, VAR_3 ))
        {
            PROFILEKEY **VAR_5 = &(*VAR_2)->key;
            while (*VAR_5)
            {
                if (!FUNC_2( (*VAR_5)->name, VAR_4 ))
                {
                    PROFILEKEY *VAR_6 = *VAR_5;
                    *VAR_5 = VAR_6->next;
                    FUNC_1( FUNC_0(), 0, VAR_6->value);
                    FUNC_1( FUNC_0(), 0, VAR_6 );
                    return VAR_1;
                }
                VAR_5 = &(*VAR_5)->next;
            }
        }
        VAR_2 = &(*VAR_2)->next;
    }
    return VAR_0;
}
