
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef size_t ub4 ;
typedef int text ;
struct pdo_bound_param_data {int param_type; int paramno; TYPE_2__* name; int max_value_len; TYPE_5__* driver_data; int parameter; scalar_t__ is_param; } ;
typedef int sb4 ;
typedef int php_stream ;
struct TYPE_11__ {int database_object_handle; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_12__ {int have_blobs; TYPE_1__* H; int err; int * stmt; } ;
typedef TYPE_4__ pdo_oci_stmt ;
struct TYPE_13__ {int indicator; int * thing; int actual_len; int used_for_output; int * bind; int retcode; int oci_type; } ;
typedef TYPE_5__ pdo_oci_bound_param ;
typedef enum pdo_param_event { ____Placeholder_pdo_param_event } pdo_param_event ;
typedef int buf ;
typedef int Z_STR_P ;
struct TYPE_10__ {int len; scalar_t__ val; } ;
struct TYPE_9__ {int err; int svc; int * env; } ;
typedef int OCILobLocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ,int *,size_t*,size_t,char*,size_t,int ,int *,int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int const FUNC_6 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 size_t FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int,int) ;
 int FUNC_15 (TYPE_5__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_16 (int *,TYPE_3__*,int *) ;
 int FUNC_17 (int *,int *) ;
 size_t FUNC_18 (int *,char*,int) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(pdo_stmt_t *VAR_17, struct pdo_bound_param_data *VAR_18, enum pdo_param_event VAR_19)
{
 pdo_oci_stmt *VAR_20 = (pdo_oci_stmt*)VAR_17->driver_data;


 if (VAR_18->is_param) {
  pdo_oci_bound_param *VAR_21;
  sb4 VAR_22 = -1;
  zval *VAR_23;

  if (FUNC_9(VAR_18->parameter))
   VAR_23 = FUNC_10(VAR_18->parameter);
  else
   VAR_23 = &VAR_18->parameter;

  VAR_21 = (pdo_oci_bound_param*)VAR_18->driver_data;

  switch (VAR_19) {
   case 133:
   case 134:
   case 131:

    break;

   case 132:
    VAR_21 = VAR_18->driver_data;
    if (VAR_21 && VAR_21->thing) {
     FUNC_5(VAR_20->H->env, VAR_20->H->svc, VAR_20->H->err, VAR_21->thing);
     FUNC_0(VAR_21->thing, VAR_9);
     VAR_21->thing = ((void*)0);
     FUNC_15(VAR_21);
    }
    else if (VAR_21) {
     FUNC_15(VAR_21);
    }
    break;

   case 137:
    VAR_21 = (pdo_oci_bound_param*)FUNC_14(1, sizeof(pdo_oci_bound_param));
    VAR_18->driver_data = VAR_21;


    switch (FUNC_6(VAR_18->param_type)) {
     case 129:
      return 0;

     case 130:

      VAR_21->oci_type = VAR_13;
      VAR_22 = (sb4) sizeof(OCILobLocator*);
      break;

     case 128:
     default:
      VAR_21->oci_type = VAR_14;
      VAR_22 = (sb4) VAR_18->max_value_len;
      if (VAR_18->max_value_len == 0) {
       VAR_22 = (sb4) 1332;
      }

    }

    if (VAR_18->name) {
     FUNC_7(VAR_3, (VAR_20->stmt,
       &VAR_21->bind, VAR_20->err, (text*)VAR_18->name->val,
       (sb4) VAR_18->name->len, 0, VAR_22, VAR_21->oci_type,
       &VAR_21->indicator, 0, &VAR_21->retcode, 0, 0,
       VAR_8));
    } else {
     FUNC_7(VAR_4, (VAR_20->stmt,
       &VAR_21->bind, VAR_20->err, ((ub4)VAR_18->paramno)+1,
       0, VAR_22, VAR_21->oci_type,
       &VAR_21->indicator, 0, &VAR_21->retcode, 0, 0,
       VAR_8));
    }

    FUNC_7(VAR_5, (VAR_21->bind,
       VAR_20->err,
       VAR_18, VAR_15,
       VAR_18, VAR_16));

    return 1;

   case 135:
    VAR_21->indicator = 0;
    VAR_21->used_for_output = 0;
    if (FUNC_6(VAR_18->param_type) == 130) {
     ub4 VAR_24 = 0;
     FUNC_7(VAR_6, (VAR_20->H->env, &VAR_21->thing, VAR_9, 0, ((void*)0)));
     FUNC_7(VAR_2, (VAR_21->thing, VAR_9, &VAR_24, 0, VAR_7, VAR_20->err));
     VAR_20->have_blobs = 1;
    }
    return 1;

   case 136:

    if (VAR_21->used_for_output) {
     if (VAR_21->indicator == -1) {

      if (FUNC_13(VAR_23) == VAR_1) {

       *FUNC_12(VAR_23) = '\0';
      }
      FUNC_21(VAR_23);
      FUNC_8(VAR_23);
     } else if (FUNC_13(VAR_23) == VAR_1) {
      Z_STR_P(VAR_25) = FUNC_20(FUNC_12(&VAR_25), VAR_21->actual_len, 1);
     }
    } else if (FUNC_6(VAR_18->param_type) == 130 && VAR_21->thing) {
     php_stream *VAR_26;

     if (FUNC_13(VAR_23) == VAR_0) {




      VAR_26 = FUNC_16(&VAR_17->database_object_handle, VAR_17, (OCILobLocator*)VAR_21->thing);
      if (VAR_26) {
       FUNC_3(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing, VAR_10);
       FUNC_19(VAR_26, VAR_23);
      }
     } else {

      size_t VAR_27;
      ub4 VAR_28, VAR_29 = 1;
      char *VAR_30;

      FUNC_17(VAR_26, VAR_23);
      if (VAR_26) {
       FUNC_3(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing, VAR_10);
       do {
        char VAR_31[8192];
        VAR_27 = FUNC_18(VAR_26, VAR_31, sizeof(VAR_31));
        if ((int)VAR_27 <= 0) {
         break;
        }
        VAR_30 = VAR_31;
        do {
         VAR_28 = (ub4) VAR_27;
         FUNC_4(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing,
           &VAR_28, VAR_29, VAR_30, (ub4) VAR_27,
           VAR_11,
           ((void*)0), ((void*)0), 0, VAR_12);
         VAR_29 += VAR_28;
         VAR_27 -= VAR_28;
         VAR_30 += VAR_28;
        } while (VAR_27);
       } while (1);
       FUNC_1(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing);
       FUNC_2(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing, 0);
      } else if (FUNC_13(VAR_23) == VAR_1) {

       VAR_30 = FUNC_12(VAR_23);
       VAR_27 = FUNC_11(VAR_23);
       if (VAR_27) {
        FUNC_3(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing, VAR_10);
        while (VAR_27) {
         VAR_28 = (ub4) VAR_27;
         FUNC_4(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing,
           &VAR_28, VAR_29, VAR_30, (ub4) VAR_27,
           VAR_11,
           ((void*)0), ((void*)0), 0, VAR_12);
         VAR_30 += VAR_28;
         VAR_27 -= VAR_28;
        }
        FUNC_1(VAR_20->H->svc, VAR_20->err, (OCILobLocator*)VAR_21->thing);
       }
      }
      FUNC_5(VAR_20->H->env, VAR_20->H->svc, VAR_20->H->err, VAR_21->thing);
      FUNC_0(VAR_21->thing, VAR_9);
      VAR_21->thing = ((void*)0);
     }
    }

    return 1;
  }
 }

 return 1;
}
