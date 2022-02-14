
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int znode ;
struct TYPE_20__ {int opcode; } ;
typedef TYPE_1__ zend_op ;
struct TYPE_21__ {int kind; int attr; struct TYPE_21__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_11 (int *,int ,int *,int *) ;
 TYPE_1__* FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int *,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int *,TYPE_2__*) ;

void FUNC_20(znode *VAR_10, zend_ast *VAR_11)
{
 zend_ast *VAR_12 = VAR_11->child[0];
 zend_ast *VAR_13 = VAR_11->child[1];

 znode VAR_14, VAR_15;
 zend_op *VAR_16;
 uint32_t VAR_17;

 if (FUNC_1(VAR_12)) {
  FUNC_15(VAR_2, "Cannot re-assign $this");
 }

 FUNC_14(VAR_12);

 switch (VAR_12->kind) {
  case 128:
   VAR_17 = FUNC_6();
   FUNC_10(&VAR_14, VAR_12, VAR_1, 0);
   FUNC_2(&VAR_15, VAR_13);
   FUNC_8(VAR_17);
   FUNC_11(VAR_10, VAR_4, &VAR_14, &VAR_15);
   return;
  case 129:
   VAR_17 = FUNC_6();
   FUNC_10(VAR_10, VAR_12, VAR_1, 0);
   FUNC_2(&VAR_15, VAR_13);

   VAR_16 = FUNC_8(VAR_17);
   VAR_16->opcode = VAR_7;

   FUNC_12(&VAR_15);
   return;
  case 131:
   VAR_17 = FUNC_6();
   FUNC_7(VAR_10, VAR_12, VAR_1);

   if (FUNC_16(VAR_12, VAR_13)
    && !FUNC_1(VAR_13)) {

    znode VAR_18;

    if (FUNC_19(&VAR_18, VAR_13) == VAR_3) {
     FUNC_4(&VAR_15, VAR_13, VAR_0, 0);
    } else {
     FUNC_13(&VAR_15, VAR_9, &VAR_18, ((void*)0));
    }
   } else {
    FUNC_2(&VAR_15, VAR_13);
   }

   VAR_16 = FUNC_8(VAR_17);
   VAR_16->opcode = VAR_5;

   VAR_16 = FUNC_12(&VAR_15);
   return;
  case 130:
   VAR_17 = FUNC_6();
   FUNC_9(VAR_10, VAR_12, VAR_1);
   FUNC_2(&VAR_15, VAR_13);

   VAR_16 = FUNC_8(VAR_17);
   VAR_16->opcode = VAR_6;

   FUNC_12(&VAR_15);
   return;
  case 132:
   if (FUNC_18(VAR_12)) {
    if (!FUNC_17(VAR_13)) {
     FUNC_15(VAR_2,
      "Cannot assign reference to non referencable value");
    }

    FUNC_5(&VAR_15, VAR_13, VAR_1, 1);


    FUNC_11(&VAR_15, VAR_8, &VAR_15, ((void*)0));
   } else {
    if (VAR_13->kind == 128) {

     znode VAR_19;

     if (FUNC_19(&VAR_19, VAR_13) == VAR_3) {
      FUNC_4(&VAR_15, VAR_13, VAR_0, 0);
     } else {
      FUNC_13(&VAR_15, VAR_9, &VAR_19, ((void*)0));
     }
    } else {
     FUNC_2(&VAR_15, VAR_13);
    }
   }

   FUNC_3(VAR_10, VAR_12, &VAR_15, VAR_12->attr);
   return;
  FUNC_0();
 }
}
