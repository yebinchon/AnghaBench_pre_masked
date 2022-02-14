
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* num; int* snum; char** str; int* charc; } ;
struct TYPE_5__ {int type; scalar_t__ source; char* name; TYPE_1__ value; } ;
typedef TYPE_2__ XrmOption ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;






__attribute__((used)) static void FUNC_1 ( XrmOption *VAR_2 )
{
    if ( VAR_2->type == 131 || VAR_2->source == VAR_0 ) {
        FUNC_0 ( "/*" );
    }
    FUNC_0 ( "\t%s: ", VAR_2->name );
    switch ( VAR_2->type )
    {
    case 130:
        FUNC_0 ( "%u", *( VAR_2->value.num ) );
        break;
    case 129:
        FUNC_0 ( "%i", *( VAR_2->value.snum ) );
        break;
    case 128:
        if ( ( *( VAR_2->value.str ) ) != ((void*)0) ) {

            FUNC_0 ( "\"%s\"", *( VAR_2->value.str ) );
        }
        break;
    case 132:
        FUNC_0 ( "%s", ( *( VAR_2->value.num ) == VAR_1 ) ? "true" : "false" );
        break;
    case 131:

        if ( *( VAR_2->value.charc ) > 32 && *( VAR_2->value.charc ) < 127 ) {
            FUNC_0 ( "'%c'", *( VAR_2->value.charc ) );
        }
        else {
            FUNC_0 ( "'\\x%02X'", *( VAR_2->value.charc ) );
        }
        FUNC_0 ( " /* unsupported */" );
        break;
    default:
        break;
    }

    FUNC_0 ( ";" );
    if ( VAR_2->type == 131 || VAR_2->source == VAR_0 ) {
        FUNC_0 ( "*/" );
    }
    FUNC_0 ( "\n" );
}
