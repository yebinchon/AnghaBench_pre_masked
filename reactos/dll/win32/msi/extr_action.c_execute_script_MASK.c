
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t* script_actions_count; int ** script_actions; } ;
typedef TYPE_1__ MSIPACKAGE ;


 size_t FUNC_0 (TYPE_1__*,int ,size_t) ;
 int FUNC_1 (char*,size_t,int ,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,size_t) ;

__attribute__((used)) static UINT FUNC_5( MSIPACKAGE *VAR_2, UINT VAR_3 )
{
    UINT VAR_4, VAR_5 = VAR_0;

    FUNC_2("executing script %u\n", VAR_3);

    if (VAR_3 == VAR_1)
    {
        for (VAR_4 = VAR_2->script_actions_count[VAR_3]; VAR_4 > 0; VAR_4--)
        {
            VAR_5 = FUNC_0(VAR_2, VAR_2->script_actions[VAR_3][VAR_4-1], VAR_3);
            if (VAR_5 != VAR_0)
            {
                FUNC_1("Execution of script %i halted; action %s returned %u\n",
                    VAR_3, FUNC_3(VAR_2->script_actions[VAR_3][VAR_4-1]), VAR_5);
                break;
            }
        }
    }
    else
    {
        for (VAR_4 = 0; VAR_4 < VAR_2->script_actions_count[VAR_3]; VAR_4++)
        {
            VAR_5 = FUNC_0(VAR_2, VAR_2->script_actions[VAR_3][VAR_4], VAR_3);
            if (VAR_5 != VAR_0)
            {
                FUNC_1("Execution of script %i halted; action %s returned %u\n",
                    VAR_3, FUNC_3(VAR_2->script_actions[VAR_3][VAR_4]), VAR_5);
                break;
            }
        }
    }
    FUNC_4(VAR_2, VAR_3);
    return VAR_5;
}
