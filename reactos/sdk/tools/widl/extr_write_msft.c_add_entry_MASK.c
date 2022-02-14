
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_8__ {TYPE_4__* type; struct TYPE_8__* next; } ;
typedef TYPE_2__ type_list_t ;
struct TYPE_7__ {int * type; TYPE_2__* type_list; } ;
struct TYPE_9__ {int type; TYPE_1__ u; } ;
typedef TYPE_3__ statement_t ;
typedef int msft_typelib_t ;
struct TYPE_10__ {int attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(msft_typelib_t *VAR_1, const statement_t *VAR_2)
{
    switch(VAR_2->type) {
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
        const type_list_t *VAR_3 = VAR_2->u.type_list;
        for (; VAR_3; VAR_3 = VAR_3->next) {


            if (FUNC_3(VAR_3->type->attrs, VAR_0))
                FUNC_2(VAR_1, VAR_3->type);
            else
                FUNC_1(VAR_1, FUNC_4(VAR_3->type));
        }
        break;
    }
    case 132:
        FUNC_0(VAR_1, VAR_2->u.type);
        break;
    case 130:
    case 128:
    {
        type_t *VAR_4 = VAR_2->u.type;
        FUNC_1(VAR_1, VAR_4);
        break;
    }
    }
}
