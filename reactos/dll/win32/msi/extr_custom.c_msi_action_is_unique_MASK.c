
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_3__ {size_t unique_actions_count; int * unique_actions; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

BOOL FUNC_1( const MSIPACKAGE *VAR_2, const WCHAR *VAR_3 )
{
    UINT VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->unique_actions_count; VAR_4++)
    {
        if (!FUNC_0( VAR_2->unique_actions[VAR_4], VAR_3 )) return VAR_1;
    }
    return VAR_0;
}
