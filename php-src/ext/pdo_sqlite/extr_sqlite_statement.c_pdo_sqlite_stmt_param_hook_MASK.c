
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct pdo_bound_param_data {int paramno; int parameter; int param_type; int name; int is_param; } ;
typedef int php_stream ;
struct TYPE_6__ {int dbh; int executed; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {int done; int stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;
typedef enum pdo_param_event { ____Placeholder_pdo_param_event } pdo_param_event ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_1__*,char*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(pdo_stmt_t *VAR_5, struct pdo_bound_param_data *VAR_6,
  enum pdo_param_event VAR_7)
{
 pdo_sqlite_stmt *VAR_8 = (pdo_sqlite_stmt*)VAR_5->driver_data;
 zval *VAR_9;

 switch (VAR_7) {
  case 133:
   if (VAR_5->executed && !VAR_8->done) {
    FUNC_21(VAR_8->stmt);
    VAR_8->done = 1;
   }

   if (VAR_6->is_param) {

    if (VAR_6->paramno == -1) {
     VAR_6->paramno = FUNC_19(VAR_8->stmt, FUNC_2(VAR_6->name)) - 1;
    }

    switch (FUNC_0(VAR_6->param_type)) {
     case 129:
      return 0;

     case 130:
      if (FUNC_18(VAR_8->stmt, VAR_6->paramno + 1) == VAR_3) {
       return 1;
      }
      FUNC_12(VAR_5);
      return 0;

     case 132:
     case 134:
      if (FUNC_4(VAR_6->parameter)) {
       VAR_9 = FUNC_6(VAR_6->parameter);
      } else {
       VAR_9 = &VAR_6->parameter;
      }
      if (FUNC_9(VAR_9) == VAR_0) {
       if (FUNC_18(VAR_8->stmt, VAR_6->paramno + 1) == VAR_3) {
        return 1;
       }
      } else {
       FUNC_10(VAR_9);





       if (VAR_3 == FUNC_16(VAR_8->stmt, VAR_6->paramno + 1, FUNC_5(VAR_9))) {
        return 1;
       }

      }
      FUNC_12(VAR_5);
      return 0;

     case 131:
      if (FUNC_4(VAR_6->parameter)) {
       VAR_9 = FUNC_6(VAR_6->parameter);
      } else {
       VAR_9 = &VAR_6->parameter;
      }
      if (FUNC_9(VAR_9) == VAR_1) {
       php_stream *VAR_10 = ((void*)0);
       FUNC_14(VAR_10, VAR_9);
       if (VAR_10) {
        zend_string *VAR_11 = FUNC_13(VAR_10, VAR_2, 0);
        FUNC_23(VAR_9);
        FUNC_3(VAR_9, VAR_11 ? VAR_11 : FUNC_1());
       } else {
        FUNC_11(VAR_5->dbh, VAR_5, "HY105", "Expected a stream resource");
        return 0;
       }
      } else if (FUNC_9(VAR_9) == VAR_0) {
       if (FUNC_18(VAR_8->stmt, VAR_6->paramno + 1) == VAR_3) {
        return 1;
       }
       FUNC_12(VAR_5);
       return 0;
      } else {
       if (!FUNC_22(VAR_9)) {
        return 0;
       }
      }

      if (VAR_3 == FUNC_15(VAR_8->stmt, VAR_6->paramno + 1,
        FUNC_8(VAR_9),
        FUNC_7(VAR_9),
        VAR_4)) {
       return 1;
      }
      return 0;

     case 128:
     default:
      if (FUNC_4(VAR_6->parameter)) {
       VAR_9 = FUNC_6(VAR_6->parameter);
      } else {
       VAR_9 = &VAR_6->parameter;
      }
      if (FUNC_9(VAR_9) == VAR_0) {
       if (FUNC_18(VAR_8->stmt, VAR_6->paramno + 1) == VAR_3) {
        return 1;
       }
      } else {
       if (!FUNC_22(VAR_9)) {
        return 0;
       }
       if (VAR_3 == FUNC_20(VAR_8->stmt, VAR_6->paramno + 1,
         FUNC_8(VAR_9),
         FUNC_7(VAR_9),
         VAR_4)) {
        return 1;
       }
      }
      FUNC_12(VAR_5);
      return 0;
    }
   }
   break;

  default:
   ;
 }
 return 1;
}
