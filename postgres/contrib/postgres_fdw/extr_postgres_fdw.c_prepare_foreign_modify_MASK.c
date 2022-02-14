
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int prep_name ;
struct TYPE_3__ {char* p_name; int query; int conn; } ;
typedef TYPE_1__ PgFdwModifyState ;
typedef int PGresult ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ,int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ,int,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_8(PgFdwModifyState *VAR_3)
{
 char VAR_4[VAR_1];
 char *VAR_5;
 PGresult *VAR_6;


 FUNC_7(VAR_4, sizeof(VAR_4), "pgsql_fdw_prep_%u",
    FUNC_0(VAR_3->conn));
 VAR_5 = FUNC_6(VAR_4);
 if (!FUNC_3(VAR_3->conn,
        VAR_5,
        VAR_3->query,
        0,
        ((void*)0)))
  FUNC_5(VAR_0, ((void*)0), VAR_3->conn, 0, VAR_3->query);







 VAR_6 = FUNC_4(VAR_3->conn, VAR_3->query);
 if (FUNC_2(VAR_6) != VAR_2)
  FUNC_5(VAR_0, VAR_6, VAR_3->conn, 1, VAR_3->query);
 FUNC_1(VAR_6);


 VAR_3->p_name = VAR_5;
}
