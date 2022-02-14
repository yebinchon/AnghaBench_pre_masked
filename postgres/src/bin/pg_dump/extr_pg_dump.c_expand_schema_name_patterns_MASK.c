
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int data; } ;
struct TYPE_11__ {TYPE_1__* head; } ;
struct TYPE_10__ {int val; struct TYPE_10__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;
typedef int SimpleOidList ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef int Archive ;


 int * FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,TYPE_3__*,int ,int,int,int *,char*,int *,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(Archive *VAR_1,
       SimpleStringList *VAR_2,
       SimpleOidList *VAR_3,
       bool VAR_4)
{
 PQExpBuffer VAR_5;
 PGresult *VAR_6;
 SimpleStringListCell *VAR_7;
 int VAR_8;

 if (VAR_2->head == ((void*)0))
  return;

 VAR_5 = FUNC_7();






 for (VAR_7 = VAR_2->head; VAR_7; VAR_7 = VAR_7->next)
 {
  FUNC_5(VAR_5,
        "SELECT oid FROM pg_catalog.pg_namespace n\n");
  FUNC_10(FUNC_1(VAR_1), VAR_5, VAR_7->val, 0,
         0, ((void*)0), "n.nspname", ((void*)0), ((void*)0));

  VAR_6 = FUNC_0(VAR_1, VAR_5->data, VAR_0);
  if (VAR_4 && FUNC_4(VAR_6) == 0)
   FUNC_9("no matching schemas were found for pattern \"%s\"", VAR_7->val);

  for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_6); VAR_8++)
  {
   FUNC_12(VAR_3, FUNC_6(FUNC_3(VAR_6, VAR_8, 0)));
  }

  FUNC_2(VAR_6);
  FUNC_11(VAR_5);
 }

 FUNC_8(VAR_5);
}
