
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int charc; int * num; int str; int snum; } ;
struct TYPE_5__ {int type; char* mem; void* source; TYPE_1__ value; int name; } ;
typedef TYPE_2__ XrmOption ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;






__attribute__((used)) static void FUNC_7 ( XrmOption *VAR_3 )
{

    char *VAR_4 = FUNC_6 ( "-%s", VAR_3->name );
    switch ( VAR_3->type )
    {
    case 130:
        if ( FUNC_4 ( VAR_4, VAR_3->value.num ) == VAR_2 ) {
            VAR_3->source = VAR_0;
        }
        break;
    case 129:
        if ( FUNC_2 ( VAR_4, VAR_3->value.snum ) == VAR_2 ) {
            VAR_3->source = VAR_0;
        }
        break;
    case 128:
        if ( FUNC_3 ( VAR_4, VAR_3->value.str ) == VAR_2 ) {
            if ( VAR_3->mem != ((void*)0) ) {
                FUNC_5 ( VAR_3->mem );
                VAR_3->mem = ((void*)0);
            }
            VAR_3->source = VAR_0;
        }
        break;
    case 132:
        if ( FUNC_0 ( VAR_4 ) >= 0 ) {
            *( VAR_3->value.num ) = VAR_2;
            VAR_3->source = VAR_0;
        }
        else {
            FUNC_5 ( VAR_4 );
            VAR_4 = FUNC_6 ( "-no-%s", VAR_3->name );
            if ( FUNC_0 ( VAR_4 ) >= 0 ) {
                *( VAR_3->value.num ) = VAR_1;
                VAR_3->source = VAR_0;
            }
        }
        break;
    case 131:
        if ( FUNC_1 ( VAR_4, VAR_3->value.charc ) == VAR_2 ) {
            VAR_3->source = VAR_0;
        }
        break;
    default:
        break;
    }
    FUNC_5 ( VAR_4 );
}
