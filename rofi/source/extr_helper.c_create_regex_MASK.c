
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int invert; int * regex; } ;
typedef TYPE_1__ rofi_int_matcher ;
typedef char const gchar ;
struct TYPE_6__ {char const matching_negate_char; int matching_method; } ;
typedef int GRegex ;





 int * FUNC_0 (char const*,int) ;
 TYPE_4__ VAR_0 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static rofi_int_matcher * FUNC_6 ( const char *VAR_1, int VAR_2 )
{
    GRegex * VAR_3 = ((void*)0);
    gchar *VAR_4;
    rofi_int_matcher *VAR_5 = FUNC_3 ( sizeof ( rofi_int_matcher ) );
    if ( VAR_1 && VAR_1[0] == VAR_0.matching_negate_char ) {
        VAR_5->invert = 1;
        VAR_1++;
    }
    switch ( VAR_0.matching_method )
    {
    case 129:
        VAR_4 = FUNC_5 ( VAR_1 );
        VAR_3 = FUNC_0 ( VAR_4, VAR_2 );
        FUNC_2 ( VAR_4 );
        break;
    case 128:
        VAR_3 = FUNC_0 ( VAR_1, VAR_2 );
        if ( VAR_3 == ((void*)0) ) {
            VAR_4 = FUNC_4 ( VAR_1, -1 );
            VAR_3 = FUNC_0 ( VAR_4, VAR_2 );
            FUNC_2 ( VAR_4 );
        }
        break;
    case 130:
        VAR_4 = FUNC_1 ( VAR_1 );
        VAR_3 = FUNC_0 ( VAR_4, VAR_2 );
        FUNC_2 ( VAR_4 );
        break;
    default:
        VAR_4 = FUNC_4 ( VAR_1, -1 );
        VAR_3 = FUNC_0 ( VAR_4, VAR_2 );
        FUNC_2 ( VAR_4 );
        break;
    }
    VAR_5->regex = VAR_3;
    return VAR_5;
}
