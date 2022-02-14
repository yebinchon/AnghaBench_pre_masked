
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef scalar_t__ RETCODE ;
typedef int DBINT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 size_t FUNC_3 (int *,int ,int ,scalar_t__,int ,int *,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 char* FUNC_9 (int) ;

char *FUNC_10(pdo_dbh_t *VAR_4, const char *VAR_5, size_t *VAR_6)
{
 pdo_dblib_db_handle *VAR_7 = (pdo_dblib_db_handle *)VAR_4->driver_data;

 RETCODE VAR_8;
 char *VAR_9 = ((void*)0);





 if (VAR_0 == FUNC_1(VAR_7->link, "SELECT @@IDENTITY")) {
  return ((void*)0);
 }

 if (VAR_0 == FUNC_8(VAR_7->link)) {
  return ((void*)0);
 }

 VAR_8 = FUNC_7(VAR_7->link);
 if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
  FUNC_0(VAR_7->link);
  return ((void*)0);
 }

 VAR_8 = FUNC_6(VAR_7->link);

 if (VAR_8 == VAR_0 || VAR_8 == VAR_2) {
  FUNC_0(VAR_7->link);
  return ((void*)0);
 }

 if (FUNC_5(VAR_7->link, 1) == 0) {
  FUNC_0(VAR_7->link);
  return ((void*)0);
 }

 VAR_9 = FUNC_9(32);
 *VAR_6 = FUNC_3(((void*)0), (FUNC_2(VAR_7->link, 1)) , (FUNC_4(VAR_7->link, 1)) , (FUNC_5(VAR_7->link, 1)), VAR_3, (BYTE *)VAR_9, (DBINT)-1);

 FUNC_0(VAR_7->link);
 return VAR_9;
}
