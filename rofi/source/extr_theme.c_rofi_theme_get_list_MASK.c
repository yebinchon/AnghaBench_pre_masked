
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* parent; int state; int name; } ;
typedef TYPE_2__ widget ;
typedef int ThemeWidget ;
struct TYPE_6__ {int list; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_3__ Property ;
typedef int GList ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int ,int ,int *) ;
 char** FUNC_3 (char const*,char*,int ) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int *,scalar_t__,char const*,int ) ;
 int * FUNC_5 (int ,int ,int ) ;

GList *FUNC_6 ( const widget *VAR_4, const char * VAR_5, const char *VAR_6 )
{
    ThemeWidget *VAR_7 = FUNC_5 ( VAR_4->name, VAR_4->state, VAR_2 );
    Property *VAR_8 = FUNC_4 ( VAR_7, VAR_1, VAR_5, VAR_2 );
    if ( VAR_8 ) {
        if ( VAR_8->type == VAR_0 ) {
            if ( VAR_4->parent ) {
                return FUNC_6 ( VAR_4->parent, VAR_5, VAR_6 );
            }
        }
        else if ( VAR_8->type == VAR_1 ) {
            return FUNC_2 ( VAR_8->value.list, VAR_3, ((void*)0) );
        }
    }
    char **VAR_9 = VAR_6 ? FUNC_3 ( VAR_6, ",", 0 ) : ((void*)0);
    if ( VAR_9 ) {
        GList *VAR_10 = ((void*)0);
        for ( int VAR_11 = 0; VAR_9[VAR_11] != ((void*)0); VAR_11++ ) {
            VAR_10 = FUNC_1 ( VAR_10, VAR_9[VAR_11] );
        }
        FUNC_0 ( VAR_9 );
        return VAR_10;
    }
    return ((void*)0);
}
