
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int port; } ;
struct TYPE_5__ {int port; } ;
struct TYPE_4__ {char* user; } ;


 char* FUNC_0 (char*) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(FUNC_0("pg_upgrade upgrades a PostgreSQL cluster to a different major version.\n\n"));
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  pg_upgrade [OPTION]...\n\n"));
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  -b, --old-bindir=BINDIR       old cluster executable directory\n"));
 FUNC_1(FUNC_0("  -B, --new-bindir=BINDIR       new cluster executable directory (default\n"
    "                                same directory as pg_upgrade)\n"));
 FUNC_1(FUNC_0("  -c, --check                   check clusters only, don't change any data\n"));
 FUNC_1(FUNC_0("  -d, --old-datadir=DATADIR     old cluster data directory\n"));
 FUNC_1(FUNC_0("  -D, --new-datadir=DATADIR     new cluster data directory\n"));
 FUNC_1(FUNC_0("  -j, --jobs                    number of simultaneous processes or threads to use\n"));
 FUNC_1(FUNC_0("  -k, --link                    link instead of copying files to new cluster\n"));
 FUNC_1(FUNC_0("  -o, --old-options=OPTIONS     old cluster options to pass to the server\n"));
 FUNC_1(FUNC_0("  -O, --new-options=OPTIONS     new cluster options to pass to the server\n"));
 FUNC_1(FUNC_0("  -p, --old-port=PORT           old cluster port number (default %d)\n"), VAR_1.port);
 FUNC_1(FUNC_0("  -P, --new-port=PORT           new cluster port number (default %d)\n"), VAR_0.port);
 FUNC_1(FUNC_0("  -r, --retain                  retain SQL and log files after success\n"));
 FUNC_1(FUNC_0("  -s, --socketdir=DIR           socket directory to use (default current dir.)\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME           cluster superuser (default \"%s\")\n"), VAR_2.user);
 FUNC_1(FUNC_0("  -v, --verbose                 enable verbose internal logging\n"));
 FUNC_1(FUNC_0("  -V, --version                 display version information, then exit\n"));
 FUNC_1(FUNC_0("  --clone                       clone instead of copying files to new cluster\n"));
 FUNC_1(FUNC_0("  -?, --help                    show this help, then exit\n"));
 FUNC_1(FUNC_0("\n"
    "Before running pg_upgrade you must:\n"
    "  create a new database cluster (using the new version of initdb)\n"
    "  shutdown the postmaster servicing the old cluster\n"
    "  shutdown the postmaster servicing the new cluster\n"));
 FUNC_1(FUNC_0("\n"
    "When you run pg_upgrade, you must provide the following information:\n"
    "  the data directory for the old cluster  (-d DATADIR)\n"
    "  the data directory for the new cluster  (-D DATADIR)\n"
    "  the \"bin\" directory for the old version (-b BINDIR)\n"
    "  the \"bin\" directory for the new version (-B BINDIR)\n"));
 FUNC_1(FUNC_0("\n"
    "For example:\n"
    "  pg_upgrade -d oldCluster/data -D newCluster/data -b oldCluster/bin -B newCluster/bin\n"
    "or\n"));

 FUNC_1(FUNC_0("  $ export PGDATAOLD=oldCluster/data\n"
    "  $ export PGDATANEW=newCluster/data\n"
    "  $ export PGBINOLD=oldCluster/bin\n"
    "  $ export PGBINNEW=newCluster/bin\n"
    "  $ pg_upgrade\n"));







 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
