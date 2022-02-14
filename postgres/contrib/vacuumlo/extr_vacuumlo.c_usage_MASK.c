
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0)
{
 FUNC_0("%s removes unreferenced large objects from databases.\n\n", VAR_0);
 FUNC_0("Usage:\n  %s [OPTION]... DBNAME...\n\n", VAR_0);
 FUNC_0("Options:\n");
 FUNC_0("  -l, --limit=LIMIT         commit after removing each LIMIT large objects\n");
 FUNC_0("  -n, --dry-run             don't remove large objects, just show what would be done\n");
 FUNC_0("  -v, --verbose             write a lot of progress messages\n");
 FUNC_0("  -V, --version             output version information, then exit\n");
 FUNC_0("  -?, --help                show this help, then exit\n");
 FUNC_0("\nConnection options:\n");
 FUNC_0("  -h, --host=HOSTNAME       database server host or socket directory\n");
 FUNC_0("  -p, --port=PORT           database server port\n");
 FUNC_0("  -U, --username=USERNAME   user name to connect as\n");
 FUNC_0("  -w, --no-password         never prompt for password\n");
 FUNC_0("  -W, --password            force password prompt\n");
 FUNC_0("\n");
 FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n");
}
