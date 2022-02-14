
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int flags; } ;
typedef TYPE_1__ textbox ;
typedef int KeyBindingAction ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char*) ;

int FUNC_14 ( textbox *VAR_2, KeyBindingAction VAR_3 )
{
    if ( VAR_2 == ((void*)0) ) {
        return 0;
    }
    if ( !( VAR_2->flags & VAR_0 ) ) {
        return 0;
    }

    switch ( VAR_3 )
    {

    case 139:
        return ( FUNC_4 ( VAR_2 ) == VAR_1 ) ? 2 : 0;

    case 138:
        return ( FUNC_11 ( VAR_2 ) == VAR_1 ) ? 2 : 0;

    case 140:
        FUNC_13 ( VAR_2, "" );
        return 1;

    case 136:
        FUNC_1 ( VAR_2, 0 );
        return 2;

    case 137:
        FUNC_10 ( VAR_2 );
        return 2;

    case 129:
        FUNC_3 ( VAR_2 );
        return 1;

    case 128:
        FUNC_9 ( VAR_2 );
        return 1;
    case 131:
        FUNC_7 ( VAR_2 );
        return 1;
    case 130:
        FUNC_8 ( VAR_2 );
        return 1;

    case 132:
        FUNC_6 ( VAR_2 );
        return 1;

    case 135:
        FUNC_5 ( VAR_2 );
        return 2;

    case 134:
        FUNC_12 ( VAR_2 );
        return 2;

    case 133:
        FUNC_2 ( VAR_2 );
        return 1;
    default:
        FUNC_0 ( 0 );
    }
}
