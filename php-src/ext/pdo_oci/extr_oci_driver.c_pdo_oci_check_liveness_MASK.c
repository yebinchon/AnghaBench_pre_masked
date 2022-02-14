
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int version ;
typedef int ub4 ;
typedef int text ;
typedef int sb4 ;
struct TYPE_4__ {scalar_t__ attached; scalar_t__ last_err; int err; int svc; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_6)
{
 pdo_oci_db_handle *VAR_7 = (pdo_oci_db_handle *)VAR_6->driver_data;
 sb4 VAR_8 = 0;

 char VAR_9[256];



 if (VAR_7->attached == 0) {
  return VAR_0;
 }
 VAR_7->last_err = FUNC_2 (VAR_7->svc, VAR_7->err, (text *)VAR_9, sizeof(VAR_9), VAR_3);

 if (VAR_7->last_err == VAR_4) {
  return VAR_5;
 }

 FUNC_0 (VAR_7->err, (ub4)1, ((void*)0), &VAR_8, ((void*)0), 0, VAR_2);

 if (VAR_8 == 1010) {
  return VAR_5;
 }
 return VAR_0;
}
