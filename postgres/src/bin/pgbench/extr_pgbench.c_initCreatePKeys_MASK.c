
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int PGconn ;


 char* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*) ;
 char* VAR_0 ;
 int FUNC_4 (char const* const*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int VAR_1 ;
 int FUNC_6 (char*,char const* const,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(PGconn *VAR_2)
{
 static const char *const VAR_3[] = {
  "alter table pgbench_branches add primary key (bid)",
  "alter table pgbench_tellers add primary key (tid)",
  "alter table pgbench_accounts add primary key (aid)"
 };
 int VAR_4;

 FUNC_3(VAR_1, "creating primary keys...\n");
 for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_3); VAR_4++)
 {
  char VAR_5[256];

  FUNC_6(VAR_5, VAR_3[VAR_4], sizeof(VAR_5));

  if (VAR_0 != ((void*)0))
  {
   char *VAR_6;

   VAR_6 = FUNC_0(VAR_2, VAR_0,
               FUNC_7(VAR_0));
   FUNC_5(VAR_5 + FUNC_7(VAR_5), sizeof(VAR_5) - FUNC_7(VAR_5),
      " using index tablespace %s", VAR_6);
   FUNC_1(VAR_6);
  }

  FUNC_2(VAR_2, VAR_5);
 }
}
