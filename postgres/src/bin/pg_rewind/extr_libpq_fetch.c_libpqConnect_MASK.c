
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (char*,char*) ;

void
FUNC_13(const char *VAR_5)
{
 char *VAR_6;
 PGresult *VAR_7;

 VAR_3 = FUNC_1(VAR_5);
 if (FUNC_6(VAR_3) == VAR_1)
  FUNC_7("could not connect to server: %s",
     FUNC_2(VAR_3));

 if (VAR_4)
  FUNC_9("connected to server");


 FUNC_10("SET statement_timeout = 0");
 FUNC_10("SET lock_timeout = 0");
 FUNC_10("SET idle_in_transaction_session_timeout = 0");

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 if (FUNC_5(VAR_7) != VAR_2)
  FUNC_7("could not clear search_path: %s",
     FUNC_4(VAR_7));
 FUNC_0(VAR_7);







 VAR_6 = FUNC_11("SELECT pg_is_in_recovery()");
 if (FUNC_12(VAR_6, "f") != 0)
  FUNC_7("source server must not be in recovery mode");
 FUNC_8(VAR_6);






 VAR_6 = FUNC_11("SHOW full_page_writes");
 if (FUNC_12(VAR_6, "on") != 0)
  FUNC_7("full_page_writes must be enabled in the source server");
 FUNC_8(VAR_6);
 FUNC_10("SET synchronous_commit = off");
}
