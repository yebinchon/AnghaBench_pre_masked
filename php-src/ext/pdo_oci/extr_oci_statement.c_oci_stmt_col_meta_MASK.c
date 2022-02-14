
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
typedef int ub2 ;
typedef scalar_t__ ub1 ;
typedef int sb1 ;
struct TYPE_4__ {scalar_t__ column_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int err; int stmt; } ;
typedef TYPE_2__ pdo_oci_stmt ;
typedef int dvoid ;
typedef int OCIParam ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
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
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_13 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(pdo_stmt_t *VAR_14, zend_long VAR_15, zval *VAR_16)
{
 pdo_oci_stmt *VAR_17 = (pdo_oci_stmt*)VAR_14->driver_data;
 OCIParam *VAR_18 = ((void*)0);
 ub2 VAR_19, VAR_20;
 sb1 VAR_21;
 zval VAR_22;
 ub1 VAR_23, VAR_24;
 if (!VAR_17->stmt) {
  return VAR_0;
 }
 if (VAR_15 >= VAR_14->column_count) {

  return VAR_0;
 }

 FUNC_7(VAR_16);
 FUNC_7(&VAR_22);


 FUNC_1(VAR_2, (VAR_17->stmt, VAR_9, VAR_17->err, (dvoid*)&VAR_18, VAR_15+1));


 FUNC_2(VAR_1, "OCI_ATTR_DATA_TYPE",
   (VAR_18, VAR_8, &VAR_19, 0, VAR_4, VAR_17->err));


 FUNC_2(VAR_1, "OCI_ATTR_PRECISION",
   (VAR_18, VAR_8, &VAR_20, 0, VAR_6, VAR_17->err));


 FUNC_2(VAR_1, "OCI_ATTR_SCALE",
   (VAR_18, VAR_8, &VAR_21, 0, VAR_7, VAR_17->err));


 if (VAR_19 == 143 || VAR_19 == 128 || VAR_19 == 149 || VAR_19 == 142) {
  FUNC_2(VAR_1, "OCI_ATTR_CHARSET_FORM",
   (VAR_18, VAR_8, &VAR_24, 0, VAR_3, VAR_17->err));
 }


 if (VAR_19) {

  switch (VAR_19) {

  case 131:
   FUNC_4(VAR_16, "oci:decl_type", "TIMESTAMP");
   FUNC_4(VAR_16, "native_type", "TIMESTAMP");
   break;


  case 129:
   FUNC_4(VAR_16, "oci:decl_type", "TIMESTAMP WITH TIMEZONE");
   FUNC_4(VAR_16, "native_type", "TIMESTAMP WITH TIMEZONE");
   break;


  case 130:
   FUNC_4(VAR_16, "oci:decl_type", "TIMESTAMP WITH LOCAL TIMEZONE");
   FUNC_4(VAR_16, "native_type", "TIMESTAMP WITH LOCAL TIMEZONE");
   break;


  case 136:
   FUNC_4(VAR_16, "oci:decl_type", "INTERVAL YEAR TO MONTH");
   FUNC_4(VAR_16, "native_type", "INTERVAL YEAR TO MONTH");
   break;


  case 137:
   FUNC_4(VAR_16, "oci:decl_type", "INTERVAL DAY TO SECOND");
   FUNC_4(VAR_16, "native_type", "INTERVAL DAY TO SECOND");
   break;

  case 141:
   FUNC_4(VAR_16, "oci:decl_type", "DATE");
   FUNC_4(VAR_16, "native_type", "DATE");
   break;
  case 140 :
  case 133:

   if (VAR_21 == -127 && VAR_20 != 0) {
    FUNC_4(VAR_16, "oci:decl_type", "FLOAT");
    FUNC_4(VAR_16, "native_type", "FLOAT");
   } else {
    FUNC_4(VAR_16, "oci:decl_type", "NUMBER");
    FUNC_4(VAR_16, "native_type", "NUMBER");
   }
   break;
  case 134:
   FUNC_4(VAR_16, "oci:decl_type", "LONG");
   FUNC_4(VAR_16, "native_type", "LONG");
   break;
  case 145:
   FUNC_4(VAR_16, "oci:decl_type", "RAW");
   FUNC_4(VAR_16, "native_type", "RAW");
   break;
  case 135:
   FUNC_4(VAR_16, "oci:decl_type", "LONG RAW");
   FUNC_4(VAR_16, "native_type", "LONG RAW");
   break;
  case 143:
  case 128:
   if (VAR_24 == VAR_12) {
    FUNC_4(VAR_16, "oci:decl_type", "NVARCHAR2");
    FUNC_4(VAR_16, "native_type", "NVARCHAR2");
   } else {
    FUNC_4(VAR_16, "oci:decl_type", "VARCHAR2");
    FUNC_4(VAR_16, "native_type", "VARCHAR2");
   }
   break;
  case 149:
   if (VAR_24 == VAR_12) {
    FUNC_4(VAR_16, "oci:decl_type", "NCHAR");
    FUNC_4(VAR_16, "native_type", "NCHAR");
   } else {
    FUNC_4(VAR_16, "oci:decl_type", "CHAR");
    FUNC_4(VAR_16, "native_type", "CHAR");
   }
   break;
  case 144:
   FUNC_4(VAR_16, "oci:decl_type", "BLOB");
   FUNC_6(&VAR_22, "blob");
   FUNC_4(VAR_16, "native_type", "BLOB");
   break;
  case 142:
   if (VAR_24 == VAR_12) {
    FUNC_4(VAR_16, "oci:decl_type", "NCLOB");
    FUNC_4(VAR_16, "native_type", "NCLOB");
   } else {
    FUNC_4(VAR_16, "oci:decl_type", "CLOB");
    FUNC_4(VAR_16, "native_type", "CLOB");
   }
   FUNC_6(&VAR_22, "blob");
   break;
  case 147:
   FUNC_4(VAR_16, "oci:decl_type", "BFILE");
   FUNC_6(&VAR_22, "blob");
   FUNC_4(VAR_16, "native_type", "BFILE");
   break;
  case 132:
   FUNC_4(VAR_16, "oci:decl_type", "ROWID");
   FUNC_4(VAR_16, "native_type", "ROWID");
   break;
  case 146:
  case 138:
   FUNC_4(VAR_16, "oci:decl_type", "BINARY_FLOAT");
   FUNC_4(VAR_16, "native_type", "BINARY_FLOAT");
   break;
  case 148:
  case 139:
   FUNC_4(VAR_16, "oci:decl_type", "BINARY_DOUBLE");
   FUNC_4(VAR_16, "native_type", "BINARY_DOUBLE");
   break;
  default:
   FUNC_3(VAR_16, "oci:decl_type", VAR_19);
   FUNC_4(VAR_16, "native_type", "UNKNOWN");
  }
 } else {

  FUNC_3(VAR_16, "oci:decl_type", 0);
  FUNC_4(VAR_16, "native_type", "NULL");
 }


 FUNC_2(VAR_1, "OCI_ATTR_IS_NULL",
   (VAR_18, VAR_8, &VAR_23, 0, VAR_5, VAR_17->err));

 if (VAR_23) {
  FUNC_6(&VAR_22, "nullable");
 } else {
  FUNC_6(&VAR_22, "not_null");
 }


 switch (VAR_19) {
  case 147:
  case 144:
  case 142:
   FUNC_3(VAR_16, "pdo_type", VAR_10);
   break;
  default:
   FUNC_3(VAR_16, "pdo_type", VAR_11);
 }

 FUNC_3(VAR_16, "scale", VAR_21);
 FUNC_5(VAR_16, "flags", &VAR_22);

 FUNC_0(VAR_18, VAR_8);
 return VAR_13;
}
