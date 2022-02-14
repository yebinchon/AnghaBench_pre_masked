
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opts ;
typedef int buffer ;
typedef int PGconn ;


 char** VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ddlinfo const*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_10(PGconn *VAR_8)
{
 struct ddlinfo
 {
  const char *table;
  const char *smcols;
  const char *bigcols;
  int declare_fillfactor;
 };
 static const struct ddlinfo VAR_9[] = {
  {
   "pgbench_history",
   "tid int,bid int,aid    int,delta int,mtime timestamp,filler char(22)",
   "tid int,bid int,aid bigint,delta int,mtime timestamp,filler char(22)",
   0
  },
  {
   "pgbench_tellers",
   "tid int not null,bid int,tbalance int,filler char(84)",
   "tid int not null,bid int,tbalance int,filler char(84)",
   1
  },
  {
   "pgbench_accounts",
   "aid    int not null,bid int,abalance int,filler char(84)",
   "aid bigint not null,bid int,abalance int,filler char(84)",
   1
  },
  {
   "pgbench_branches",
   "bid int not null,bbalance int,filler char(88)",
   "bid int not null,bbalance int,filler char(88)",
   1
  }
 };
 int VAR_10;

 FUNC_5(VAR_5, "creating tables...\n");

 for (VAR_10 = 0; VAR_10 < FUNC_6(VAR_9); VAR_10++)
 {
  char VAR_11[256];
  char VAR_12[256];
  const struct ddlinfo *VAR_13 = &VAR_9[VAR_10];
  const char *VAR_14;


  VAR_11[0] = '\0';


  if (VAR_3 != VAR_1 && FUNC_8(VAR_13->table, "pgbench_accounts") == 0)
   FUNC_7(VAR_11 + FUNC_9(VAR_11), sizeof(VAR_11) - FUNC_9(VAR_11),
      " partition by %s (aid)", VAR_0[VAR_3]);
  else if (VAR_13->declare_fillfactor)

   FUNC_2(VAR_11, sizeof(VAR_11));

  if (VAR_6 != ((void*)0))
  {
   char *VAR_15;

   VAR_15 = FUNC_0(VAR_8, VAR_6,
               FUNC_9(VAR_6));
   FUNC_7(VAR_11 + FUNC_9(VAR_11), sizeof(VAR_11) - FUNC_9(VAR_11),
      " tablespace %s", VAR_15);
   FUNC_1(VAR_15);
  }

  VAR_14 = (VAR_4 >= VAR_2) ? VAR_13->bigcols : VAR_13->smcols;

  FUNC_7(VAR_12, sizeof(VAR_12), "create%s table %s(%s)%s",
     VAR_7 ? " unlogged" : "",
     VAR_13->table, VAR_14, VAR_11);

  FUNC_4(VAR_8, VAR_12);
 }

 if (VAR_3 != VAR_1)
  FUNC_3(VAR_8);
}
