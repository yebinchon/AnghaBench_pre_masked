
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s cleans and analyzes a PostgreSQL database.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [DBNAME]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -a, --all                       vacuum all databases\n"));
 FUNC_1(FUNC_0("  -d, --dbname=DBNAME             database to vacuum\n"));
 FUNC_1(FUNC_0("      --disable-page-skipping     disable all page-skipping behavior\n"));
 FUNC_1(FUNC_0("  -e, --echo                      show the commands being sent to the server\n"));
 FUNC_1(FUNC_0("  -f, --full                      do full vacuuming\n"));
 FUNC_1(FUNC_0("  -F, --freeze                    freeze row transaction information\n"));
 FUNC_1(FUNC_0("  -j, --jobs=NUM                  use this many concurrent connections to vacuum\n"));
 FUNC_1(FUNC_0("      --min-mxid-age=MXID_AGE     minimum multixact ID age of tables to vacuum\n"));
 FUNC_1(FUNC_0("      --min-xid-age=XID_AGE       minimum transaction ID age of tables to vacuum\n"));
 FUNC_1(FUNC_0("  -q, --quiet                     don't write any messages\n"));
 FUNC_1(FUNC_0("      --skip-locked               skip relations that cannot be immediately locked\n"));
 FUNC_1(FUNC_0("  -t, --table='TABLE[(COLUMNS)]'  vacuum specific table(s) only\n"));
 FUNC_1(FUNC_0("  -v, --verbose                   write a lot of output\n"));
 FUNC_1(FUNC_0("  -V, --version                   output version information, then exit\n"));
 FUNC_1(FUNC_0("  -z, --analyze                   update optimizer statistics\n"));
 FUNC_1(FUNC_0("  -Z, --analyze-only              only update optimizer statistics; no vacuum\n"));
 FUNC_1(FUNC_0("      --analyze-in-stages         only update optimizer statistics, in multiple\n"
    "                                  stages for faster results; no vacuum\n"));
 FUNC_1(FUNC_0("  -?, --help                      show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME       database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT           database server port\n"));
 FUNC_1(FUNC_0("  -U, --username=USERNAME   user name to connect as\n"));
 FUNC_1(FUNC_0("  -w, --no-password         never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password            force password prompt\n"));
 FUNC_1(FUNC_0("  --maintenance-db=DBNAME   alternate maintenance database\n"));
 FUNC_1(FUNC_0("\nRead the description of the SQL command VACUUM for details.\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
