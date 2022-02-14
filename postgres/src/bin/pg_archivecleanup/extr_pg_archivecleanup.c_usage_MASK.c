
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
 FUNC_1(FUNC_0("%s removes older WAL files from PostgreSQL archives.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... ARCHIVELOCATION OLDESTKEPTWALFILE\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -d             generate debug output (verbose mode)\n"));
 FUNC_1(FUNC_0("  -n             dry run, show the names of the files that would be removed\n"));
 FUNC_1(FUNC_0("  -V, --version  output version information, then exit\n"));
 FUNC_1(FUNC_0("  -x EXT         clean up files if they have this extension\n"));
 FUNC_1(FUNC_0("  -?, --help     show this help, then exit\n"));
 FUNC_1(FUNC_0("\n"
    "For use as archive_cleanup_command in postgresql.conf:\n"
    "  archive_cleanup_command = 'pg_archivecleanup [OPTION]... ARCHIVELOCATION %%r'\n"
    "e.g.\n"
    "  archive_cleanup_command = 'pg_archivecleanup /mnt/server/archiverdir %%r'\n"));
 FUNC_1(FUNC_0("\n"
    "Or for use as a standalone archive cleaner:\n"
    "e.g.\n"
    "  pg_archivecleanup /mnt/server/archiverdir 000000010000000000000010.00000020.backup\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
