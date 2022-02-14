
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
struct TYPE_6__ {double f; scalar_t__ i; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_3__ Property ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,char const*) ;
 TYPE_3__* FUNC_1 (int *,int ,char const*,int ) ;
 int * FUNC_2 (int ,char*,int ) ;

double FUNC_3 ( const widget *VAR_4, const char *VAR_5, double VAR_6 )
{
    ThemeWidget *VAR_7 = FUNC_2 ( VAR_4->name, VAR_4->state, VAR_0 );
    Property *VAR_8 = FUNC_1 ( VAR_7, VAR_1, VAR_5, VAR_0 );
    if ( VAR_8 ) {
        if ( VAR_8->type == VAR_2 ) {
            if ( VAR_4->parent ) {
                return FUNC_3 ( VAR_4->parent, VAR_5, VAR_6 );
            }
            return VAR_6;
        }
        return VAR_8->value.f;
    }

    VAR_8 = FUNC_1 ( VAR_7, VAR_3, VAR_5, VAR_0 );
    if ( VAR_8 ) {
        if ( VAR_8->type == VAR_2 ) {
            if ( VAR_4->parent ) {
                return FUNC_3 ( VAR_4->parent, VAR_5, VAR_6 );
            }
            return VAR_6;
        }
        return (double) VAR_8->value.i;
    }
    FUNC_0 ( "Theme entry: #%s %s property %s unset.", VAR_4->name, VAR_4->state ? VAR_4->state : "", VAR_5 );
    return VAR_6;
}
