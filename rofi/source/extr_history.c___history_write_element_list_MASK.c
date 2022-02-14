
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int index; int name; } ;
typedef TYPE_1__ _element ;
struct TYPE_6__ {unsigned int max_history_size; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (TYPE_1__**,unsigned int,int,int ,int *) ;

__attribute__((used)) static void FUNC_2 ( FILE *VAR_2, _element **VAR_3, unsigned int VAR_4 )
{
    if ( VAR_3 == ((void*)0) || VAR_4 == 0 ) {
        return;
    }

    FUNC_1 ( VAR_3, VAR_4, sizeof ( _element* ), VAR_0, ((void*)0) );


    int VAR_5 = VAR_3[VAR_4 - 1]->index;


    VAR_4 = ( VAR_4 > VAR_1.max_history_size ) ? VAR_1.max_history_size : VAR_4;


    for ( unsigned int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ ) {
        FUNC_0 ( VAR_2, "%ld %s\n", VAR_3[VAR_6]->index - VAR_5, VAR_3[VAR_6]->name );
    }
}
