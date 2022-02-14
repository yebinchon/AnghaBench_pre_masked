
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int sversion; int encoding; int db; } ;
struct TYPE_12__ {char* data; int len; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef int EditableObjectType ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 char* FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;


 int FUNC_5 (TYPE_1__*,char*,char*) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*,char*,int ,int ) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_1__*,char*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;

__attribute__((used)) static bool
FUNC_19(EditableObjectType VAR_2, Oid VAR_3,
       PQExpBuffer VAR_4)
{
 bool VAR_5 = 1;
 PQExpBuffer VAR_6 = FUNC_9();
 PGresult *VAR_7;

 switch (VAR_2)
 {
  case 131:
   FUNC_15(VAR_6,
         "SELECT pg_catalog.pg_get_functiondef(%u)",
         VAR_3);
   break;

  case 130:
   if (VAR_1.sversion >= 90400)
   {
    FUNC_15(VAR_6,
          "SELECT nspname, relname, relkind, "
          "pg_catalog.pg_get_viewdef(c.oid, true), "
          "pg_catalog.array_remove(pg_catalog.array_remove(c.reloptions,'check_option=local'),'check_option=cascaded') AS reloptions, "
          "CASE WHEN 'check_option=local' = ANY (c.reloptions) THEN 'LOCAL'::text "
          "WHEN 'check_option=cascaded' = ANY (c.reloptions) THEN 'CASCADED'::text ELSE NULL END AS checkoption "
          "FROM pg_catalog.pg_class c "
          "LEFT JOIN pg_catalog.pg_namespace n "
          "ON c.relnamespace = n.oid WHERE c.oid = %u",
          VAR_3);
   }
   else if (VAR_1.sversion >= 90200)
   {
    FUNC_15(VAR_6,
          "SELECT nspname, relname, relkind, "
          "pg_catalog.pg_get_viewdef(c.oid, true), "
          "c.reloptions AS reloptions, "
          "NULL AS checkoption "
          "FROM pg_catalog.pg_class c "
          "LEFT JOIN pg_catalog.pg_namespace n "
          "ON c.relnamespace = n.oid WHERE c.oid = %u",
          VAR_3);
   }
   else
   {
    FUNC_15(VAR_6,
          "SELECT nspname, relname, relkind, "
          "pg_catalog.pg_get_viewdef(c.oid, true), "
          "NULL AS reloptions, "
          "NULL AS checkoption "
          "FROM pg_catalog.pg_class c "
          "LEFT JOIN pg_catalog.pg_namespace n "
          "ON c.relnamespace = n.oid WHERE c.oid = %u",
          VAR_3);
   }
   break;
 }

 if (!FUNC_11(VAR_6->data))
 {
  FUNC_10(VAR_6);
  return 0;
 }
 VAR_7 = FUNC_1(VAR_1.db, VAR_6->data);
 if (FUNC_4(VAR_7) == VAR_0 && FUNC_3(VAR_7) == 1)
 {
  FUNC_16(VAR_4);
  switch (VAR_2)
  {
   case 131:
    FUNC_7(VAR_4, FUNC_2(VAR_7, 0, 0));
    break;

   case 130:
    {
     char *VAR_8 = FUNC_2(VAR_7, 0, 0);
     char *VAR_9 = FUNC_2(VAR_7, 0, 1);
     char *VAR_10 = FUNC_2(VAR_7, 0, 2);
     char *VAR_11 = FUNC_2(VAR_7, 0, 3);
     char *VAR_12 = FUNC_2(VAR_7, 0, 4);
     char *VAR_13 = FUNC_2(VAR_7, 0, 5);







     switch (VAR_10[0])
     {





      case 128:
       FUNC_7(VAR_4, "CREATE OR REPLACE VIEW ");
       break;
      default:
       FUNC_14("\"%s.%s\" is not a view",
           VAR_8, VAR_9);
       VAR_5 = 0;
       break;
     }
     FUNC_5(VAR_4, "%s.", FUNC_12(VAR_8));
     FUNC_7(VAR_4, FUNC_12(VAR_9));


     if (VAR_12 != ((void*)0) && FUNC_18(VAR_12) > 2)
     {
      FUNC_7(VAR_4, "\n WITH (");
      if (!FUNC_8(VAR_4, VAR_12, "",
               VAR_1.encoding,
               FUNC_17()))
      {
       FUNC_14("could not parse reloptions array");
       VAR_5 = 0;
      }
      FUNC_6(VAR_4, ')');
     }


     FUNC_5(VAR_4, " AS\n%s", VAR_11);


     if (VAR_4->len > 0 && VAR_4->data[VAR_4->len - 1] == ';')
      VAR_4->data[--(VAR_4->len)] = '\0';


     if (VAR_13 && VAR_13[0] != '\0')
      FUNC_5(VAR_4, "\n WITH %s CHECK OPTION",
            VAR_13);
    }
    break;
  }

  if (VAR_4->len > 0 && VAR_4->data[VAR_4->len - 1] != '\n')
   FUNC_6(VAR_4, '\n');
 }
 else
 {
  FUNC_13(VAR_7);
  VAR_5 = 0;
 }

 FUNC_0(VAR_7);
 FUNC_10(VAR_6);

 return VAR_5;
}
