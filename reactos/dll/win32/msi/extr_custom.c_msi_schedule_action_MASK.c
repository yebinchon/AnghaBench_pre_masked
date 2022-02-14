
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_3__ {size_t* script_actions_count; int *** script_actions; } ;
typedef TYPE_1__ MSIPACKAGE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int const*) ;
 int ** FUNC_3 (int) ;
 int ** FUNC_4 (int **,int) ;
 int * FUNC_5 (int const*) ;

UINT FUNC_6( MSIPACKAGE *VAR_3, UINT VAR_4, const WCHAR *VAR_5 )
{
    UINT VAR_6;
    WCHAR **VAR_7 = ((void*)0);

    if (VAR_4 >= VAR_2)
    {
        FUNC_0("Unknown script requested %u\n", VAR_4);
        return VAR_0;
    }
    FUNC_1("Scheduling action %s in script %u\n", FUNC_2(VAR_5), VAR_4);

    VAR_6 = VAR_3->script_actions_count[VAR_4];
    VAR_3->script_actions_count[VAR_4]++;
    if (VAR_6 != 0) VAR_7 = FUNC_4( VAR_3->script_actions[VAR_4],
                                          VAR_3->script_actions_count[VAR_4] * sizeof(WCHAR *) );
    else VAR_7 = FUNC_3( sizeof(WCHAR *) );

    VAR_7[VAR_6] = FUNC_5( VAR_5 );
    VAR_3->script_actions[VAR_4] = VAR_7;
    return VAR_1;
}
