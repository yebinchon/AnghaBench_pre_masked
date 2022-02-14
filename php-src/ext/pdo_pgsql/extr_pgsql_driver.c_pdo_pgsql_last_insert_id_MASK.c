
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int PGresult ;
typedef scalar_t__ ExecStatusType ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,char*,int,int *,char const**,int *,int *,int ) ;
 size_t FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static char *FUNC_9(pdo_dbh_t *VAR_1, const char *VAR_2, size_t *VAR_3)
{
 pdo_pgsql_db_handle *VAR_4 = (pdo_pgsql_db_handle *)VAR_1->driver_data;
 char *VAR_5 = ((void*)0);
 PGresult *VAR_6;
 ExecStatusType VAR_7;

 if (VAR_2 == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_4->server, "SELECT LASTVAL()");
 } else {
  const char *VAR_8[1];
  VAR_8[0] = VAR_2;

  VAR_6 = FUNC_2(VAR_4->server, "SELECT CURRVAL($1)", 1, ((void*)0), VAR_8, ((void*)0), ((void*)0), 0);
 }
 VAR_7 = FUNC_5(VAR_6);

 if (VAR_6 && (VAR_7 == VAR_0)) {
  VAR_5 = FUNC_6((char *)FUNC_4(VAR_6, 0, 0));
  *VAR_3 = FUNC_3(VAR_6, 0, 0);
 } else {
  FUNC_7(VAR_1, VAR_7, FUNC_8(VAR_6));
 }

 if (VAR_6) {
  FUNC_0(VAR_6);
 }

 return VAR_5;
}
