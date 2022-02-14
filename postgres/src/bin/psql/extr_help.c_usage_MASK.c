
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int topt; } ;
struct TYPE_4__ {TYPE_1__ popt; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int *) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 char* FUNC_5 (char**) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 TYPE_2__ VAR_3 ;

void
FUNC_8(unsigned short int VAR_4)
{
 const char *VAR_5;
 const char *VAR_6;
 char *VAR_7;
 FILE *VAR_8;


 VAR_6 = FUNC_6("PGUSER");
 if (!VAR_6)
 {
  VAR_6 = FUNC_5(&VAR_7);
  if (!VAR_6)
  {
   FUNC_7("%s", VAR_7);
   FUNC_3(VAR_2);
  }
 }





 VAR_8 = FUNC_1(62, VAR_4 ? &(VAR_3.popt.topt) : ((void*)0));

 FUNC_4(VAR_8, FUNC_2("psql is the PostgreSQL interactive terminal.\n\n"));
 FUNC_4(VAR_8, FUNC_2("Usage:\n"));
 FUNC_4(VAR_8, FUNC_2("  psql [OPTION]... [DBNAME [USERNAME]]\n\n"));

 FUNC_4(VAR_8, FUNC_2("General options:\n"));

 VAR_5 = FUNC_6("PGDATABASE");
 if (!VAR_5)
  VAR_5 = VAR_6;
 FUNC_4(VAR_8, FUNC_2("  -c, --command=COMMAND    run only single command (SQL or internal) and exit\n"));
 FUNC_4(VAR_8, FUNC_2("  -d, --dbname=DBNAME      database name to connect to (default: \"%s\")\n"), VAR_5);
 FUNC_4(VAR_8, FUNC_2("  -f, --file=FILENAME      execute commands from file, then exit\n"));
 FUNC_4(VAR_8, FUNC_2("  -l, --list               list available databases, then exit\n"));
 FUNC_4(VAR_8, FUNC_2("  -v, --set=, --variable=NAME=VALUE\n"
       "                           set psql variable NAME to VALUE\n"
       "                           (e.g., -v ON_ERROR_STOP=1)\n"));
 FUNC_4(VAR_8, FUNC_2("  -V, --version            output version information, then exit\n"));
 FUNC_4(VAR_8, FUNC_2("  -X, --no-psqlrc          do not read startup file (~/.psqlrc)\n"));
 FUNC_4(VAR_8, FUNC_2("  -1 (\"one\"), --single-transaction\n"
       "                           execute as a single transaction (if non-interactive)\n"));
 FUNC_4(VAR_8, FUNC_2("  -?, --help[=options]     show this help, then exit\n"));
 FUNC_4(VAR_8, FUNC_2("      --help=commands      list backslash commands, then exit\n"));
 FUNC_4(VAR_8, FUNC_2("      --help=variables     list special variables, then exit\n"));

 FUNC_4(VAR_8, FUNC_2("\nInput and output options:\n"));
 FUNC_4(VAR_8, FUNC_2("  -a, --echo-all           echo all input from script\n"));
 FUNC_4(VAR_8, FUNC_2("  -b, --echo-errors        echo failed commands\n"));
 FUNC_4(VAR_8, FUNC_2("  -e, --echo-queries       echo commands sent to server\n"));
 FUNC_4(VAR_8, FUNC_2("  -E, --echo-hidden        display queries that internal commands generate\n"));
 FUNC_4(VAR_8, FUNC_2("  -L, --log-file=FILENAME  send session log to file\n"));
 FUNC_4(VAR_8, FUNC_2("  -n, --no-readline        disable enhanced command line editing (readline)\n"));
 FUNC_4(VAR_8, FUNC_2("  -o, --output=FILENAME    send query results to file (or |pipe)\n"));
 FUNC_4(VAR_8, FUNC_2("  -q, --quiet              run quietly (no messages, only query output)\n"));
 FUNC_4(VAR_8, FUNC_2("  -s, --single-step        single-step mode (confirm each query)\n"));
 FUNC_4(VAR_8, FUNC_2("  -S, --single-line        single-line mode (end of line terminates SQL command)\n"));

 FUNC_4(VAR_8, FUNC_2("\nOutput format options:\n"));
 FUNC_4(VAR_8, FUNC_2("  -A, --no-align           unaligned table output mode\n"));
 FUNC_4(VAR_8, FUNC_2("      --csv                CSV (Comma-Separated Values) table output mode\n"));
 FUNC_4(VAR_8, FUNC_2("  -F, --field-separator=STRING\n"
       "                           field separator for unaligned output (default: \"%s\")\n"),
   VAR_0);
 FUNC_4(VAR_8, FUNC_2("  -H, --html               HTML table output mode\n"));
 FUNC_4(VAR_8, FUNC_2("  -P, --pset=VAR[=ARG]     set printing option VAR to ARG (see \\pset command)\n"));
 FUNC_4(VAR_8, FUNC_2("  -R, --record-separator=STRING\n"
       "                           record separator for unaligned output (default: newline)\n"));
 FUNC_4(VAR_8, FUNC_2("  -t, --tuples-only        print rows only\n"));
 FUNC_4(VAR_8, FUNC_2("  -T, --table-attr=TEXT    set HTML table tag attributes (e.g., width, border)\n"));
 FUNC_4(VAR_8, FUNC_2("  -x, --expanded           turn on expanded table output\n"));
 FUNC_4(VAR_8, FUNC_2("  -z, --field-separator-zero\n"
       "                           set field separator for unaligned output to zero byte\n"));
 FUNC_4(VAR_8, FUNC_2("  -0, --record-separator-zero\n"
       "                           set record separator for unaligned output to zero byte\n"));

 FUNC_4(VAR_8, FUNC_2("\nConnection options:\n"));

 VAR_5 = FUNC_6("PGHOST");
 FUNC_4(VAR_8, FUNC_2("  -h, --host=HOSTNAME      database server host or socket directory (default: \"%s\")\n"),
   VAR_5 ? VAR_5 : FUNC_2("local socket"));

 VAR_5 = FUNC_6("PGPORT");
 FUNC_4(VAR_8, FUNC_2("  -p, --port=PORT          database server port (default: \"%s\")\n"),
   VAR_5 ? VAR_5 : VAR_1);

 VAR_5 = FUNC_6("PGUSER");
 if (!VAR_5)
  VAR_5 = VAR_6;
 FUNC_4(VAR_8, FUNC_2("  -U, --username=USERNAME  database user name (default: \"%s\")\n"), VAR_5);
 FUNC_4(VAR_8, FUNC_2("  -w, --no-password        never prompt for password\n"));
 FUNC_4(VAR_8, FUNC_2("  -W, --password           force password prompt (should happen automatically)\n"));

 FUNC_4(VAR_8, FUNC_2("\nFor more information, type \"\\?\" (for internal commands) or \"\\help\" (for SQL\n"
       "commands) from within psql, or consult the psql section in the PostgreSQL\n"
       "documentation.\n\n"));
 FUNC_4(VAR_8, FUNC_2("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));

 FUNC_0(VAR_8);
}
