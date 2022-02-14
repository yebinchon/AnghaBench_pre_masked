
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* zArgv0; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void){
  FUNC_0("Usage: %s [options] SOURCE-DB ?ARGS...?\n", VAR_0.zArgv0);
  FUNC_0(
"Read databases and SQL scripts from SOURCE-DB and execute each script against\n"
"each database, checking for crashes and memory leaks.\n"
"Options:\n"
"  --cell-size-check    Set the PRAGMA cell_size_check=ON\n"
"  --dbid N             Use only the database where dbid=N\n"
"  --export-db DIR      Write databases to files(s) in DIR. Works with --dbid\n"
"  --export-sql DIR     Write SQL to file(s) in DIR. Also works with --sqlid\n"
"  --help               Show this help text\n"
"  --info               Show information about SOURCE-DB w/o running tests\n"
"  --limit-mem N        Limit memory used by test SQLite instance to N bytes\n"
"  --limit-vdbe         Panic if any test runs for more than 100,000 cycles\n"
"  --load-sql ARGS...   Load SQL scripts fron files into SOURCE-DB\n"
"  --load-db ARGS...    Load template databases from files into SOURCE_DB\n"
"  --load-dbsql ARGS..  Load dbsqlfuzz outputs into the xsql table\n"
"  -m TEXT              Add a description to the database\n"
"  --native-vfs         Use the native VFS for initially empty database files\n"
"  --native-malloc      Turn off MEMSYS3/5 and Lookaside\n"
"  --oss-fuzz           Enable OSS-FUZZ testing\n"
"  --prng-seed N        Seed value for the PRGN inside of SQLite\n"
"  -q|--quiet           Reduced output\n"
"  --rebuild            Rebuild and vacuum the database file\n"
"  --result-trace       Show the results of each SQL command\n"
"  --sqlid N            Use only SQL where sqlid=N\n"
"  --timeout N          Abort if any single test needs more than N seconds\n"
"  -v|--verbose         Increased output.  Repeat for more output.\n"
  );
}
