
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t numProviders; struct TYPE_5__* entireNetwork; TYPE_1__* table; } ;
struct TYPE_4__ {int hLib; TYPE_2__* name; } ;
typedef size_t DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 TYPE_2__* VAR_0 ;

void FUNC_3(void)
{
    if (VAR_0)
    {
        DWORD VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->numProviders; VAR_1++)
        {
            FUNC_2(FUNC_1(), 0, VAR_0->table[VAR_1].name);
            FUNC_0(VAR_0->table[VAR_1].hLib);
        }
        FUNC_2(FUNC_1(), 0, VAR_0->entireNetwork);
        FUNC_2(FUNC_1(), 0, VAR_0);
        VAR_0 = ((void*)0);
    }
}
