
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_long ;
typedef int result ;
struct TYPE_10__ {int isc_status; int tr; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_11__ {scalar_t__ auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int isc_stmt_handle ;
typedef int info_count ;
struct TYPE_12__ {int sqln; scalar_t__ sqld; int version; } ;
typedef TYPE_3__ XSQLDA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t,TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int ,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,int,char*) ;
 char VAR_3 ;
 char VAR_4 ;

 unsigned int FUNC_7 (char*,short) ;

__attribute__((used)) static zend_long FUNC_8(pdo_dbh_t *VAR_5, const char *VAR_6, size_t VAR_7)
{
 pdo_firebird_db_handle *VAR_8 = (pdo_firebird_db_handle *)VAR_5->driver_data;
 isc_stmt_handle VAR_9 = VAR_2;
 static char const VAR_10[] = { 128 };
 char VAR_11[64];
 int VAR_12 = 0;
 XSQLDA VAR_13, VAR_14;


 VAR_13.version = VAR_14.version = VAR_1;
 VAR_13.sqld = VAR_14.sqld = 0;
 VAR_14.sqln = 1;


 if (!FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_14, &VAR_9, 0)) {
  return -1;
 }


 if (FUNC_4(VAR_8->isc_status, &VAR_8->tr, &VAR_9, VAR_1, &VAR_13, &VAR_14)) {
  FUNC_0(VAR_5);
  VAR_12 = -1;
  goto free_statement;
 }


 if (FUNC_6(VAR_8->isc_status, &VAR_9, sizeof(VAR_10), FUNC_1(VAR_10),
   sizeof(VAR_11), VAR_11)) {
  FUNC_0(VAR_5);
  VAR_12 = -1;
  goto free_statement;
 }

 if (VAR_11[0] == 128) {
  unsigned VAR_15 = 3, VAR_16 = FUNC_7(&VAR_11[1],2);

  while (VAR_11[VAR_15] != VAR_3 && VAR_15 < VAR_16) {
   short VAR_17 = (short)FUNC_7(&VAR_11[VAR_15+1],2);
   if (VAR_11[VAR_15] != VAR_4) {
    VAR_12 += FUNC_7(&VAR_11[VAR_15+3],VAR_17);
   }
   VAR_15 += VAR_17+3;
  }
 }


 if (VAR_5->auto_commit && FUNC_3(VAR_8->isc_status, &VAR_8->tr)) {
  FUNC_0(VAR_5);
 }

free_statement:

 if (FUNC_5(VAR_8->isc_status, &VAR_9, VAR_0)) {
  FUNC_0(VAR_5);
 }

 return VAR_12;
}
