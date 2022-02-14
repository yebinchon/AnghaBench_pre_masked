
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 FUNC_1(FUNC_0("%s issues a connection check to a PostgreSQL database.\n\n"), VAR_1);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n"), VAR_1);

 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=DBNAME      database name\n"));
 FUNC_1(FUNC_0("  -q, --quiet              run quietly\n"));
 FUNC_1(FUNC_0("  -V, --version            output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help               show this help, then exit\n"));

 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME      database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT          database server port\n"));
 FUNC_1(FUNC_0("  -t, --timeout=SECS       seconds to wait when attempting connection, 0 disables (default: %s)\n"), VAR_0);
 FUNC_1(FUNC_0("  -U, --username=USERNAME  user name to connect as\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
