
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
 FUNC_1(FUNC_0("%s resets the PostgreSQL write-ahead log.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n  %s [OPTION]... DATADIR\n\n"), VAR_0);
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  -c, --commit-timestamp-ids=XID,XID\n"
    "                                 set oldest and newest transactions bearing\n"
    "                                 commit timestamp (zero means no change)\n"));
 FUNC_1(FUNC_0(" [-D, --pgdata=]DATADIR          data directory\n"));
 FUNC_1(FUNC_0("  -e, --epoch=XIDEPOCH           set next transaction ID epoch\n"));
 FUNC_1(FUNC_0("  -f, --force                    force update to be done\n"));
 FUNC_1(FUNC_0("  -l, --next-wal-file=WALFILE    set minimum starting location for new WAL\n"));
 FUNC_1(FUNC_0("  -m, --multixact-ids=MXID,MXID  set next and oldest multitransaction ID\n"));
 FUNC_1(FUNC_0("  -n, --dry-run                  no update, just show what would be done\n"));
 FUNC_1(FUNC_0("  -o, --next-oid=OID             set next OID\n"));
 FUNC_1(FUNC_0("  -O, --multixact-offset=OFFSET  set next multitransaction offset\n"));
 FUNC_1(FUNC_0("  -V, --version                  output version information, then exit\n"));
 FUNC_1(FUNC_0("  -x, --next-transaction-id=XID  set next transaction ID\n"));
 FUNC_1(FUNC_0("      --wal-segsize=SIZE         size of WAL segments, in megabytes\n"));
 FUNC_1(FUNC_0("  -?, --help                     show this help, then exit\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
