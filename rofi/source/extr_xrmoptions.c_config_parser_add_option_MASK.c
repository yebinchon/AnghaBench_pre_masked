
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int XrmOptionType ;
typedef int XrmOption ;
struct TYPE_5__ {void** pointer; } ;
struct TYPE_6__ {int type; char const* name; char const* comment; char* mem; int source; TYPE_1__ value; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 int VAR_2 ;


void FUNC_1 ( XrmOptionType VAR_3, const char *VAR_4, void **VAR_5, const char *VAR_6 )
{
    VAR_1 = FUNC_0 ( VAR_1, ( VAR_2 + 1 ) * sizeof ( XrmOption ) );

    VAR_1[VAR_2].type = VAR_3;
    VAR_1[VAR_2].name = VAR_4;
    VAR_1[VAR_2].value.pointer = VAR_5;
    VAR_1[VAR_2].comment = VAR_6;
    VAR_1[VAR_2].source = VAR_0;
    switch ( VAR_3 )
    {
    case 128:
        VAR_1[VAR_2].mem = ( (char *) ( *VAR_5 ) );
        break;
    default:
        VAR_1[VAR_2].mem = ((void*)0);
        break;
    }

    VAR_2++;
}
