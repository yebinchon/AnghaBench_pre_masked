
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0("%s allows PostgreSQL warm standby servers to be configured.\n\n", VAR_0);
 FUNC_0("Usage:\n");
 FUNC_0("  %s [OPTION]... ARCHIVELOCATION NEXTWALFILE XLOGFILEPATH [RESTARTWALFILE]\n", VAR_0);
 FUNC_0("\nOptions:\n");
 FUNC_0("  -c                 copy file from archive (default)\n");
 FUNC_0("  -d                 generate lots of debugging output (testing only)\n");
 FUNC_0("  -k NUMFILESTOKEEP  if RESTARTWALFILE is not used, remove files prior to limit\n"
     "                     (0 keeps all)\n");
 FUNC_0("  -l                 does nothing; use of link is now deprecated\n");
 FUNC_0("  -r MAXRETRIES      max number of times to retry, with progressive wait\n"
     "                     (default=3)\n");
 FUNC_0("  -s SLEEPTIME       seconds to wait between file checks (min=1, max=60,\n"
     "                     default=5)\n");
 FUNC_0("  -t TRIGGERFILE     trigger file to initiate failover (no default)\n");
 FUNC_0("  -V, --version      output version information, then exit\n");
 FUNC_0("  -w MAXWAITTIME     max seconds to wait for a file (0=no limit) (default=0)\n");
 FUNC_0("  -?, --help         show this help, then exit\n");
 FUNC_0("\n"
     "Main intended use as restore_command in postgresql.conf:\n"
     "  restore_command = 'pg_standby [OPTION]... ARCHIVELOCATION %%f %%p %%r'\n"
     "e.g.\n"
     "  restore_command = 'pg_standby /mnt/server/archiverdir %%f %%p %%r'\n");
 FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n");
}
