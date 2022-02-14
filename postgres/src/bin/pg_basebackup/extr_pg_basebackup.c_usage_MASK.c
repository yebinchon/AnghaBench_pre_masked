
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
 FUNC_1(FUNC_0("%s takes a base backup of a running PostgreSQL server.\n\n"),
     VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions controlling the output:\n"));
 FUNC_1(FUNC_0("  -D, --pgdata=DIRECTORY receive base backup into directory\n"));
 FUNC_1(FUNC_0("  -F, --format=p|t       output format (plain (default), tar)\n"));
 FUNC_1(FUNC_0("  -r, --max-rate=RATE    maximum transfer rate to transfer data directory\n"
    "                         (in kB/s, or use suffix \"k\" or \"M\")\n"));
 FUNC_1(FUNC_0("  -R, --write-recovery-conf\n"
    "                         write configuration for replication\n"));
 FUNC_1(FUNC_0("  -T, --tablespace-mapping=OLDDIR=NEWDIR\n"
    "                         relocate tablespace in OLDDIR to NEWDIR\n"));
 FUNC_1(FUNC_0("      --waldir=WALDIR    location for the write-ahead log directory\n"));
 FUNC_1(FUNC_0("  -X, --wal-method=none|fetch|stream\n"
    "                         include required WAL files with specified method\n"));
 FUNC_1(FUNC_0("  -z, --gzip             compress tar output\n"));
 FUNC_1(FUNC_0("  -Z, --compress=0-9     compress tar output with given compression level\n"));
 FUNC_1(FUNC_0("\nGeneral options:\n"));
 FUNC_1(FUNC_0("  -c, --checkpoint=fast|spread\n"
    "                         set fast or spread checkpointing\n"));
 FUNC_1(FUNC_0("  -C, --create-slot      create replication slot\n"));
 FUNC_1(FUNC_0("  -l, --label=LABEL      set backup label\n"));
 FUNC_1(FUNC_0("  -n, --no-clean         do not clean up after errors\n"));
 FUNC_1(FUNC_0("  -N, --no-sync          do not wait for changes to be written safely to disk\n"));
 FUNC_1(FUNC_0("  -P, --progress         show progress information\n"));
 FUNC_1(FUNC_0("  -S, --slot=SLOTNAME    replication slot to use\n"));
 FUNC_1(FUNC_0("  -v, --verbose          output verbose messages\n"));
 FUNC_1(FUNC_0("  -V, --version          output version information, then exit\n"));
 FUNC_1(FUNC_0("      --no-slot          prevent creation of temporary replication slot\n"));
 FUNC_1(FUNC_0("      --no-verify-checksums\n"
    "                         do not verify checksums\n"));
 FUNC_1(FUNC_0("  -?, --help             show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=CONNSTR   connection string\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME    database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT        database server port number\n"));
 FUNC_1(FUNC_0("  -s, --status-interval=INTERVAL\n"
    "                         time between status packets sent to server (in seconds)\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME    connect as specified database user\n"));
 FUNC_1(FUNC_0("  -w, --no-password      never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password         force password prompt (should happen automatically)\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
