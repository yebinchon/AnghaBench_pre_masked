
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int query ;
typedef int int64 ;
typedef int ff ;
typedef int PGconn ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,int,char*,char*,int,...) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_6(PGconn *VAR_9)
{
 char VAR_10[64];

 VAR_10[0] = '\0';





 FUNC_1(VAR_10, sizeof(VAR_10));


 FUNC_0(VAR_5 > 0);

 FUNC_3(VAR_7, "creating %d partitions...\n", VAR_5);

 for (int VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++)
 {
  char VAR_12[256];

  if (VAR_4 == VAR_2)
  {
   int64 VAR_13 = (VAR_3 * (int64) VAR_6 + VAR_5 - 1) / VAR_5;
   char VAR_14[32],
      VAR_15[32];







   if (VAR_11 == 1)
    FUNC_5(VAR_14, "minvalue");
   else
    FUNC_5(VAR_14, VAR_0, (VAR_11 - 1) * VAR_13 + 1);

   if (VAR_11 < VAR_5)
    FUNC_5(VAR_15, VAR_0, VAR_11 * VAR_13 + 1);
   else
    FUNC_5(VAR_15, "maxvalue");

   FUNC_4(VAR_12, sizeof(VAR_12),
      "create%s table pgbench_accounts_%d\n"
      "  partition of pgbench_accounts\n"
      "  for values from (%s) to (%s)%s\n",
      VAR_8 ? " unlogged" : "", VAR_11,
      VAR_14, VAR_15, VAR_10);
  }
  else if (VAR_4 == VAR_1)
   FUNC_4(VAR_12, sizeof(VAR_12),
      "create%s table pgbench_accounts_%d\n"
      "  partition of pgbench_accounts\n"
      "  for values with (modulus %d, remainder %d)%s\n",
      VAR_8 ? " unlogged" : "", VAR_11,
      VAR_5, VAR_11 - 1, VAR_10);
  else
   FUNC_0(0);

  FUNC_2(VAR_9, VAR_12);
 }
}
