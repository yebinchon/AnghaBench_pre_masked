
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int size; int param_count; int * params; int * retval; int * object; int function_name; } ;
struct php_sqlite3_fci {int fcc; TYPE_2__ fci; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int zval_context; int row_count; } ;
typedef TYPE_1__ php_sqlite3_agg_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,char*) ;
 scalar_t__ FUNC_16 (int,int,int ) ;
 scalar_t__ FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,char*,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_2__*,int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int * FUNC_33 (int *) ;

__attribute__((used)) static int FUNC_34(struct php_sqlite3_fci *VAR_3, zval *VAR_4, int VAR_5, sqlite3_value **VAR_6, sqlite3_context *VAR_7, int VAR_8)
{
 zval *VAR_9 = ((void*)0);
 zval VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 php_sqlite3_agg_context *VAR_14 = ((void*)0);

 if (VAR_8) {
  VAR_8 = 2;
 }

 VAR_13 = VAR_5 + VAR_8;

 VAR_3->fci.size = sizeof(VAR_3->fci);
 FUNC_4(&VAR_3->fci.function_name, VAR_4);
 VAR_3->fci.object = ((void*)0);
 VAR_3->fci.retval = &VAR_10;
 VAR_3->fci.param_count = VAR_13;



 if (VAR_13) {
  VAR_9 = (zval *)FUNC_16(VAR_13, sizeof(zval), 0);
 }

 if (VAR_8) {

  VAR_14 = (php_sqlite3_agg_context *)FUNC_17(VAR_7, sizeof(php_sqlite3_agg_context));

  if (FUNC_11(VAR_14->zval_context)) {
   FUNC_7(&VAR_14->zval_context);
  }
  FUNC_3(&VAR_9[0], &VAR_14->zval_context);
  FUNC_6(&VAR_9[1], VAR_14->row_count);
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  switch (FUNC_29(VAR_6[VAR_11])) {
   case 129:



    FUNC_6(&VAR_9[VAR_11 + VAR_8], FUNC_26(VAR_6[VAR_11]));

    break;

   case 130:
    FUNC_5(&VAR_9[VAR_11 + VAR_8], FUNC_25(VAR_6[VAR_11]));
    break;

   case 128:
    FUNC_7(&VAR_9[VAR_11 + VAR_8]);
    break;

   case 131:
   case 132:
   default:
    FUNC_8(&VAR_9[VAR_11 + VAR_8], (char*)FUNC_28(VAR_6[VAR_11]), FUNC_24(VAR_6[VAR_11]));
    break;
  }
 }

 VAR_3->fci.params = VAR_9;

 if ((VAR_12 = FUNC_30(&VAR_3->fci, &VAR_3->fcc)) == VAR_1) {
  FUNC_15(((void*)0), VAR_0, "An error occurred while invoking the callback");
 }

 if (VAR_8) {
  FUNC_32(&VAR_9[0]);
 }


 if (VAR_13) {
  for (VAR_11 = VAR_8; VAR_11 < VAR_5 + VAR_8; VAR_11++) {
   FUNC_32(&VAR_9[VAR_11]);
  }
  if (VAR_8) {
   FUNC_32(&VAR_9[1]);
  }
  FUNC_14(VAR_9);
 }

 if (!VAR_8 || !VAR_6) {


  if (!FUNC_11(VAR_10)) {
   switch (FUNC_13(VAR_10)) {
    case 134:



     FUNC_20(VAR_7, FUNC_12(VAR_10));

     break;

    case 133:
     FUNC_22(VAR_7);
     break;

    case 135:
     FUNC_18(VAR_7, FUNC_10(VAR_10));
     break;

    default: {
     zend_string *VAR_15 = FUNC_33(&VAR_10);
     if (FUNC_0(!VAR_15)) {
      VAR_12 = VAR_1;
      break;
     }
     FUNC_23(VAR_7, FUNC_2(VAR_15), FUNC_1(VAR_15), VAR_2);
     FUNC_31(VAR_15);
     break;
    }
   }
  } else {
   FUNC_19(VAR_7, "failed to invoke callback", 0);
  }

  if (VAR_14 && !FUNC_11(VAR_14->zval_context)) {
   FUNC_32(&VAR_14->zval_context);
  }
 } else {


  if (VAR_14 && !FUNC_11(VAR_14->zval_context)) {
   FUNC_32(&VAR_14->zval_context);
  }
  FUNC_4(&VAR_14->zval_context, &VAR_10);
  FUNC_9(&VAR_10);
 }

 if (!FUNC_11(VAR_10)) {
  FUNC_32(&VAR_10);
 }
 return VAR_12;
}
