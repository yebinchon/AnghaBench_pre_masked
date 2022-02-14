
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ub4 ;
typedef int ub2 ;
typedef int ub1 ;
typedef int sb4 ;
struct TYPE_2__ {int dtype; int indicator; int datalen; int * data; } ;
typedef TYPE_1__ pdo_oci_column ;
typedef int dvoid ;
typedef int OCIDefine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static sb4 FUNC_1(dvoid *VAR_4, OCIDefine *VAR_5, ub4 VAR_6, dvoid **VAR_7,
  ub4 **VAR_8, ub1 *VAR_9, dvoid **VAR_10, ub2 **VAR_11)
{
 pdo_oci_column *VAR_12 = (pdo_oci_column*)VAR_4;

 switch (VAR_12->dtype) {
  case 129:
  case 128:
   *VAR_9 = VAR_3;
   *VAR_7 = VAR_12->data;
   *VAR_8 = &VAR_12->datalen;
   *VAR_10 = (dvoid *)&VAR_12->indicator;
   break;

  default:
   FUNC_0(((void*)0), VAR_0,
    "unhandled datatype in oci_define_callback; this should not happen");
   return VAR_2;
 }

 return VAR_1;
}
