
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int ** cache_net; int * cache_sxs; } ;
typedef TYPE_1__ MSIPACKAGE ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

void FUNC_2( MSIPACKAGE *VAR_11 )
{
    UINT VAR_12;

    if (VAR_11->cache_sxs)
    {
        FUNC_1( VAR_11->cache_sxs );
        VAR_11->cache_sxs = ((void*)0);
    }
    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
    {
        if (VAR_11->cache_net[VAR_12])
        {
            FUNC_1( VAR_11->cache_net[VAR_12] );
            VAR_11->cache_net[VAR_12] = ((void*)0);
        }
    }
    VAR_7 = ((void*)0);
    VAR_8 = ((void*)0);
    VAR_9 = ((void*)0);
    VAR_10 = ((void*)0);
    FUNC_0( VAR_1 );
    FUNC_0( VAR_2 );
    FUNC_0( VAR_3 );
    FUNC_0( VAR_4 );
    FUNC_0( VAR_5 );
    FUNC_0( VAR_6 );
    VAR_1 = ((void*)0);
    VAR_2 = ((void*)0);
    VAR_3 = ((void*)0);
    VAR_4 = ((void*)0);
    VAR_5 = ((void*)0);
    VAR_6 = ((void*)0);
}
