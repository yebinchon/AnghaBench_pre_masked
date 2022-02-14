
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int start_table; int stop_table; int expanded; scalar_t__ prior_records; } ;
struct TYPE_9__ {TYPE_8__ topt; } ;
typedef TYPE_1__ printQueryOpt ;
typedef int int64 ;
typedef int instr_time ;
typedef int fetch_cmd ;
typedef int buf ;
struct TYPE_11__ {int fetch_count; scalar_t__ timing; int db; int vars; scalar_t__ gfname; int logfile; scalar_t__ gset_prefix; int * queryFout; scalar_t__ g_expanded; TYPE_1__ popt; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int ,TYPE_8__*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*,char*,char const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (scalar_t__,int **,int*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,TYPE_1__*,int *,int,int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_26 () ;
 int FUNC_27 (char*,int,char*,int) ;
 int * VAR_7 ;
 int FUNC_28 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_29(const char *VAR_8, double *VAR_9)
{
 bool VAR_10 = 1;
 PGresult *VAR_11;
 PQExpBufferData VAR_12;
 printQueryOpt VAR_13 = VAR_6.popt;
 FILE *VAR_14;
 bool VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 int64 VAR_18 = 0;
 int VAR_19;
 int VAR_20;
 char VAR_21[64];
 instr_time VAR_22,
    VAR_23;
 int VAR_24;

 *VAR_9 = 0;


 VAR_13.topt.start_table = 1;
 VAR_13.topt.stop_table = 0;
 VAR_13.topt.prior_records = 0;

 if (VAR_6.timing)
  FUNC_5(VAR_22);


 if (FUNC_11(VAR_6.db) == VAR_4)
 {
  VAR_11 = FUNC_8(VAR_6.db, "BEGIN");
  VAR_10 = FUNC_0(VAR_11) &&
   (FUNC_10(VAR_11) == VAR_2);
  FUNC_2(VAR_11);
  if (!VAR_10)
   return 0;
  VAR_17 = 1;
 }


 FUNC_22(&VAR_12);
 FUNC_16(&VAR_12, "DECLARE _psql_cursor NO SCROLL CURSOR FOR\n%s",
       VAR_8);

 VAR_11 = FUNC_8(VAR_6.db, VAR_12.data);
 VAR_10 = FUNC_0(VAR_11) &&
  (FUNC_10(VAR_11) == VAR_2);
 if (!VAR_10)
  FUNC_13(VAR_11, VAR_10);
 FUNC_2(VAR_11);
 FUNC_28(&VAR_12);
 if (!VAR_10)
  goto cleanup;

 if (VAR_6.timing)
 {
  FUNC_5(VAR_23);
  FUNC_6(VAR_23, VAR_22);
  *VAR_9 += FUNC_4(VAR_23);
 }





 if (VAR_6.gset_prefix)
  VAR_20 = 2;
 else
  VAR_20 = VAR_6.fetch_count;

 FUNC_27(VAR_21, sizeof(VAR_21),
    "FETCH FORWARD %d FROM _psql_cursor",
    VAR_20);


 if (VAR_6.g_expanded)
  VAR_13.topt.expanded = 1;


 if (VAR_6.gfname)
 {
  if (!FUNC_23(VAR_6.gfname, &VAR_14, &VAR_15))
  {
   VAR_10 = 0;
   goto cleanup;
  }
  if (VAR_15)
   FUNC_18();
 }
 else
 {
  VAR_14 = VAR_6.queryFout;
  VAR_15 = 0;
 }


 FUNC_17(VAR_14);

 for (;;)
 {
  if (VAR_6.timing)
   FUNC_5(VAR_22);


  VAR_11 = FUNC_8(VAR_6.db, VAR_21);

  if (VAR_6.timing)
  {
   FUNC_5(VAR_23);
   FUNC_6(VAR_23, VAR_22);
   *VAR_9 += FUNC_4(VAR_23);
  }

  if (FUNC_10(VAR_11) != VAR_3)
  {

   if (VAR_16)
   {
    FUNC_3(VAR_14);
    VAR_16 = 0;
   }

   VAR_10 = FUNC_0(VAR_11);
   FUNC_1(!VAR_10);
   FUNC_13(VAR_11, VAR_10);
   FUNC_2(VAR_11);
   break;
  }

  if (VAR_6.gset_prefix)
  {

   VAR_10 = FUNC_15(VAR_11);
   FUNC_2(VAR_11);
   break;
  }





  VAR_19 = FUNC_9(VAR_11);
  VAR_18 += VAR_19;

  if (VAR_19 < VAR_20)
  {

   VAR_13.topt.stop_table = 1;
  }
  else if (VAR_14 == VAR_7 && !VAR_16)
  {




   VAR_14 = FUNC_12(VAR_1, &(VAR_13.topt));
   VAR_16 = 1;
  }

  FUNC_25(VAR_11, &VAR_13, VAR_14, VAR_16, VAR_6.logfile);

  FUNC_2(VAR_11);


  VAR_13.topt.start_table = 0;
  VAR_13.topt.prior_records += VAR_19;







  VAR_24 = FUNC_21(VAR_14);
  if (VAR_19 < VAR_20 || VAR_5 || VAR_24 ||
   FUNC_20(VAR_14))
   break;
 }

 if (VAR_6.gfname)
 {

  if (VAR_15)
  {
   FUNC_24(VAR_14);
   FUNC_26();
  }
  else
   FUNC_19(VAR_14);
 }
 else if (VAR_16)
 {

  FUNC_3(VAR_14);
 }

 if (VAR_10)
 {





  char VAR_25[32];

  FUNC_14(VAR_6.vars, "ERROR", "false");
  FUNC_14(VAR_6.vars, "SQLSTATE", "00000");
  FUNC_27(VAR_25, sizeof(VAR_25), VAR_0, VAR_18);
  FUNC_14(VAR_6.vars, "ROW_COUNT", VAR_25);
 }

cleanup:
 if (VAR_6.timing)
  FUNC_5(VAR_22);






 VAR_11 = FUNC_8(VAR_6.db, "CLOSE _psql_cursor");
 if (VAR_10)
 {
  VAR_10 = FUNC_0(VAR_11) &&
   (FUNC_10(VAR_11) == VAR_2);
  FUNC_2(VAR_11);
 }
 else
  FUNC_7(VAR_11);

 if (VAR_17)
 {
  VAR_11 = FUNC_8(VAR_6.db, VAR_10 ? "COMMIT" : "ROLLBACK");
  VAR_10 &= FUNC_0(VAR_11) &&
   (FUNC_10(VAR_11) == VAR_2);
  FUNC_2(VAR_11);
 }

 if (VAR_6.timing)
 {
  FUNC_5(VAR_23);
  FUNC_6(VAR_23, VAR_22);
  *VAR_9 += FUNC_4(VAR_23);
 }

 return VAR_10;
}
