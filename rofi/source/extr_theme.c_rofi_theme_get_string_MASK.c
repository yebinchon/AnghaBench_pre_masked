
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* state; int name; struct TYPE_7__* parent; } ;
typedef TYPE_2__ widget ;
typedef int ThemeWidget ;
struct TYPE_6__ {char const* s; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_3__ Property ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,char const*) ;
 TYPE_3__* FUNC_1 (int *,int ,char const*,int ) ;
 int * FUNC_2 (int ,char*,int ) ;

const char *FUNC_3 ( const widget *VAR_3, const char *VAR_4, const char *VAR_5 )
{
    ThemeWidget *VAR_6 = FUNC_2 ( VAR_3->name, VAR_3->state, VAR_0 );
    Property *VAR_7 = FUNC_1 ( VAR_6, VAR_2, VAR_4, VAR_0 );
    if ( VAR_7 ) {
        if ( VAR_7->type == VAR_1 ) {
            if ( VAR_3->parent ) {
                return FUNC_3 ( VAR_3->parent, VAR_4, VAR_5 );
            }
            return VAR_5;
        }
        return VAR_7->value.s;
    }
    FUNC_0 ( "Theme entry: #%s %s property %s unset.", VAR_3->name, VAR_3->state ? VAR_3->state : "", VAR_4 );
    return VAR_5;
}
