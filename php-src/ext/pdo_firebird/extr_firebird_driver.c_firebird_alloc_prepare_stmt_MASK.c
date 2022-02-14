
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_long ;
struct TYPE_6__ {int sql_dialect; int tr; int isc_status; int db; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_7__ {int in_txn; scalar_t__ auto_commit; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int isc_stmt_handle ;
typedef int XSQLDA ;
typedef int HashTable ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int ,char*,int ,int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,char*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_9(pdo_dbh_t *VAR_0, const char *VAR_1, size_t VAR_2,
 XSQLDA *VAR_3, isc_stmt_handle *VAR_4, HashTable *VAR_5)
{
 pdo_firebird_db_handle *VAR_6 = (pdo_firebird_db_handle *)VAR_0->driver_data;
 char *VAR_7, *VAR_8, VAR_9, VAR_10, VAR_11[64], *VAR_12;
 zend_long VAR_13, VAR_14 = -1;


 if (VAR_2 > 65536) {
  FUNC_7(VAR_0->error_code, "01004");
  return 0;
 }


 if (VAR_0->auto_commit && !VAR_0->in_txn) {


  if (!FUNC_4(VAR_0)) {
   return 0;
  }
  VAR_0->in_txn = 1;
 }


 if (FUNC_5(VAR_6->isc_status, &VAR_6->db, VAR_4)) {
  FUNC_0(VAR_0);
  return 0;
 }



 VAR_8 = VAR_7 = FUNC_3(VAR_2+1);

 for (VAR_13 = VAR_9 = VAR_10 = 0; VAR_13 <= VAR_2; ++VAR_13) {
  if ( !(VAR_9 ^= (VAR_1[VAR_13] == '\''))) {
   if (!VAR_10) {
    switch (VAR_1[VAR_13]) {
     case ':':
      VAR_10 = 1;
      VAR_12 = VAR_11;
      *VAR_12++ = VAR_1[VAR_13];
     case '?':
      *VAR_7++ = '?';
      ++VAR_14;
     continue;
    }
   } else {
                                if ((VAR_10 &= ((VAR_1[VAR_13] >= 'A' && VAR_1[VAR_13] <= 'Z') || (VAR_1[VAR_13] >= 'a' && VAR_1[VAR_13] <= 'z')
                                        || (VAR_1[VAR_13] >= '0' && VAR_1[VAR_13] <= '9') || VAR_1[VAR_13] == '_' || VAR_1[VAR_13] == '-'))) {


     *VAR_12++ = VAR_1[VAR_13];
     continue;
    } else {
     *VAR_12++ = 0;
     if (VAR_5) {
      zval VAR_15;
      FUNC_1(&VAR_15, VAR_14);
      FUNC_8(VAR_5, VAR_11, (unsigned int)(VAR_12 - VAR_11 - 1), &VAR_15);
     }
    }
   }
  }
  *VAR_7++ = VAR_1[VAR_13];
 }


 if (FUNC_6(VAR_6->isc_status, &VAR_6->tr, VAR_4, 0, VAR_8, VAR_6->sql_dialect, VAR_3)) {
  FUNC_0(VAR_0);
  FUNC_2(VAR_8);
  return 0;
 }

 FUNC_2(VAR_8);
 return 1;
}
