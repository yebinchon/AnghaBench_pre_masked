
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_3__ {size_t unique_actions_count; int ** unique_actions; } ;
typedef TYPE_1__ MSIPACKAGE ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*) ;
 int ** FUNC_2 (int) ;
 int ** FUNC_3 (int **,int) ;
 int * FUNC_4 (int const*) ;

UINT FUNC_5( MSIPACKAGE *VAR_1, const WCHAR *VAR_2 )
{
    UINT VAR_3;
    WCHAR **VAR_4 = ((void*)0);

    FUNC_0("Registering %s as unique action\n", FUNC_1(VAR_2));

    VAR_3 = VAR_1->unique_actions_count;
    VAR_1->unique_actions_count++;
    if (VAR_3 != 0) VAR_4 = FUNC_3( VAR_1->unique_actions,
                                          VAR_1->unique_actions_count * sizeof(WCHAR *) );
    else VAR_4 = FUNC_2( sizeof(WCHAR *) );

    VAR_4[VAR_3] = FUNC_4( VAR_2 );
    VAR_1->unique_actions = VAR_4;
    return VAR_0;
}
