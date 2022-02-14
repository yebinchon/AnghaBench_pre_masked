
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ properties; } ;
struct TYPE_7__ {char* name; TYPE_3__* ref; TYPE_3__* def_value; } ;
struct TYPE_8__ {TYPE_1__ link; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ value; int name; } ;
typedef TYPE_3__ Property ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 TYPE_3__* FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static void FUNC_4 ( Property *VAR_2, int VAR_3 )
{

    const char *VAR_4 = VAR_2->value.link.name;
    FUNC_2 ( "Resolving link to %s", VAR_2->value.link.name);
    if ( VAR_3 > 20 ) {
        FUNC_3 ( "Found more then 20 redirects for property. Stopping." );
        VAR_2->value.link.ref = VAR_2;
        return;
    }

    if ( VAR_1->properties && FUNC_0 ( VAR_1->properties, VAR_4 ) ) {
        Property *VAR_5 = FUNC_1 ( VAR_1->properties, VAR_4 );
        FUNC_2 ("Resolving link %s found: %s", VAR_2->value.link.name, VAR_5->name);
        if ( VAR_5->type == VAR_0 ) {
            if ( VAR_5->value.link.ref == ((void*)0) ) {
                FUNC_4 ( VAR_5, VAR_3 + 1 );
            }
            if ( VAR_5->value.link.ref != VAR_5 ) {
                VAR_2->value.link.ref = VAR_5->value.link.ref;
                return;
            }
        }
        else {
            VAR_2->value.link.ref = VAR_5;
            return;
        }
    }

    if ( VAR_2->value.link.def_value ){
        VAR_2->value.link.ref = VAR_2->value.link.def_value;
        return;
    }


    VAR_2->value.link.ref = VAR_2;
}
