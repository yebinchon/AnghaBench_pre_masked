
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_4__ {int link; int err; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef scalar_t__ RETCODE ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static zend_long FUNC_8(pdo_dbh_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 pdo_dblib_db_handle *VAR_4 = (pdo_dblib_db_handle *)VAR_1->driver_data;
 RETCODE VAR_5, VAR_6;

 FUNC_6(VAR_4->link, (BYTE*)&VAR_4->err);

 if (VAR_0 == FUNC_2(VAR_4->link, VAR_2)) {
  return -1;
 }

 if (VAR_0 == FUNC_7(VAR_4->link)) {
  return -1;
 }

 VAR_6 = FUNC_5(VAR_4->link);

 if (VAR_6 == VAR_0) {
  return -1;
 }

 VAR_5 = FUNC_3(VAR_4->link);
 if (VAR_5 == VAR_0) {
  return -1;
 }

 if (FUNC_4(VAR_4->link) <= 0) {
  return FUNC_0(VAR_4->link);
 }


 FUNC_1(VAR_4->link);

 return FUNC_0(VAR_4->link);
}
