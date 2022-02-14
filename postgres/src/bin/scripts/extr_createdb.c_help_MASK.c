
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s creates a PostgreSQL database.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [DBNAME] [DESCRIPTION]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -D, --tablespace=TABLESPACE  default tablespace for the database\n"));
 FUNC_1(FUNC_0("  -e, --echo                   show the commands being sent to the server\n"));
 FUNC_1(FUNC_0("  -E, --encoding=ENCODING      encoding for the database\n"));
 FUNC_1(FUNC_0("  -l, --locale=LOCALE          locale settings for the database\n"));
 FUNC_1(FUNC_0("      --lc-collate=LOCALE      LC_COLLATE setting for the database\n"));
 FUNC_1(FUNC_0("      --lc-ctype=LOCALE        LC_CTYPE setting for the database\n"));
 FUNC_1(FUNC_0("  -O, --owner=OWNER            database user to own the new database\n"));
 FUNC_1(FUNC_0("  -T, --template=TEMPLATE      template database to copy\n"));
 FUNC_1(FUNC_0("  -V, --version                output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help                   show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME          database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT              database server port\n"));
 FUNC_1(FUNC_0("  -U, --username=USERNAME      user name to connect as\n"));
 FUNC_1(FUNC_0("  -w, --no-password            never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password               force password prompt\n"));
 FUNC_1(FUNC_0("  --maintenance-db=DBNAME      alternate maintenance database\n"));
 FUNC_1(FUNC_0("\nBy default, a database with the same name as the current user is created.\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
