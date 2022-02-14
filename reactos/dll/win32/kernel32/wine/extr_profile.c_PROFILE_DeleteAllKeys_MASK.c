
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int changed; TYPE_1__* section; } ;
struct TYPE_6__ {struct TYPE_6__* value; struct TYPE_6__* next; } ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_2__* key; int name; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef TYPE_2__ PROFILEKEY ;
typedef int LPCWSTR ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( LPCWSTR VAR_2)
{
    PROFILESECTION **VAR_3= &VAR_0->section;
    while (*VAR_3)
    {
        if (!FUNC_2( (*VAR_3)->name, VAR_2 ))
        {
            PROFILEKEY **VAR_4 = &(*VAR_3)->key;
            while (*VAR_4)
            {
                PROFILEKEY *VAR_5 = *VAR_4;
  *VAR_4 = VAR_5->next;
                FUNC_1( FUNC_0(), 0, VAR_5->value);
  FUNC_1( FUNC_0(), 0, VAR_5 );
  VAR_0->changed =VAR_1;
            }
        }
        VAR_3 = &(*VAR_3)->next;
    }
}
