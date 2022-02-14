
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int ub4 ;
typedef int ub1 ;
struct pdo_bound_param_data {int parameter; scalar_t__ driver_data; } ;
typedef int sb4 ;
struct TYPE_2__ {int indicator; int* thing; } ;
typedef TYPE_1__ pdo_oci_bound_param ;
typedef int dvoid ;
typedef int OCIBind ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static sb4 FUNC_7(dvoid *VAR_4, OCIBind *VAR_5, ub4 VAR_6, ub4 VAR_7, dvoid **VAR_8, ub4 *VAR_9, ub1 *VAR_10, dvoid **VAR_11)
{
 struct pdo_bound_param_data *VAR_12 = (struct pdo_bound_param_data*)VAR_4;
 pdo_oci_bound_param *VAR_13 = (pdo_oci_bound_param*)VAR_12->driver_data;
 zval *VAR_14;

 if (!VAR_12) {
  FUNC_5(((void*)0), VAR_0, "param is NULL in oci_bind_input_cb; this should not happen");
  return VAR_2;
 }

 *VAR_11 = &VAR_13->indicator;

    if (FUNC_1(VAR_12->parameter))
  VAR_14 = FUNC_2(VAR_12->parameter);
 else
  VAR_14 = &VAR_12->parameter;

 if (VAR_13->thing) {
  *VAR_8 = VAR_13->thing;
  *VAR_9 = sizeof(void*);
 } else if (FUNC_0(VAR_14)) {

  VAR_13->indicator = -1;
  *VAR_8 = 0;
  *VAR_9 = -1;
 } else if (!VAR_13->thing) {

  if (!FUNC_6(VAR_14)) {
   return VAR_2;
  }
  *VAR_8 = FUNC_4(VAR_14);
  *VAR_9 = (ub4) FUNC_3(VAR_14);
 }

 *VAR_10 = VAR_3;
 return VAR_1;
}
