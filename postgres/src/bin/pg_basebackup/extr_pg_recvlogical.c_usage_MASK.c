
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*,...) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(FUNC_0("%s controls PostgreSQL logical decoding streams.\n\n"),
     VAR_2);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n"), VAR_2);
 FUNC_1(FUNC_0("\nAction to be performed:\n"));
 FUNC_1(FUNC_0("      --create-slot      create a new replication slot (for the slot's name see --slot)\n"));
 FUNC_1(FUNC_0("      --drop-slot        drop the replication slot (for the slot's name see --slot)\n"));
 FUNC_1(FUNC_0("      --start            start streaming in a replication slot (for the slot's name see --slot)\n"));
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -E, --endpos=LSN       exit after receiving the specified LSN\n"));
 FUNC_1(FUNC_0("  -f, --file=FILE        receive log into this file, - for stdout\n"));
 FUNC_1(FUNC_0("  -F  --fsync-interval=SECS\n"
    "                         time between fsyncs to the output file (default: %d)\n"), (VAR_0 / 1000));
 FUNC_1(FUNC_0("      --if-not-exists    do not error if slot already exists when creating a slot\n"));
 FUNC_1(FUNC_0("  -I, --startpos=LSN     where in an existing slot should the streaming start\n"));
 FUNC_1(FUNC_0("  -n, --no-loop          do not loop on connection lost\n"));
 FUNC_1(FUNC_0("  -o, --option=NAME[=VALUE]\n"
    "                         pass option NAME with optional value VALUE to the\n"
    "                         output plugin\n"));
 FUNC_1(FUNC_0("  -P, --plugin=PLUGIN    use output plugin PLUGIN (default: %s)\n"), VAR_1);
 FUNC_1(FUNC_0("  -s, --status-interval=SECS\n"
    "                         time between status packets sent to server (default: %d)\n"), (VAR_3 / 1000));
 FUNC_1(FUNC_0("  -S, --slot=SLOTNAME    name of the logical replication slot\n"));
 FUNC_1(FUNC_0("  -v, --verbose          output verbose messages\n"));
 FUNC_1(FUNC_0("  -V, --version          output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help             show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=DBNAME    database to connect to\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME    database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT        database server port number\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME    connect as specified database user\n"));
 FUNC_1(FUNC_0("  -w, --no-password      never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password         force password prompt (should happen automatically)\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
