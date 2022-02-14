
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s is the PostgreSQL server.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n  %s [OPTION]...\n\n"), VAR_0);
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  -B NBUFFERS        number of shared buffers\n"));
 FUNC_1(FUNC_0("  -c NAME=VALUE      set run-time parameter\n"));
 FUNC_1(FUNC_0("  -C NAME            print value of run-time parameter, then exit\n"));
 FUNC_1(FUNC_0("  -d 1-5             debugging level\n"));
 FUNC_1(FUNC_0("  -D DATADIR         database directory\n"));
 FUNC_1(FUNC_0("  -e                 use European date input format (DMY)\n"));
 FUNC_1(FUNC_0("  -F                 turn fsync off\n"));
 FUNC_1(FUNC_0("  -h HOSTNAME        host name or IP address to listen on\n"));
 FUNC_1(FUNC_0("  -i                 enable TCP/IP connections\n"));
 FUNC_1(FUNC_0("  -k DIRECTORY       Unix-domain socket location\n"));



 FUNC_1(FUNC_0("  -N MAX-CONNECT     maximum number of allowed connections\n"));
 FUNC_1(FUNC_0("  -o OPTIONS         pass \"OPTIONS\" to each server process (obsolete)\n"));
 FUNC_1(FUNC_0("  -p PORT            port number to listen on\n"));
 FUNC_1(FUNC_0("  -s                 show statistics after each query\n"));
 FUNC_1(FUNC_0("  -S WORK-MEM        set amount of memory for sorts (in kB)\n"));
 FUNC_1(FUNC_0("  -V, --version      output version information, then exit\n"));
 FUNC_1(FUNC_0("  --NAME=VALUE       set run-time parameter\n"));
 FUNC_1(FUNC_0("  --describe-config  describe configuration parameters, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help         show this help, then exit\n"));

 FUNC_1(FUNC_0("\nDeveloper options:\n"));
 FUNC_1(FUNC_0("  -f s|i|n|m|h       forbid use of some plan types\n"));
 FUNC_1(FUNC_0("  -n                 do not reinitialize shared memory after abnormal exit\n"));
 FUNC_1(FUNC_0("  -O                 allow system table structure changes\n"));
 FUNC_1(FUNC_0("  -P                 disable system indexes\n"));
 FUNC_1(FUNC_0("  -t pa|pl|ex        show timings after each query\n"));
 FUNC_1(FUNC_0("  -T                 send SIGSTOP to all backend processes if one dies\n"));
 FUNC_1(FUNC_0("  -W NUM             wait NUM seconds to allow attach from a debugger\n"));

 FUNC_1(FUNC_0("\nOptions for single-user mode:\n"));
 FUNC_1(FUNC_0("  --single           selects single-user mode (must be first argument)\n"));
 FUNC_1(FUNC_0("  DBNAME             database name (defaults to user name)\n"));
 FUNC_1(FUNC_0("  -d 0-5             override debugging level\n"));
 FUNC_1(FUNC_0("  -E                 echo statement before execution\n"));
 FUNC_1(FUNC_0("  -j                 do not use newline as interactive query delimiter\n"));
 FUNC_1(FUNC_0("  -r FILENAME        send stdout and stderr to given file\n"));

 FUNC_1(FUNC_0("\nOptions for bootstrapping mode:\n"));
 FUNC_1(FUNC_0("  --boot             selects bootstrapping mode (must be first argument)\n"));
 FUNC_1(FUNC_0("  DBNAME             database name (mandatory argument in bootstrapping mode)\n"));
 FUNC_1(FUNC_0("  -r FILENAME        send stdout and stderr to given file\n"));
 FUNC_1(FUNC_0("  -x NUM             internal use\n"));

 FUNC_1(FUNC_0("\nPlease read the documentation for the complete list of run-time\n"
    "configuration settings and how to set them on the command line or in\n"
    "the configuration file.\n\n"
    "Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
