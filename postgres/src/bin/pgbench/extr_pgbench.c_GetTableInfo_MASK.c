
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 char* FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (char*,char*) ;

__attribute__((used)) static void
FUNC_14(PGconn *VAR_10, bool VAR_11)
{
 PGresult *VAR_12;





 VAR_12 = FUNC_4(VAR_10, "select count(*) from pgbench_branches");
 if (FUNC_9(VAR_12) != VAR_4)
 {
  char *VAR_13 = FUNC_8(VAR_12, VAR_5);

  FUNC_12(VAR_9, "%s", FUNC_3(VAR_10));
  if (VAR_13 && FUNC_13(VAR_13, VAR_0) == 0)
  {
   FUNC_12(VAR_9, "Perhaps you need to do initialization (\"pgbench -i\") in database \"%s\"\n", FUNC_2(VAR_10));
  }

  FUNC_11(1);
 }
 VAR_8 = FUNC_10(FUNC_6(VAR_12, 0, 0));
 if (VAR_8 < 0)
 {
  FUNC_12(VAR_9, "invalid count(*) from pgbench_branches: \"%s\"\n",
    FUNC_6(VAR_12, 0, 0));
  FUNC_11(1);
 }
 FUNC_1(VAR_12);


 if (VAR_11)
  FUNC_12(VAR_9,
    "scale option ignored, using count from pgbench_branches table (%s)\n",
    VAR_8);
 VAR_12 = FUNC_4(VAR_10,
     "select o.n, p.partstrat, pg_catalog.count(i.inhparent) "
     "from pg_catalog.pg_class as c "
     "join pg_catalog.pg_namespace as n on (n.oid = c.relnamespace) "
     "cross join lateral (select pg_catalog.array_position(pg_catalog.current_schemas(true), n.nspname)) as o(n) "
     "left join pg_catalog.pg_partitioned_table as p on (p.partrelid = c.oid) "
     "left join pg_catalog.pg_inherits as i on (c.oid = i.inhparent) "
     "where c.relname = 'pgbench_accounts' and o.n is not null "
     "group by 1, 2 "
     "order by 1 asc "
     "limit 1");

 if (FUNC_9(VAR_12) != VAR_4)
 {

  VAR_6 = VAR_2;
  VAR_7 = 0;
 }
 else if (FUNC_7(VAR_12) == 0)
 {




  FUNC_12(VAR_9,
    "no pgbench_accounts table found in search_path\n"
    "Perhaps you need to do initialization (\"pgbench -i\") in database \"%s\".\n", FUNC_2(VAR_10));
  FUNC_11(1);
 }
 else
 {

  if (FUNC_5(VAR_12, 0, 1))
   VAR_6 = VAR_2;
  else
  {
   char *VAR_14 = FUNC_6(VAR_12, 0, 1);


   FUNC_0(VAR_14 != ((void*)0));

   if (FUNC_13(VAR_14, "r") == 0)
    VAR_6 = VAR_3;
   else if (FUNC_13(VAR_14, "h") == 0)
    VAR_6 = VAR_1;
   else
   {

    FUNC_12(VAR_9, "unexpected partition method: \"%s\"\n", VAR_14);
    FUNC_11(1);
   }
  }

  VAR_7 = FUNC_10(FUNC_6(VAR_12, 0, 2));
 }

 FUNC_1(VAR_12);
}
