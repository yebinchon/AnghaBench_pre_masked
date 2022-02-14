
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int db; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef int EditableObjectType ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char const*,int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_13 (char const*,char) ;

__attribute__((used)) static bool
FUNC_14(EditableObjectType VAR_2, const char *VAR_3,
      Oid *VAR_4)
{
 bool VAR_5 = 1;
 PQExpBuffer VAR_6 = FUNC_9();
 PGresult *VAR_7;

 switch (VAR_2)
 {
  case 129:






   FUNC_6(VAR_6, "SELECT ");
   FUNC_7(VAR_6, VAR_3, VAR_1.db);
   FUNC_5(VAR_6, "::pg_catalog.%s::pg_catalog.oid",
         FUNC_13(VAR_3, '(') ? "regprocedure" : "regproc");
   break;

  case 128:






   FUNC_6(VAR_6, "SELECT ");
   FUNC_7(VAR_6, VAR_3, VAR_1.db);
   FUNC_6(VAR_6, "::pg_catalog.regclass::pg_catalog.oid");
   break;
 }

 if (!FUNC_11(VAR_6->data))
 {
  FUNC_10(VAR_6);
  return 0;
 }
 VAR_7 = FUNC_1(VAR_1.db, VAR_6->data);
 if (FUNC_4(VAR_7) == VAR_0 && FUNC_3(VAR_7) == 1)
  *VAR_4 = FUNC_8(FUNC_2(VAR_7, 0, 0));
 else
 {
  FUNC_12(VAR_7);
  VAR_5 = 0;
 }

 FUNC_0(VAR_7);
 FUNC_10(VAR_6);

 return VAR_5;
}
