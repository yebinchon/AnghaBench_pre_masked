
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(const char *VAR_0){
  FUNC_1("Usage: %s [OPTIONS] DATABASE LOG\n\n", VAR_0);
  FUNC_1(
    "DATABASE is an SQLite database against which various statements\n"
    "have been run.  The SQL text is stored in LOG.  LOG is an SQLite\n"
    "database with this schema:\n"
    "\n"
    "    CREATE TABLE sqllog(sql TEXT);\n"
    "\n"
    "This utility program analyzes statements contained in LOG and prints\n"
    "a report showing how many times each index in DATABASE is used by the\n"
    "statements in LOG.\n"
    "\n"
    "DATABASE only needs to contain the schema used by the statements in\n"
    "LOG. The content can be removed from DATABASE.\n"
  );
  FUNC_1(
    "\nOPTIONS:\n\n"
    "    --progress N   Show a progress message after every N input rows\n"
    "    -q             Omit error message when parsing log entries\n"
    "    --using NAME   Print SQL statements that use index NAME\n"
  );
  FUNC_1("\nAnalysis will be done by SQLite version %s dated %.20s\n"
         "checkin number %.40s. Different versions\n"
         "of SQLite might use different indexes.\n",
         FUNC_2(), FUNC_3(), FUNC_3()+21);
  FUNC_0(1);
}
