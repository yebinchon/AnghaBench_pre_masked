
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;
typedef int ClusterInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,char*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(ClusterInfo *VAR_1)
{
 PGresult *VAR_2;
 PGconn *VAR_3 = FUNC_4(VAR_1, "template1");

 FUNC_7("Checking for roles starting with \"pg_\"");

 VAR_2 = FUNC_5(VAR_3,
       "SELECT * "
       "FROM pg_catalog.pg_roles "
       "WHERE rolname ~ '^pg_'");

 if (FUNC_2(VAR_2) != 0)
 {
  if (VAR_1 == &VAR_0)
   FUNC_6("The source cluster contains roles starting with \"pg_\"\n");
  else
   FUNC_6("The target cluster contains roles starting with \"pg_\"\n");
 }

 FUNC_0(VAR_2);

 FUNC_1(VAR_3);

 FUNC_3();
}
