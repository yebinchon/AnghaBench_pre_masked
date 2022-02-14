
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* state; int name; struct TYPE_9__* parent; } ;
typedef TYPE_3__ widget ;
typedef int cairo_t ;
typedef int ThemeWidget ;
struct TYPE_7__ {int alpha; int blue; int green; int red; } ;
struct TYPE_8__ {TYPE_1__ color; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ value; } ;
typedef TYPE_4__ Property ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,char*,char const*) ;
 TYPE_4__* FUNC_2 (int *,int ,char const*,int ) ;
 int * FUNC_3 (int ,char*,int ) ;

void FUNC_4 ( const widget *VAR_3, const char *VAR_4, cairo_t *VAR_5 )
{
    ThemeWidget *VAR_6 = FUNC_3 ( VAR_3->name, VAR_3->state, VAR_0 );
    Property *VAR_7 = FUNC_2 ( VAR_6, VAR_1, VAR_4, VAR_0 );
    if ( VAR_7 ) {
        if ( VAR_7->type == VAR_2 ) {
            if ( VAR_3->parent ) {
                FUNC_4 ( VAR_3->parent, VAR_4, VAR_5 );
            }
            return;
        }
        FUNC_0 ( VAR_5,
                                VAR_7->value.color.red,
                                VAR_7->value.color.green,
                                VAR_7->value.color.blue,
                                VAR_7->value.color.alpha
                                );
    }
    else {
        FUNC_1 ( "Theme entry: #%s %s property %s unset.", VAR_3->name, VAR_3->state ? VAR_3->state : "", VAR_4 );
    }
}
