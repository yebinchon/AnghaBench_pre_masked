
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {TYPE_2__* ssa; int op_array; } ;
typedef TYPE_3__ scdf_ctx ;
struct TYPE_11__ {int * values; } ;
typedef TYPE_4__ sccp_ctx ;
struct TYPE_9__ {TYPE_1__* vars; } ;
struct TYPE_8__ {int var; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(scdf_ctx *VAR_2, sccp_ctx *VAR_3, int VAR_4, zval *VAR_5) {
 zval *VAR_6 = &VAR_3->values[VAR_4];
 if (FUNC_0(VAR_6) || FUNC_3(VAR_5)) {
  return;
 }
 if (FUNC_3(VAR_6) || FUNC_0(VAR_5)) {
  FUNC_14(VAR_6);
  FUNC_5(VAR_6, VAR_5);
  FUNC_9(VAR_2, VAR_4);
  return;
 }


 if (FUNC_1(VAR_5) || FUNC_2(VAR_5)) {
  if (FUNC_7(VAR_6) != FUNC_7(VAR_5)
   || FUNC_12(FUNC_6(VAR_5)) != FUNC_12(FUNC_6(VAR_6))) {
   FUNC_14(VAR_6);
   FUNC_5(VAR_6, VAR_5);
   FUNC_9(VAR_2, VAR_4);
  }
  return;
 }




}
