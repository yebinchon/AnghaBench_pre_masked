
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_6__ {int * type; struct TYPE_6__* next; } ;
typedef TYPE_2__ type_list_t ;
struct sltg_typelib {int dummy; } ;
struct TYPE_5__ {int * type; TYPE_2__* type_list; } ;
struct TYPE_7__ {int type; TYPE_1__ u; } ;
typedef TYPE_3__ statement_t ;
 int FUNC_0 (struct sltg_typelib*,int *) ;
 int FUNC_1 (struct sltg_typelib*,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct sltg_typelib *VAR_0, const statement_t *VAR_1)
{
    switch(VAR_1->type)
    {
    case 133:
    case 135:
    case 131:
    case 137:
    case 136:

        break;
    case 134:

        break;

    case 129:
    {
        const type_list_t *VAR_2 = VAR_1->u.type_list;
        for (; VAR_2; VAR_2 = VAR_2->next)
        {

            FUNC_1(VAR_0, VAR_2->type);
        }
        break;
    }

    case 132:
        FUNC_0(VAR_0, VAR_1->u.type);
        break;

    case 130:
    case 128:
    {
        type_t *VAR_3 = VAR_1->u.type;
        FUNC_1(VAR_0, VAR_3);
        break;
    }

    default:
        FUNC_2("add_statement: unhandled statement type %d\n", VAR_1->type);
        break;
    }
}
