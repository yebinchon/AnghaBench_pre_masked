
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


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_3__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,TYPE_3__*,int ,int,int,char*,char*,int *,char*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void
FUNC_15(Archive *VAR_8,
         SimpleStringList *VAR_9, SimpleOidList *VAR_10,
         bool VAR_11)
{
 PQExpBuffer VAR_12;
 PGresult *VAR_13;
 SimpleStringListCell *VAR_14;
 int VAR_15;

 if (VAR_9->head == ((void*)0))
  return;

 VAR_12 = FUNC_9();






 for (VAR_14 = VAR_9->head; VAR_14; VAR_14 = VAR_14->next)
 {





  FUNC_7(VAR_12,
        "SELECT c.oid"
        "\nFROM pg_catalog.pg_class c"
        "\n     LEFT JOIN pg_catalog.pg_namespace n"
        "\n     ON n.oid OPERATOR(pg_catalog.=) c.relnamespace"
        "\nWHERE c.relkind OPERATOR(pg_catalog.=) ANY"
        "\n    (array['%c', '%c', '%c', '%c', '%c', '%c'])\n",
        VAR_5, VAR_6, VAR_7,
        VAR_3, VAR_2,
        VAR_4);
  FUNC_12(FUNC_3(VAR_8), VAR_12, VAR_14->val, 1,
         0, "n.nspname", "c.relname", ((void*)0),
         "pg_catalog.pg_table_is_visible(c.oid)");

  FUNC_2(VAR_8, "RESET search_path");
  VAR_13 = FUNC_0(VAR_8, VAR_12->data, VAR_1);
  FUNC_4(FUNC_1(VAR_8,
           VAR_0));
  if (VAR_11 && FUNC_6(VAR_13) == 0)
   FUNC_11("no matching tables were found for pattern \"%s\"", VAR_14->val);

  for (VAR_15 = 0; VAR_15 < FUNC_6(VAR_13); VAR_15++)
  {
   FUNC_14(VAR_10, FUNC_8(FUNC_5(VAR_13, VAR_15, 0)));
  }

  FUNC_4(VAR_13);
  FUNC_13(VAR_12);
 }

 FUNC_10(VAR_12);
}
