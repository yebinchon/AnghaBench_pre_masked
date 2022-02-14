
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(FUNC_0("%s receives PostgreSQL streaming write-ahead logs.\n\n"),
     VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -D, --directory=DIR    receive write-ahead log files into this directory\n"));
 FUNC_1(FUNC_0("  -E, --endpos=LSN       exit after receiving the specified LSN\n"));
 FUNC_1(FUNC_0("      --if-not-exists    do not error if slot already exists when creating a slot\n"));
 FUNC_1(FUNC_0("  -n, --no-loop          do not loop on connection lost\n"));
 FUNC_1(FUNC_0("      --no-sync          do not wait for changes to be written safely to disk\n"));
 FUNC_1(FUNC_0("  -s, --status-interval=SECS\n"
    "                         time between status packets sent to server (default: %d)\n"), (VAR_1 / 1000));
 FUNC_1(FUNC_0("  -S, --slot=SLOTNAME    replication slot to use\n"));
 FUNC_1(FUNC_0("      --synchronous      flush write-ahead log immediately after writing\n"));
 FUNC_1(FUNC_0("  -v, --verbose          output verbose messages\n"));
 FUNC_1(FUNC_0("  -V, --version          output version information, then exit\n"));
 FUNC_1(FUNC_0("  -Z, --compress=0-9     compress logs with given compression level\n"));
 FUNC_1(FUNC_0("  -?, --help             show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=CONNSTR   connection string\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME    database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT        database server port number\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME    connect as specified database user\n"));
 FUNC_1(FUNC_0("  -w, --no-password      never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password         force password prompt (should happen automatically)\n"));
 FUNC_1(FUNC_0("\nOptional actions:\n"));
 FUNC_1(FUNC_0("      --create-slot      create a new replication slot (for the slot's name see --slot)\n"));
 FUNC_1(FUNC_0("      --drop-slot        drop the replication slot (for the slot's name see --slot)\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
