
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; int tr; int isc_status; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_6__ {int transaction_flags; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int VAR_0 ;
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
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,unsigned short,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 char VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_21)
{
 pdo_firebird_db_handle *VAR_22 = (pdo_firebird_db_handle *)VAR_21->driver_data;
 char VAR_23[8] = { VAR_18 }, *VAR_24 = VAR_23+1;
 if (FUNC_1(VAR_22->isc_status, &VAR_22->tr, 1, &VAR_22->db, (unsigned short)(VAR_24-VAR_23), VAR_23)) {
  FUNC_0(VAR_21);
  return 0;
 }
 return 1;
}
