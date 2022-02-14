
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int setstmt; int dbname; } ;
typedef int Oid ;
typedef TYPE_1__ AlterDatabaseSetStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

Oid
FUNC_7(AlterDatabaseSetStmt *VAR_5)
{
 Oid VAR_6 = FUNC_4(VAR_5->dbname, 0);





 FUNC_6(VAR_2, VAR_6);

 if (!FUNC_5(VAR_6, FUNC_1()))
  FUNC_3(VAR_0, VAR_4,
        VAR_5->dbname);

 FUNC_0(VAR_6, VAR_3, VAR_5->setstmt);

 FUNC_2(VAR_2, VAR_6, 0, VAR_1);

 return VAR_6;
}
