
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ timestamp_format; scalar_t__ time_format; scalar_t__ date_format; int db; int isc_status; int tr; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_7__ {int is_persistent; scalar_t__ auto_commit; scalar_t__ in_txn; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(pdo_dbh_t *VAR_0)
{
 pdo_firebird_db_handle *VAR_1 = (pdo_firebird_db_handle *)VAR_0->driver_data;

 if (VAR_0->in_txn) {
  if (VAR_0->auto_commit) {
   if (FUNC_2(VAR_1->isc_status, &VAR_1->tr)) {
    FUNC_0(VAR_0);
   }
  } else {
   if (FUNC_4(VAR_1->isc_status, &VAR_1->tr)) {
    FUNC_0(VAR_0);
   }
  }
 }

 if (FUNC_3(VAR_1->isc_status, &VAR_1->db)) {
  FUNC_0(VAR_0);
 }

 if (VAR_1->date_format) {
  FUNC_1(VAR_1->date_format);
 }
 if (VAR_1->time_format) {
  FUNC_1(VAR_1->time_format);
 }
 if (VAR_1->timestamp_format) {
  FUNC_1(VAR_1->timestamp_format);
 }

 FUNC_5(VAR_1, VAR_0->is_persistent);

 return 0;
}
