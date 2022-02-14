
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s restores a PostgreSQL database from an archive created by pg_dump.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]... [FILE]\n"), VAR_0);

 FUNC_1(FUNC_0("\nGeneral options:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=NAME        connect to database name\n"));
 FUNC_1(FUNC_0("  -f, --file=FILENAME      output file name (- for stdout)\n"));
 FUNC_1(FUNC_0("  -F, --format=c|d|t       backup file format (should be automatic)\n"));
 FUNC_1(FUNC_0("  -l, --list               print summarized TOC of the archive\n"));
 FUNC_1(FUNC_0("  -v, --verbose            verbose mode\n"));
 FUNC_1(FUNC_0("  -V, --version            output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help               show this help, then exit\n"));

 FUNC_1(FUNC_0("\nOptions controlling the restore:\n"));
 FUNC_1(FUNC_0("  -a, --data-only              restore only the data, no schema\n"));
 FUNC_1(FUNC_0("  -c, --clean                  clean (drop) database objects before recreating\n"));
 FUNC_1(FUNC_0("  -C, --create                 create the target database\n"));
 FUNC_1(FUNC_0("  -e, --exit-on-error          exit on error, default is to continue\n"));
 FUNC_1(FUNC_0("  -I, --index=NAME             restore named index\n"));
 FUNC_1(FUNC_0("  -j, --jobs=NUM               use this many parallel jobs to restore\n"));
 FUNC_1(FUNC_0("  -L, --use-list=FILENAME      use table of contents from this file for\n"
    "                               selecting/ordering output\n"));
 FUNC_1(FUNC_0("  -n, --schema=NAME            restore only objects in this schema\n"));
 FUNC_1(FUNC_0("  -N, --exclude-schema=NAME    do not restore objects in this schema\n"));
 FUNC_1(FUNC_0("  -O, --no-owner               skip restoration of object ownership\n"));
 FUNC_1(FUNC_0("  -P, --function=NAME(args)    restore named function\n"));
 FUNC_1(FUNC_0("  -s, --schema-only            restore only the schema, no data\n"));
 FUNC_1(FUNC_0("  -S, --superuser=NAME         superuser user name to use for disabling triggers\n"));
 FUNC_1(FUNC_0("  -t, --table=NAME             restore named relation (table, view, etc.)\n"));
 FUNC_1(FUNC_0("  -T, --trigger=NAME           restore named trigger\n"));
 FUNC_1(FUNC_0("  -x, --no-privileges          skip restoration of access privileges (grant/revoke)\n"));
 FUNC_1(FUNC_0("  -1, --single-transaction     restore as a single transaction\n"));
 FUNC_1(FUNC_0("  --disable-triggers           disable triggers during data-only restore\n"));
 FUNC_1(FUNC_0("  --enable-row-security        enable row security\n"));
 FUNC_1(FUNC_0("  --if-exists                  use IF EXISTS when dropping objects\n"));
 FUNC_1(FUNC_0("  --no-comments                do not restore comments\n"));
 FUNC_1(FUNC_0("  --no-data-for-failed-tables  do not restore data of tables that could not be\n"
    "                               created\n"));
 FUNC_1(FUNC_0("  --no-publications            do not restore publications\n"));
 FUNC_1(FUNC_0("  --no-security-labels         do not restore security labels\n"));
 FUNC_1(FUNC_0("  --no-subscriptions           do not restore subscriptions\n"));
 FUNC_1(FUNC_0("  --no-tablespaces             do not restore tablespace assignments\n"));
 FUNC_1(FUNC_0("  --section=SECTION            restore named section (pre-data, data, or post-data)\n"));
 FUNC_1(FUNC_0("  --strict-names               require table and/or schema include patterns to\n"
    "                               match at least one entity each\n"));
 FUNC_1(FUNC_0("  --use-set-session-authorization\n"
    "                               use SET SESSION AUTHORIZATION commands instead of\n"
    "                               ALTER OWNER commands to set ownership\n"));

 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME      database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT          database server port number\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME      connect as specified database user\n"));
 FUNC_1(FUNC_0("  -w, --no-password        never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password           force password prompt (should happen automatically)\n"));
 FUNC_1(FUNC_0("  --role=ROLENAME          do SET ROLE before restore\n"));

 FUNC_1(FUNC_0("\n"
    "The options -I, -n, -N, -P, -t, -T, and --section can be combined and specified\n"
    "multiple times to select multiple objects.\n"));
 FUNC_1(FUNC_0("\nIf no input file name is supplied, then standard input is used.\n\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
