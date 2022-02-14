
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_11__ {struct TYPE_11__* parent; int name; scalar_t__ properties; } ;
typedef TYPE_3__ ThemeWidget ;
struct TYPE_9__ {TYPE_4__* ref; } ;
struct TYPE_10__ {TYPE_1__ link; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ value; } ;
typedef scalar_t__ PropertyType ;
typedef TYPE_4__ Property ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;
 TYPE_4__* FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

Property *FUNC_4 ( ThemeWidget *VAR_5, PropertyType VAR_6, const char *VAR_7, gboolean VAR_8 )
{
    while ( VAR_5 ) {
        if ( VAR_5->properties && FUNC_1 ( VAR_5->properties, VAR_7 ) ) {
            Property *VAR_9 = FUNC_2 ( VAR_5->properties, VAR_7 );
            if ( VAR_9->type == VAR_0 ) {
                return VAR_9;
            }
            if ( VAR_9->type == VAR_2 ) {
                if ( VAR_9->value.link.ref == ((void*)0) ) {

                    FUNC_3 ( VAR_9, 0 );
                }
                if ( VAR_9->value.link.ref != ((void*)0) && VAR_9->value.link.ref->type == VAR_6 ) {
                    return VAR_9->value.link.ref;
                }
            }
            if ( VAR_9->type == VAR_6 ) {
                return VAR_9;
            }

            if ( VAR_9->type == VAR_1 && VAR_6 == VAR_3 ) {
                return VAR_9;
            }
            FUNC_0 ( "Found property: '%s' on '%s', but type %s does not match expected type %s.",
                      VAR_7, VAR_5->name,
                      VAR_4[VAR_9->type],
                      VAR_4[VAR_6]
                      );
        }
        if ( VAR_8 ) {
            return ((void*)0);
        }

        VAR_5 = VAR_5->parent;
    }
    return ((void*)0);
}
