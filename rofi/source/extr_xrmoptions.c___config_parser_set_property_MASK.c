
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char gchar ;
typedef int gboolean ;
struct TYPE_10__ {char** str; unsigned int* num; scalar_t__* snum; } ;
struct TYPE_12__ {scalar_t__ type; char* mem; int name; void* source; TYPE_1__ value; } ;
typedef TYPE_3__ XrmOption ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_11__ {char* s; unsigned int b; scalar_t__ i; TYPE_5__* list; } ;
struct TYPE_13__ {size_t type; TYPE_2__ value; } ;
typedef TYPE_4__ Property ;
typedef TYPE_5__ GList ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (TYPE_5__*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,int ) ;
 char* FUNC_4 (char*,char*,char*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static gboolean FUNC_5 ( XrmOption *VAR_12, const Property *VAR_13, char **VAR_14 )
{
    if ( VAR_12->type == VAR_11 ) {
        if ( VAR_13->type != VAR_5 && VAR_13->type != VAR_4 ) {
            *VAR_14 = FUNC_3 ( "Option: %s needs to be set with a string not a %s.", VAR_12->name, VAR_6[VAR_13->type] );
            return VAR_7;
        }
        gchar *VAR_15 = ((void*)0);
        if ( VAR_13->type == VAR_4 ) {
            for ( GList *VAR_16 = VAR_13->value.list; VAR_16 != ((void*)0); VAR_16 = FUNC_1 ( VAR_16 ) ) {
                if ( VAR_15 == ((void*)0) ) {
                    VAR_15 = FUNC_2 ( (char *) ( VAR_16->data ) );
                }
                else {
                    char *VAR_17 = FUNC_4 ( ",", VAR_15, (char *) ( VAR_16->data ), ((void*)0) );
                    FUNC_0 ( VAR_15 );
                    VAR_15 = VAR_17;
                }
            }
        }
        else {
            VAR_15 = FUNC_2 ( VAR_13->value.s );
        }
        if ( ( VAR_12 )->mem != ((void*)0) ) {
            FUNC_0 ( VAR_12->mem );
            VAR_12->mem = ((void*)0);
        }
        *( VAR_12->value.str ) = VAR_15;


        ( VAR_12 )->mem = *( VAR_12->value.str );
        VAR_12->source = VAR_0;
    }
    else if ( VAR_12->type == VAR_9 ) {
        if ( VAR_13->type != VAR_3 ) {
            *VAR_14 = FUNC_3 ( "Option: %s needs to be set with a number not a %s.", VAR_12->name, VAR_6[VAR_13->type] );
            return VAR_7;
        }
        *( VAR_12->value.snum ) = VAR_13->value.i;
        VAR_12->source = VAR_0;
    }
    else if ( VAR_12->type == VAR_10 ) {
        if ( VAR_13->type != VAR_3 ) {
            *VAR_14 = FUNC_3 ( "Option: %s needs to be set with a number not a %s.", VAR_12->name, VAR_6[VAR_13->type] );
            return VAR_7;
        }
        *( VAR_12->value.num ) = (unsigned int ) ( VAR_13->value.i );
        VAR_12->source = VAR_0;
    }
    else if ( VAR_12->type == VAR_8 ) {
        if ( VAR_13->type != VAR_2 ) {
            *VAR_14 = FUNC_3 ( "Option: %s needs to be set with a boolean not a %s.", VAR_12->name, VAR_6[VAR_13->type] );
            return VAR_7;
        }
        *( VAR_12->value.num ) = ( VAR_13->value.b );
        VAR_12->source = VAR_0;
    }
    else {

        *VAR_14 = FUNC_3 ( "Option: %s is not of a supported type: %s.", VAR_12->name, VAR_6[VAR_13->type] );
        return VAR_7;
    }
    return VAR_1;
}
