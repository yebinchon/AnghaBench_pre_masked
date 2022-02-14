
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_9__ {int var; } ;
struct TYPE_10__ {int extended_value; TYPE_2__ op1; int op1_type; } ;
typedef TYPE_3__ zend_op ;
typedef int uint32_t ;
struct TYPE_12__ {TYPE_4__* static_variables; TYPE_1__* scope; } ;
struct TYPE_11__ {scalar_t__ arData; } ;
struct TYPE_8__ {int ce_flags; } ;


 TYPE_7__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_4__*,int *,int *) ;
 TYPE_4__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static void FUNC_7(zend_string *VAR_5, zval *VAR_6, uint32_t VAR_7)
{
 zend_op *VAR_8;
 if (!FUNC_0(VAR_4)->static_variables) {
  if (FUNC_0(VAR_4)->scope) {
   FUNC_0(VAR_4)->scope->ce_flags |= VAR_3;
  }
  FUNC_0(VAR_4)->static_variables = FUNC_5(8);
 }

 VAR_6 = FUNC_4(FUNC_0(VAR_4)->static_variables, VAR_5, VAR_6);

 if (FUNC_6(VAR_5, "this")) {
  FUNC_3(VAR_0, "Cannot use $this as static variable");
 }

 VAR_8 = FUNC_2(((void*)0), VAR_2, ((void*)0), ((void*)0));
 VAR_8->op1_type = VAR_1;
 VAR_8->op1.var = FUNC_1(VAR_5);
 VAR_8->extended_value = (uint32_t)((char*)VAR_6 - (char*)FUNC_0(VAR_4)->static_variables->arData) | VAR_7;
}
