
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_9__ {int queryFout; scalar_t__ timing; int db; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ,char const*,int ) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char*,char const*,int ,int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (TYPE_1__*,char*,char*,int ,int ) ;
 int FUNC_21 (TYPE_1__*,char*) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (TYPE_1__*,char*,int ,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_29(const char *VAR_2, double *VAR_3)
{
 PGresult *VAR_4;
 bool VAR_5;
 instr_time VAR_6,
    VAR_7;

 *VAR_3 = 0;

 if (VAR_1.timing)
  FUNC_3(VAR_6);
 VAR_4 = FUNC_15(VAR_1.db, "", VAR_2, 0, ((void*)0));
 if (FUNC_16(VAR_4) != VAR_0)
 {
  FUNC_25("%s", FUNC_7(VAR_1.db));
  FUNC_18(VAR_4, 0);
  FUNC_1(VAR_4);
  return 0;
 }
 FUNC_5(VAR_4);

 VAR_4 = FUNC_6(VAR_1.db, "");
 VAR_5 = FUNC_0(VAR_4) &&
  (FUNC_16(VAR_4) == VAR_0);
 if (VAR_5 && VAR_4)
 {
  if (FUNC_14(VAR_4) > 0)
  {
   PQExpBufferData VAR_8;
   int VAR_9;

   FUNC_24(&VAR_8);

   FUNC_26(&VAR_8,
         "SELECT name AS \"%s\", pg_catalog.format_type(tp, tpm) AS \"%s\"\n"
         "FROM (VALUES ",
         FUNC_23("Column"),
         FUNC_23("Type"));

   for (VAR_9 = 0; VAR_9 < FUNC_14(VAR_4); VAR_9++)
   {
    const char *VAR_10;
    char *VAR_11;

    if (VAR_9 > 0)
     FUNC_21(&VAR_8, ",");

    VAR_10 = FUNC_11(VAR_4, VAR_9);
    VAR_11 = FUNC_8(VAR_1.db, VAR_10, FUNC_27(VAR_10));

    if (VAR_11 == ((void*)0))
    {
     FUNC_25("%s", FUNC_7(VAR_1.db));
     FUNC_5(VAR_4);
     FUNC_28(&VAR_8);
     return 0;
    }

    FUNC_20(&VAR_8, "(%s, '%u'::pg_catalog.oid, %d)",
          VAR_11,
          FUNC_13(VAR_4, VAR_9),
          FUNC_10(VAR_4, VAR_9));

    FUNC_12(VAR_11);
   }

   FUNC_21(&VAR_8, ") s(name, tp, tpm)");
   FUNC_5(VAR_4);

   VAR_4 = FUNC_9(VAR_1.db, VAR_8.data);
   VAR_5 = FUNC_0(VAR_4);

   if (VAR_1.timing)
   {
    FUNC_3(VAR_7);
    FUNC_4(VAR_7, VAR_6);
    *VAR_3 += FUNC_2(VAR_7);
   }

   if (VAR_5 && VAR_4)
    VAR_5 = FUNC_17(VAR_4);

   FUNC_28(&VAR_8);
  }
  else
   FUNC_22(VAR_1.queryFout,
     "%s", FUNC_19("The command has no result, or the result has no columns.\n"));
 }

 FUNC_18(VAR_4, VAR_5);
 FUNC_1(VAR_4);

 return VAR_5;
}
