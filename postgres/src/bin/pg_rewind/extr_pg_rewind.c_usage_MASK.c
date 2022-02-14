
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s resynchronizes a PostgreSQL cluster with another copy of the cluster.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n  %s [OPTION]...\n\n"), VAR_0);
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  -D, --target-pgdata=DIRECTORY  existing data directory to modify\n"));
 FUNC_1(FUNC_0("      --source-pgdata=DIRECTORY  source data directory to synchronize with\n"));
 FUNC_1(FUNC_0("      --source-server=CONNSTR    source server to synchronize with\n"));
 FUNC_1(FUNC_0("  -R, --write-recovery-conf      write configuration for replication\n"
    "                                 (requires --source-server)\n"));
 FUNC_1(FUNC_0("  -n, --dry-run                  stop before modifying anything\n"));
 FUNC_1(FUNC_0("  -N, --no-sync                  do not wait for changes to be written\n"
    "                                 safely to disk\n"));
 FUNC_1(FUNC_0("  -P, --progress                 write progress messages\n"));
 FUNC_1(FUNC_0("      --no-ensure-shutdown       do not automatically fix unclean shutdown\n"));
 FUNC_1(FUNC_0("      --debug                    write a lot of debug messages\n"));
 FUNC_1(FUNC_0("  -V, --version                  output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help                     show this help, then exit\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
