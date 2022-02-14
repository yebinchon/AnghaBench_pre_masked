
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ val; int count; int * nextcol; struct TYPE_5__* nextrow; scalar_t__ row; } ;
typedef TYPE_1__ DISTINCTSET ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static DISTINCTSET ** FUNC_1( DISTINCTSET **VAR_0, UINT VAR_1, UINT VAR_2 )
{

    while( *VAR_0 )
    {
        if( (*VAR_0)->val == VAR_1 )
        {
            (*VAR_0)->count++;
            return VAR_0;
        }
        VAR_0 = &(*VAR_0)->nextrow;
    }


    *VAR_0 = FUNC_0( sizeof (DISTINCTSET) );
    if( *VAR_0 )
    {
        (*VAR_0)->val = VAR_1;
        (*VAR_0)->count = 1;
        (*VAR_0)->row = VAR_2;
        (*VAR_0)->nextrow = ((void*)0);
        (*VAR_0)->nextcol = ((void*)0);
    }
    return VAR_0;
}
