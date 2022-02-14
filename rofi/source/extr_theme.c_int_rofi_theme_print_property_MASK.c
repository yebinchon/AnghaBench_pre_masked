
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {int * next; scalar_t__ data; } ;
struct TYPE_12__ {char* name; TYPE_7__* def_value; } ;
struct TYPE_17__ {int left; int bottom; int right; int top; } ;
struct TYPE_15__ {double red; double green; double blue; double alpha; } ;
struct TYPE_13__ {double red; double green; double blue; double alpha; } ;
struct TYPE_14__ {int style; TYPE_2__ color; } ;
struct TYPE_16__ {size_t i; char* s; double f; TYPE_1__ link; TYPE_6__ padding; TYPE_4__ color; int b; TYPE_3__ highlight; TYPE_8__* list; } ;
struct TYPE_18__ {int type; TYPE_5__ value; } ;
typedef TYPE_7__ Property ;
typedef TYPE_8__ GList ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 char** VAR_6 ;
 int FUNC_0 (int ,int ) ;
 TYPE_8__* FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 ( Property *VAR_7 )
{
    switch ( VAR_7->type )
    {
        case 132:
            FUNC_2 ( "[ " );
            for ( GList *VAR_8 = VAR_7->value.list; VAR_8 != ((void*)0); VAR_8 = FUNC_1 ( VAR_8 ) ) {
                FUNC_2 ( "%s", (char *) ( VAR_8->data ) );
                if ( VAR_8->next != ((void*)0) ) {
                    FUNC_2 ( "," );
                }
            }
            FUNC_2 ( " ]" );
            break;
        case 131:
            FUNC_2 ( "%s", ( VAR_7->value.i == VAR_5 ) ? "horizontal" : "vertical" );
            break;
        case 136:
            if ( VAR_7->value.highlight.style & VAR_0 ) {
                FUNC_2 ( "bold " );
            }
            if ( VAR_7->value.highlight.style & VAR_4 ) {
                FUNC_2 ( "underline " );
            }
            if ( VAR_7->value.highlight.style & VAR_3 ) {
                FUNC_2 ( "strikethrough " );
            }
            if ( VAR_7->value.highlight.style & VAR_2 ) {
                FUNC_2 ( "italic " );
            }
            if ( VAR_7->value.highlight.style & VAR_1 ) {
                FUNC_2 ( "rgba ( %.0f, %.0f, %.0f, %.0f %% )",
                        ( VAR_7->value.highlight.color.red * 255.0 ),
                        ( VAR_7->value.highlight.color.green * 255.0 ),
                        ( VAR_7->value.highlight.color.blue * 255.0 ),
                        ( VAR_7->value.highlight.color.alpha * 100.0 ) );
            }
            break;
        case 129:
            FUNC_2 ( "%s", VAR_6[VAR_7->value.i] );
            break;
        case 128:
            FUNC_2 ( "\"%s\"", VAR_7->value.s );
            break;
        case 134:
            FUNC_2 ( "%d", VAR_7->value.i );
            break;
        case 137:
            FUNC_2 ( "%.2f", VAR_7->value.f );
            break;
        case 139:
            FUNC_2 ( "%s", VAR_7->value.b ? "true" : "false" );
            break;
        case 138:
            FUNC_2 ( "rgba ( %.0f, %.0f, %.0f, %.0f %% )",
                    ( VAR_7->value.color.red * 255.0 ),
                    ( VAR_7->value.color.green * 255.0 ),
                    ( VAR_7->value.color.blue * 255.0 ),
                    ( VAR_7->value.color.alpha * 100.0 ) );
            break;
        case 130:
            if ( FUNC_0 ( VAR_7->value.padding.top, VAR_7->value.padding.bottom ) &&
                    FUNC_0 ( VAR_7->value.padding.left, VAR_7->value.padding.right ) &&
                    FUNC_0 ( VAR_7->value.padding.left, VAR_7->value.padding.top ) ) {
                FUNC_3 ( VAR_7->value.padding.left );
            }
            else if ( FUNC_0 ( VAR_7->value.padding.top, VAR_7->value.padding.bottom ) &&
                    FUNC_0 ( VAR_7->value.padding.left, VAR_7->value.padding.right ) ) {
                FUNC_3 ( VAR_7->value.padding.top );
                FUNC_3 ( VAR_7->value.padding.left );
            }
            else if ( !FUNC_0 ( VAR_7->value.padding.top, VAR_7->value.padding.bottom ) &&
                    FUNC_0 ( VAR_7->value.padding.left, VAR_7->value.padding.right ) ) {
                FUNC_3 ( VAR_7->value.padding.top );
                FUNC_3 ( VAR_7->value.padding.left );
                FUNC_3 ( VAR_7->value.padding.bottom );
            }
            else {
                FUNC_3 ( VAR_7->value.padding.top );
                FUNC_3 ( VAR_7->value.padding.right );
                FUNC_3 ( VAR_7->value.padding.bottom );
                FUNC_3 ( VAR_7->value.padding.left );
            }
            break;
        case 133:
            if ( VAR_7->value.link.def_value) {
                FUNC_2( "var( %s, ", VAR_7->value.link.name );
                FUNC_4 ( VAR_7->value.link.def_value );
                FUNC_2 (")");
            }else {
                FUNC_2 ( "var(%s)", VAR_7->value.link.name );
            }
            break;
        case 135:
            FUNC_2 ( "inherit" );
            break;
        default:
            break;
    }

}
