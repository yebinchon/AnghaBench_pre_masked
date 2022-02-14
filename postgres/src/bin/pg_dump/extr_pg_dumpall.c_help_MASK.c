
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
 FUNC_1(FUNC_0("%s extracts a PostgreSQL database cluster into an SQL script file.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n"), VAR_0);

 FUNC_1(FUNC_0("\nGeneral options:\n"));
 FUNC_1(FUNC_0("  -f, --file=FILENAME          output file name\n"));
 FUNC_1(FUNC_0("  -v, --verbose                verbose mode\n"));
 FUNC_1(FUNC_0("  -V, --version                output version information, then exit\n"));
 FUNC_1(FUNC_0("  --lock-wait-timeout=TIMEOUT  fail after waiting TIMEOUT for a table lock\n"));
 FUNC_1(FUNC_0("  -?, --help                   show this help, then exit\n"));
 FUNC_1(FUNC_0("\nOptions controlling the output content:\n"));
 FUNC_1(FUNC_0("  -a, --data-only              dump only the data, not the schema\n"));
 FUNC_1(FUNC_0("  -c, --clean                  clean (drop) databases before recreating\n"));
 FUNC_1(FUNC_0("  -E, --encoding=ENCODING      dump the data in encoding ENCODING\n"));
 FUNC_1(FUNC_0("  -g, --globals-only           dump only global objects, no databases\n"));
 FUNC_1(FUNC_0("  -O, --no-owner               skip restoration of object ownership\n"));
 FUNC_1(FUNC_0("  -r, --roles-only             dump only roles, no databases or tablespaces\n"));
 FUNC_1(FUNC_0("  -s, --schema-only            dump only the schema, no data\n"));
 FUNC_1(FUNC_0("  -S, --superuser=NAME         superuser user name to use in the dump\n"));
 FUNC_1(FUNC_0("  -t, --tablespaces-only       dump only tablespaces, no databases or roles\n"));
 FUNC_1(FUNC_0("  -x, --no-privileges          do not dump privileges (grant/revoke)\n"));
 FUNC_1(FUNC_0("  --binary-upgrade             for use by upgrade utilities only\n"));
 FUNC_1(FUNC_0("  --column-inserts             dump data as INSERT commands with column names\n"));
 FUNC_1(FUNC_0("  --disable-dollar-quoting     disable dollar quoting, use SQL standard quoting\n"));
 FUNC_1(FUNC_0("  --disable-triggers           disable triggers during data-only restore\n"));
 FUNC_1(FUNC_0("  --exclude-database=PATTERN   exclude databases whose name matches PATTERN\n"));
 FUNC_1(FUNC_0("  --extra-float-digits=NUM     override default setting for extra_float_digits\n"));
 FUNC_1(FUNC_0("  --if-exists                  use IF EXISTS when dropping objects\n"));
 FUNC_1(FUNC_0("  --inserts                    dump data as INSERT commands, rather than COPY\n"));
 FUNC_1(FUNC_0("  --load-via-partition-root    load partitions via the root table\n"));
 FUNC_1(FUNC_0("  --no-comments                do not dump comments\n"));
 FUNC_1(FUNC_0("  --no-publications            do not dump publications\n"));
 FUNC_1(FUNC_0("  --no-role-passwords          do not dump passwords for roles\n"));
 FUNC_1(FUNC_0("  --no-security-labels         do not dump security label assignments\n"));
 FUNC_1(FUNC_0("  --no-subscriptions           do not dump subscriptions\n"));
 FUNC_1(FUNC_0("  --no-sync                    do not wait for changes to be written safely to disk\n"));
 FUNC_1(FUNC_0("  --no-tablespaces             do not dump tablespace assignments\n"));
 FUNC_1(FUNC_0("  --no-unlogged-table-data     do not dump unlogged table data\n"));
 FUNC_1(FUNC_0("  --on-conflict-do-nothing     add ON CONFLICT DO NOTHING to INSERT commands\n"));
 FUNC_1(FUNC_0("  --quote-all-identifiers      quote all identifiers, even if not key words\n"));
 FUNC_1(FUNC_0("  --rows-per-insert=NROWS      number of rows per INSERT; implies --inserts\n"));
 FUNC_1(FUNC_0("  --use-set-session-authorization\n"
    "                               use SET SESSION AUTHORIZATION commands instead of\n"
    "                               ALTER OWNER commands to set ownership\n"));

 FUNC_1(FUNC_0("\nConnection options:\n"));
 FUNC_1(FUNC_0("  -d, --dbname=CONNSTR     connect using connection string\n"));
 FUNC_1(FUNC_0("  -h, --host=HOSTNAME      database server host or socket directory\n"));
 FUNC_1(FUNC_0("  -l, --database=DBNAME    alternative default database\n"));
 FUNC_1(FUNC_0("  -p, --port=PORT          database server port number\n"));
 FUNC_1(FUNC_0("  -U, --username=NAME      connect as specified database user\n"));
 FUNC_1(FUNC_0("  -w, --no-password        never prompt for password\n"));
 FUNC_1(FUNC_0("  -W, --password           force password prompt (should happen automatically)\n"));
 FUNC_1(FUNC_0("  --role=ROLENAME          do SET ROLE before dump\n"));

 FUNC_1(FUNC_0("\nIf -f/--file is not used, then the SQL script will be written to the standard\n"
    "output.\n\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
