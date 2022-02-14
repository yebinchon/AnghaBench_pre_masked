
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int name; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_2( PROFILESECTION **VAR_2, LPCWSTR VAR_3 )
{
    while (*VAR_2)
    {
        if (!FUNC_1( (*VAR_2)->name, VAR_3 ))
        {
            PROFILESECTION *VAR_4 = *VAR_2;
            *VAR_2 = VAR_4->next;
            VAR_4->next = ((void*)0);
            FUNC_0( VAR_4 );
            return VAR_1;
        }
        VAR_2 = &(*VAR_2)->next;
    }
    return VAR_0;
}
