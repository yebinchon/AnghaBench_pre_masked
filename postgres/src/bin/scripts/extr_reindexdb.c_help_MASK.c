
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s reindexes a PostgreSQL database.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [DBNAME]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -a, --all                 reindex all databases\n"));
 FUNC_1(FUNC_0("      --concurrently        reindex concurrently\n"));
 FUNC_1(FUNC_0("  -d, --dbname=DBNAME       database to reindex\n"));
 FUNC_1(FUNC_0("  -e, --echo                show the commands being sent to the server\n"));
 FUNC_1(FUNC_0("  -i, --index=INDEX         recreate specific index(es) only\n"));
 FUNC_1(FUNC_0("  -j, --jobs=NUM            use this many concurrent connections to reindex\n"));
 FUNC_1(FUNC_0("  -q, --quiet               don't write any messages\n"));
 FUNC_1(FUNC_0("  -s, --system              reindex system catalogs\n"));
 FUNC_1(FUNC_0("  -S, --schema=SCHEMA       reindex specific schema(s) only\n"));
 FUNC_1(FUNC_0("  -t, --table=TABLE         reindex specific table(s) only\n"));
 FUNC_1(FUNC_0("  -v, --verbose             write a lot of output\n"));
 FUNC_1(FUNC_0("  -V, --version             output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help                show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME       database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT           database server port\n"));
 FUNC_1(FUNC_0("  -U, --username=USERNAME   user name to connect as\n"));
 FUNC_1(FUNC_0("  -w, --no-password         never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password            force password prompt\n"));
 FUNC_1(FUNC_0("  --maintenance-db=DBNAME   alternate maintenance database\n"));
 FUNC_1(FUNC_0("\nRead the description of the SQL command REINDEX for details.\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
