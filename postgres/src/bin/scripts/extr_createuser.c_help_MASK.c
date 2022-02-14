
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s creates a new PostgreSQL role.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [ROLENAME]\n"), VAR_0);
 FUNC_1(FUNC_0("\nOptions:\n"));
 FUNC_1(FUNC_0("  -c, --connection-limit=N  connection limit for role (default: no limit)\n"));
 FUNC_1(FUNC_0("  -d, --createdb            role can create new databases\n"));
 FUNC_1(FUNC_0("  -D, --no-createdb         role cannot create databases (default)\n"));
 FUNC_1(FUNC_0("  -e, --echo                show the commands being sent to the server\n"));
 FUNC_1(FUNC_0("  -g, --role=ROLE           new role will be a member of this role\n"));
 FUNC_1(FUNC_0("  -i, --inherit             role inherits privileges of roles it is a\n"
    "                            member of (default)\n"));
 FUNC_1(FUNC_0("  -I, --no-inherit          role does not inherit privileges\n"));
 FUNC_1(FUNC_0("  -l, --login               role can login (default)\n"));
 FUNC_1(FUNC_0("  -L, --no-login            role cannot login\n"));
 FUNC_1(FUNC_0("  -P, --pwprompt            assign a password to new role\n"));
 FUNC_1(FUNC_0("  -r, --createrole          role can create new roles\n"));
 FUNC_1(FUNC_0("  -R, --no-createrole       role cannot create roles (default)\n"));
 FUNC_1(FUNC_0("  -s, --superuser           role will be superuser\n"));
 FUNC_1(FUNC_0("  -S, --no-superuser        role will not be superuser (default)\n"));
 FUNC_1(FUNC_0("  -V, --version             output version information, then exit\n"));
 FUNC_1(FUNC_0("  --interactive             prompt for missing role name and attributes rather\n"
    "                            than using defaults\n"));
 FUNC_1(FUNC_0("  --replication             role can initiate replication\n"));
 FUNC_1(FUNC_0("  --no-replication          role cannot initiate replication\n"));
 FUNC_1(FUNC_0("  -?, --help                show this help, then exit\n"));
 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME       database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT           database server port\n"));
 FUNC_1(FUNC_0("  -U, --username=USERNAME   user name to connect as (not the one to create)\n"));
 FUNC_1(FUNC_0("  -w, --no-password         never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password            force password prompt\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
