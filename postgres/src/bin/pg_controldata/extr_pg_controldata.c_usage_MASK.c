
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s displays control information of a PostgreSQL database cluster.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION] [DATADIR]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0(" [-D, --pgdata=]DATADIR  data directory\n"));
 FUNC_1(FUNC_0("  -V, --version          output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help             show this help, then exit\n"));
 FUNC_1(FUNC_0("\nIf no data directory (DATADIR) is specified, "
    "the environment variable PGDATA\nis used.\n\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
