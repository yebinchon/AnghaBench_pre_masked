
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * module; } ;
typedef int GModule ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_3 ( void )
{
    for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ ) {
        if ( VAR_0[VAR_2]->module ) {
            GModule *VAR_3 = VAR_0[VAR_2]->module;
            VAR_0[VAR_2] = ((void*)0);
            FUNC_1 ( VAR_3 );
        }
        if ( VAR_0[VAR_2] ) {
            FUNC_2 ( &( VAR_0[VAR_2] ) );
        }
    }
    FUNC_0 ( VAR_0 );
    VAR_0 = ((void*)0);
    VAR_1 = 0;
}
