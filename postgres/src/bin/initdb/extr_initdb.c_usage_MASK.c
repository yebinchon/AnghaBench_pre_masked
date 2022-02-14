
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s initializes a PostgreSQL database cluster.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [DATADIR]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -A, --auth=METHOD         default authentication method for local connections\n"));
 FUNC_1(FUNC_0("      --auth-host=METHOD    default authentication method for local TCP/IP connections\n"));
 FUNC_1(FUNC_0("      --auth-local=METHOD   default authentication method for local-socket connections\n"));
 FUNC_1(FUNC_0(" [-D, --pgdata=]DATADIR     location for this database cluster\n"));
 FUNC_1(FUNC_0("  -E, --encoding=ENCODING   set default encoding for new databases\n"));
 FUNC_1(FUNC_0("  -g, --allow-group-access  allow group read/execute on data directory\n"));
 FUNC_1(FUNC_0("      --locale=LOCALE       set default locale for new databases\n"));
 FUNC_1(FUNC_0("      --lc-collate=, --lc-ctype=, --lc-messages=LOCALE\n"
    "      --lc-monetary=, --lc-numeric=, --lc-time=LOCALE\n"
    "                            set default locale in the respective category for\n"
    "                            new databases (default taken from environment)\n"));
 FUNC_1(FUNC_0("      --no-locale           equivalent to --locale=C\n"));
 FUNC_1(FUNC_0("      --pwfile=FILE         read password for the new superuser from file\n"));
 FUNC_1(FUNC_0("  -T, --text-search-config=CFG\n"
    "                            default text search configuration\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME       database superuser name\n"));
 FUNC_1(FUNC_0("  -W, --pwprompt            prompt for a password for the new superuser\n"));
 FUNC_1(FUNC_0("  -X, --waldir=WALDIR       location for the write-ahead log directory\n"));
 FUNC_1(FUNC_0("      --wal-segsize=SIZE    size of WAL segments, in megabytes\n"));
 FUNC_1(FUNC_0("\nLess commonly used options:\n"));
 FUNC_1(FUNC_0("  -d, --debug               generate lots of debugging output\n"));
 FUNC_1(FUNC_0("  -k, --data-checksums      use data page checksums\n"));
 FUNC_1(FUNC_0("  -L DIRECTORY              where to find the input files\n"));
 FUNC_1(FUNC_0("  -n, --no-clean            do not clean up after errors\n"));
 FUNC_1(FUNC_0("  -N, --no-sync             do not wait for changes to be written safely to disk\n"));
 FUNC_1(FUNC_0("  -s, --show                show internal settings\n"));
 FUNC_1(FUNC_0("  -S, --sync-only           only sync data directory\n"));
 FUNC_1(FUNC_0("\nOther options:\n"));
 FUNC_1(FUNC_0("  -V, --version             output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help                show this help, then exit\n"));
 FUNC_1(FUNC_0("\nIf the data directory is not specified, the environment variable PGDATA\n"
    "is used.\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
