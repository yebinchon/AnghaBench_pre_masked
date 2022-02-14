
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
 FUNC_1(FUNC_0("%s is a utility to initialize, start, stop, or control a PostgreSQL server.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s init[db]   [-D DATADIR] [-s] [-o OPTIONS]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s start      [-D DATADIR] [-l FILENAME] [-W] [-t SECS] [-s]\n"
    "                    [-o OPTIONS] [-p PATH] [-c]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s stop       [-D DATADIR] [-m SHUTDOWN-MODE] [-W] [-t SECS] [-s]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s restart    [-D DATADIR] [-m SHUTDOWN-MODE] [-W] [-t SECS] [-s]\n"
    "                    [-o OPTIONS] [-c]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s reload     [-D DATADIR] [-s]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s status     [-D DATADIR]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s promote    [-D DATADIR] [-W] [-t SECS] [-s]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s logrotate  [-D DATADIR] [-s]\n"), VAR_0);
 FUNC_1(FUNC_0("  %s kill       SIGNALNAME PID\n"), VAR_0);






 FUNC_1(FUNC_0("\nCommon options:\n"));
 FUNC_1(FUNC_0("  -D, --pgdata=DATADIR   location of the database storage area\n"));



 FUNC_1(FUNC_0("  -s, --silent           only print errors, no informational messages\n"));
 FUNC_1(FUNC_0("  -t, --timeout=SECS     seconds to wait when using -w option\n"));
 FUNC_1(FUNC_0("  -V, --version          output version information, then exit\n"));
 FUNC_1(FUNC_0("  -w, --wait             wait until operation completes (default)\n"));
 FUNC_1(FUNC_0("  -W, --no-wait          do not wait until operation completes\n"));
 FUNC_1(FUNC_0("  -?, --help             show this help, then exit\n"));
 FUNC_1(FUNC_0("If the -D option is omitted, the environment variable PGDATA is used.\n"));

 FUNC_1(FUNC_0("\nOptions for start or restart:\n"));



 FUNC_1(FUNC_0("  -c, --core-files       not applicable on this platform\n"));

 FUNC_1(FUNC_0("  -l, --log=FILENAME     write (or append) server log to FILENAME\n"));
 FUNC_1(FUNC_0("  -o, --options=OPTIONS  command line options to pass to postgres\n"
    "                         (PostgreSQL server executable) or initdb\n"));
 FUNC_1(FUNC_0("  -p PATH-TO-POSTGRES    normally not necessary\n"));
 FUNC_1(FUNC_0("\nOptions for stop or restart:\n"));
 FUNC_1(FUNC_0("  -m, --mode=MODE        MODE can be \"smart\", \"fast\", or \"immediate\"\n"));

 FUNC_1(FUNC_0("\nShutdown modes are:\n"));
 FUNC_1(FUNC_0("  smart       quit after all clients have disconnected\n"));
 FUNC_1(FUNC_0("  fast        quit directly, with proper shutdown (default)\n"));
 FUNC_1(FUNC_0("  immediate   quit without complete shutdown; will lead to recovery on restart\n"));

 FUNC_1(FUNC_0("\nAllowed signal names for kill:\n"));
 FUNC_1("  ABRT HUP INT KILL QUIT TERM USR1 USR2\n");
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
