
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum ConfigSource { ____Placeholder_ConfigSource } ConfigSource ;
struct TYPE_4__ {unsigned int* num; int* snum; int * charc; int ** str; } ;
struct TYPE_5__ {int type; int source; TYPE_1__ value; int * mem; } ;
typedef TYPE_2__ XrmOption ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;






__attribute__((used)) static void FUNC_8 ( XrmOption *VAR_2, char *VAR_3, enum ConfigSource VAR_4 )
{
    switch ( VAR_2->type )
    {
    case 128:
        if ( ( VAR_2 )->mem != ((void*)0) ) {
            FUNC_3 ( VAR_2->mem );
            VAR_2->mem = ((void*)0);
        }
        *( VAR_2->value.str ) = FUNC_4 ( FUNC_5 ( VAR_3 ) );


        ( VAR_2 )->mem = *( VAR_2->value.str );
        break;
    case 130:
        *( VAR_2->value.num ) = (unsigned int) FUNC_2 ( VAR_3, ((void*)0), 10 );
        break;
    case 129:
        *( VAR_2->value.snum ) = (int) FUNC_1 ( VAR_3, ((void*)0), 10 );
        break;
    case 132:
        if ( FUNC_7 ( VAR_3 ) > 0 &&
             FUNC_0 ( VAR_3, "true" ) == 0 ) {
            *( VAR_2->value.num ) = VAR_1;
        }
        else{
            *( VAR_2->value.num ) = VAR_0;
        }
        break;
    case 131:
        *( VAR_2->value.charc ) = FUNC_6 ( VAR_3 );
        break;
    }
    VAR_2->source = VAR_4;
}
