
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int syntax; TYPE_2__* insn; TYPE_1__* head; int length; } ;
typedef TYPE_3__ tms320_dasm_t ;
typedef int insn_item_t ;
struct TYPE_19__ {int syntax; } ;
struct TYPE_18__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ) ;
 int * FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,int,char*,int ) ;

insn_item_t * FUNC_14(tms320_dasm_t * VAR_1)
{
 VAR_1->length = VAR_1->head->size;

 FUNC_13(VAR_1->syntax, sizeof(VAR_1->syntax), FUNC_10(VAR_1, VAR_0) && FUNC_11(VAR_1, VAR_0) ? "|| %s" : "%s", VAR_1->insn->syntax);


 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1);

 FUNC_5(VAR_1);
 FUNC_0(VAR_1);

 FUNC_9(VAR_1);
 FUNC_8(VAR_1);
 FUNC_4(VAR_1);

 FUNC_7(VAR_1);
 FUNC_1(VAR_1);

 return FUNC_12(VAR_1);

}
