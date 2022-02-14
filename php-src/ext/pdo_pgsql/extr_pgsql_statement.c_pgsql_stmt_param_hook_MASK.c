
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct pdo_pgsql_lob_self {int oid; } ;
struct pdo_bound_param_data {size_t paramno; int param_type; int parameter; scalar_t__ is_param; TYPE_4__* driver_data; int name; } ;
struct TYPE_12__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_13__ {scalar_t__ supports_placeholders; int bound_param_map; int dbh; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_14__ {char** param_values; int* param_lengths; int* param_formats; int * param_types; } ;
typedef TYPE_3__ pdo_pgsql_stmt ;
struct TYPE_15__ {int oid; } ;
typedef TYPE_4__ pdo_pgsql_bound_param ;
typedef enum pdo_param_event { ____Placeholder_pdo_param_event } pdo_param_event ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;







 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (size_t,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ,char*) ;
 int VAR_13 ;
 int FUNC_16 (int ,TYPE_2__*,char*,char*) ;
 int * FUNC_17 (TYPE_1__*,int ,int ) ;
 int FUNC_18 (TYPE_1__*,int *) ;
 int FUNC_19 (TYPE_1__*,int *) ;
 char* FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,size_t) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(pdo_stmt_t *VAR_14, struct pdo_bound_param_data *VAR_15,
  enum pdo_param_event VAR_16)
{
 pdo_pgsql_stmt *VAR_17 = (pdo_pgsql_stmt*)VAR_14->driver_data;

 if (VAR_14->supports_placeholders == VAR_10 && VAR_15->is_param) {
  switch (VAR_16) {
   case 129:
    if (VAR_15->driver_data) {
     FUNC_13(VAR_15->driver_data);
    }
    break;

   case 128:

    if (VAR_15->name) {
     if (FUNC_2(VAR_15->name)[0] == '$') {
      FUNC_1(VAR_15->paramno, FUNC_2(VAR_15->name) + 1);
     } else {

      char *VAR_18;

      if (VAR_14->bound_param_map && (VAR_18 = FUNC_20(VAR_14->bound_param_map,
        VAR_15->name)) != ((void*)0)) {
       FUNC_1(VAR_15->paramno, VAR_18 + 1);
       VAR_15->paramno--;
      } else {
       FUNC_16(VAR_14->dbh, VAR_14, "HY093", FUNC_2(VAR_15->name));
       return 0;
      }
     }
    }
    break;

   case 134:
    if (!VAR_14->bound_param_map) {
     return 1;
    }
    if (!FUNC_21(VAR_14->bound_param_map, VAR_15->paramno)) {
     FUNC_16(VAR_14->dbh, VAR_14, "HY093", "parameter was not defined");
     return 0;
    }
   case 133:
   case 130:
   case 131:

    return 1;

   case 132:
    if (!VAR_14->bound_param_map) {
     return 1;
    }
    if (!VAR_17->param_values) {
     VAR_17->param_values = FUNC_12(
       FUNC_22(VAR_14->bound_param_map),
       sizeof(char*));
     VAR_17->param_lengths = FUNC_12(
       FUNC_22(VAR_14->bound_param_map),
       sizeof(int));
     VAR_17->param_formats = FUNC_12(
       FUNC_22(VAR_14->bound_param_map),
       sizeof(int));
     VAR_17->param_types = FUNC_12(
       FUNC_22(VAR_14->bound_param_map),
       sizeof(Oid));
    }
    if (VAR_15->paramno >= 0) {
     zval *VAR_19;
     if (FUNC_6(VAR_15->parameter)) {
      VAR_19 = FUNC_7(VAR_15->parameter);
     } else {
      VAR_19 = &VAR_15->parameter;
     }

     if (FUNC_0(VAR_15->param_type) == VAR_7 &&
       FUNC_10(VAR_19) == VAR_2) {
      php_stream *VAR_20;
      FUNC_18(VAR_20, VAR_19);
      if (VAR_20) {
       if (FUNC_19(VAR_20, &VAR_13)) {
        struct pdo_pgsql_lob_self *VAR_21 = (struct pdo_pgsql_lob_self*)VAR_20->abstract;
        pdo_pgsql_bound_param *VAR_22 = VAR_15->driver_data;

        if (VAR_22 == ((void*)0)) {
         VAR_22 = FUNC_12(1, sizeof(*VAR_22));
         VAR_15->driver_data = VAR_22;
        }
        VAR_22->oid = FUNC_14(VAR_21->oid);
        VAR_17->param_values[VAR_15->paramno] = (char*)&VAR_22->oid;
        VAR_17->param_lengths[VAR_15->paramno] = sizeof(VAR_22->oid);
        VAR_17->param_formats[VAR_15->paramno] = 1;
        VAR_17->param_types[VAR_15->paramno] = VAR_4;
        return 1;
       } else {
        zend_string *VAR_23 = FUNC_17(VAR_20, VAR_12, 0);
        if (VAR_23 != ((void*)0)) {

         FUNC_4(VAR_19, VAR_23);
        } else {
         FUNC_3(VAR_19);
        }
       }
      } else {

       FUNC_15(VAR_14, VAR_11, "HY105");
       return 0;
      }
     }

     if (FUNC_0(VAR_15->param_type) == VAR_8 ||
       FUNC_10(VAR_19) == VAR_1) {
      VAR_17->param_values[VAR_15->paramno] = ((void*)0);
      VAR_17->param_lengths[VAR_15->paramno] = 0;
     } else if (FUNC_10(VAR_19) == VAR_0 || FUNC_10(VAR_19) == VAR_3) {
      VAR_17->param_values[VAR_15->paramno] = FUNC_10(VAR_19) == VAR_3 ? "t" : "f";
      VAR_17->param_lengths[VAR_15->paramno] = 1;
      VAR_17->param_formats[VAR_15->paramno] = 0;
     } else {

      FUNC_11(VAR_19);
      VAR_17->param_values[VAR_15->paramno] = FUNC_9(VAR_19);
      VAR_17->param_lengths[VAR_15->paramno] = FUNC_8(VAR_19);
      VAR_17->param_formats[VAR_15->paramno] = 0;
     }

     if (FUNC_0(VAR_15->param_type) == VAR_7) {
      VAR_17->param_types[VAR_15->paramno] = 0;
      VAR_17->param_formats[VAR_15->paramno] = 1;
     } else {
      VAR_17->param_types[VAR_15->paramno] = 0;
     }
    }
    break;
  }
 } else if (VAR_15->is_param) {

  if (FUNC_0(VAR_15->param_type) == VAR_5 &&
   ((VAR_15->param_type & VAR_6) != VAR_6)) {
   const char *VAR_24 = FUNC_23(&VAR_15->parameter) ? "t" : "f";
   VAR_15->param_type = VAR_9;
   FUNC_24(&VAR_15->parameter);
   FUNC_5(&VAR_15->parameter, VAR_24, 1);
  }
 }
 return 1;
}
