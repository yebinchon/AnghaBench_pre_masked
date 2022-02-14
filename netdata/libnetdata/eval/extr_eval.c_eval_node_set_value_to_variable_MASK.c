
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int name; int hash; } ;
struct TYPE_6__ {int count; TYPE_1__* ops; } ;
struct TYPE_5__ {TYPE_4__* variable; int type; } ;
typedef int EVAL_VARIABLE ;
typedef TYPE_2__ EVAL_NODE ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static inline void FUNC_4(EVAL_NODE *VAR_1, int VAR_2, const char *VAR_3) {
    if(VAR_2 >= VAR_1->count)
        FUNC_1("Invalid request to set position %d of OPERAND that has only %d values", VAR_2 + 1, VAR_1->count + 1);

    VAR_1->ops[VAR_2].type = VAR_0;
    VAR_1->ops[VAR_2].variable = FUNC_0(1, sizeof(EVAL_VARIABLE));
    VAR_1->ops[VAR_2].variable->name = FUNC_3(VAR_3);
    VAR_1->ops[VAR_2].variable->hash = FUNC_2(VAR_1->ops[VAR_2].variable->name);
}
