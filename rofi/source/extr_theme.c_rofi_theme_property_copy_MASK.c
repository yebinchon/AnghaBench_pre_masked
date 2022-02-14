
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* def_value; int * ref; void* name; } ;
struct TYPE_8__ {TYPE_1__ link; int list; void* s; } ;
struct TYPE_9__ {int type; TYPE_2__ value; void* name; } ;
typedef TYPE_3__ Property ;





 int FUNC_0 (int ,int ,int *) ;
 void* FUNC_1 (void*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int) ;

Property* FUNC_3 ( Property *VAR_1 )
{
    Property *VAR_2 = FUNC_2 ( VAR_1->type );
    VAR_2->name = FUNC_1 ( VAR_1->name );

    switch ( VAR_1->type )
    {
    case 128:
        VAR_2->value.s = FUNC_1 ( VAR_1->value.s );
        break;
    case 129:
        VAR_2->value.list = FUNC_0 ( VAR_1->value.list, VAR_0, ((void*)0) );
        break;
    case 130:
        VAR_2->value.link.name = FUNC_1 ( VAR_1->value.link.name );
        VAR_2->value.link.ref = ((void*)0);
        if ( VAR_1->value.link.def_value ){
            VAR_2->value.link.def_value = FUNC_3(VAR_1->value.link.def_value);
        }
        break;
    default:
        VAR_2->value = VAR_1->value;
    }
    return VAR_2;
}
