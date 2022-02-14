
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* nextcol; struct TYPE_4__* nextrow; } ;
typedef TYPE_1__ DISTINCTSET ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( DISTINCTSET *VAR_0 )
{
    while( VAR_0 )
    {
        DISTINCTSET *VAR_1 = VAR_0->nextrow;
        FUNC_1( VAR_0->nextcol );
        FUNC_0( VAR_0 );
        VAR_0 = VAR_1;
    }
}
