
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int atom; } ;
typedef TYPE_1__ xcb_intern_atom_reply_t ;
typedef int xcb_intern_atom_cookie_t ;
struct TYPE_6__ {int connection; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_4 ( void )
{

    for ( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ ) {
        xcb_intern_atom_cookie_t VAR_5 = FUNC_2 ( VAR_3->connection, 0, FUNC_1 ( VAR_1[VAR_4] ), VAR_1[VAR_4] );
        xcb_intern_atom_reply_t *VAR_6 = FUNC_3 ( VAR_3->connection, VAR_5, ((void*)0) );
        if ( VAR_6 ) {
            VAR_2[VAR_4] = VAR_6->atom;
            FUNC_0 ( VAR_6 );
        }
    }
}
