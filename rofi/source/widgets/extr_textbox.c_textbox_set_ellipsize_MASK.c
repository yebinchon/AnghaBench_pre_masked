
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int emode; int layout; } ;
typedef TYPE_1__ textbox ;
typedef int PangoEllipsizeMode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 ( textbox *VAR_1, PangoEllipsizeMode VAR_2 )
{
    if ( VAR_1 )
    {
        VAR_1->emode = VAR_2;
        if ( ( VAR_1->flags & VAR_0 ) != VAR_0 ) {

            FUNC_1 ( VAR_1->layout, VAR_1->emode );
            FUNC_2 ( FUNC_0 ( VAR_1 ) );
        }
    }
}
