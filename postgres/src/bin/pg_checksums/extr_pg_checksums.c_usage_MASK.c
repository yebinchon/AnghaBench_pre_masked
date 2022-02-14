
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(FUNC_0("%s enables, disables, or verifies data checksums in a PostgreSQL database cluster.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [DATADIR]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0(" [-D, --pgdata=]DATADIR    data directory\n"));
 FUNC_1(FUNC_0("  -c, --check              check data checksums (default)\n"));
 FUNC_1(FUNC_0("  -d, --disable            disable data checksums\n"));
 FUNC_1(FUNC_0("  -e, --enable             enable data checksums\n"));
 FUNC_1(FUNC_0("  -f, --filenode=FILENODE  check only relation with specified filenode\n"));
 FUNC_1(FUNC_0("  -N, --no-sync            do not wait for changes to be written safely to disk\n"));
 FUNC_1(FUNC_0("  -P, --progress           show progress information\n"));
 FUNC_1(FUNC_0("  -v, --verbose            output verbose messages\n"));
 FUNC_1(FUNC_0("  -V, --version            output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help               show this help, then exit\n"));
 FUNC_1(FUNC_0("\nIf no data directory (DATADIR) is specified, "
    "the environment variable PGDATA\nis used.\n\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
