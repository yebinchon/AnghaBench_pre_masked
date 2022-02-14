
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
typedef int ub4 ;
typedef int ub2 ;
typedef int text ;
struct pdo_column_data {int precision; int maxlen; void* param_type; int name; } ;
struct TYPE_8__ {struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_9__ {TYPE_2__* cols; int err; int stmt; TYPE_1__* H; } ;
typedef TYPE_4__ pdo_oci_stmt ;
typedef int dvoid ;
struct TYPE_7__ {int dtype; int datalen; int def; int retcode; int fetched_len; int indicator; void* data; } ;
struct TYPE_6__ {int max_char_width; int env; } ;
typedef int OCIParam ;
typedef int OCILobLocator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;


 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int *) ;
 scalar_t__ VAR_25 ;
 void* FUNC_2 (int ) ;
 int VAR_26 ;
 int FUNC_3 (char*,int,int ) ;

__attribute__((used)) static int FUNC_4(pdo_stmt_t *VAR_27, int VAR_28)
{
 pdo_oci_stmt *VAR_29 = (pdo_oci_stmt*)VAR_27->driver_data;
 OCIParam *VAR_30 = ((void*)0);
 text *VAR_31;
 ub2 VAR_32, VAR_33, VAR_34;
 ub4 VAR_35;
 struct pdo_column_data *VAR_36 = &VAR_27->columns[VAR_28];
 zend_bool VAR_37 = VAR_0;


 FUNC_0(VAR_5, (VAR_29->stmt, VAR_14, VAR_29->err, (dvoid*)&VAR_30, VAR_28+1));


 FUNC_1(VAR_1, "OCI_ATTR_DATA_TYPE",
   (VAR_30, VAR_12, &VAR_32, 0, VAR_7, VAR_29->err));


 FUNC_1(VAR_1, "OCI_ATTR_DATA_SIZE",
   (VAR_30, VAR_12, &VAR_33, 0, VAR_6, VAR_29->err));


 FUNC_1(VAR_1, "OCI_ATTR_PRECISION",
   (VAR_30, VAR_12, &VAR_34, 0, VAR_9, VAR_29->err));


 FUNC_1(VAR_1, "OCI_ATTR_NAME",
   (VAR_30, VAR_12, &VAR_31, &VAR_35, VAR_8, VAR_29->err));

 VAR_36->precision = VAR_34;
 VAR_36->maxlen = VAR_33;
 VAR_36->name = FUNC_3((char *)VAR_31, VAR_35, 0);

 VAR_29->cols[VAR_28].dtype = VAR_32;


 switch (VAR_32) {
  case 129:
  case 128:
   if (VAR_32 == 129) {
    VAR_32 = 132;
   } else {
    VAR_32 = VAR_17;
   }
   VAR_29->cols[VAR_28].datalen = 512;
   VAR_29->cols[VAR_28].data = FUNC_2(VAR_29->cols[VAR_28].datalen + 1);
   VAR_36->param_type = VAR_16;
   break;

  case 131:
  case 130:
   VAR_36->param_type = VAR_15;
   FUNC_0(VAR_4, (VAR_29->H->env, (dvoid**)&VAR_29->cols[VAR_28].data, VAR_11, 0, ((void*)0)));
   VAR_29->cols[VAR_28].datalen = sizeof(OCILobLocator*);
   VAR_37 = VAR_25;
   break;

  case 132:
  default:
   if (VAR_32 == VAR_18 || VAR_32 == VAR_21 || VAR_32 == VAR_22






     ) {

    VAR_29->cols[VAR_28].datalen = 512;




   } else if (VAR_32 == 132) {
    VAR_29->cols[VAR_28].datalen = (ub4) VAR_36->maxlen * 2;
   } else {
    VAR_29->cols[VAR_28].datalen = (ub4) (VAR_36->maxlen * VAR_29->H->max_char_width);
   }

   VAR_29->cols[VAR_28].data = FUNC_2(VAR_29->cols[VAR_28].datalen + 1);
   VAR_32 = VAR_17;


   VAR_36->param_type = VAR_16;
 }

 FUNC_0(VAR_2, (VAR_29->stmt, &VAR_29->cols[VAR_28].def, VAR_29->err, VAR_28+1,
    VAR_29->cols[VAR_28].data, VAR_29->cols[VAR_28].datalen, VAR_32, &VAR_29->cols[VAR_28].indicator,
    &VAR_29->cols[VAR_28].fetched_len, &VAR_29->cols[VAR_28].retcode, VAR_37 ? VAR_13 : VAR_10));

 if (VAR_37) {
  FUNC_0(VAR_3, (VAR_29->cols[VAR_28].def, VAR_29->err, &VAR_29->cols[VAR_28],
    VAR_26));
 }

 return 1;
}
