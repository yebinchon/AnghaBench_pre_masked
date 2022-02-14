
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 FUNC_1(FUNC_0("%s is the PostgreSQL embedded SQL preprocessor for C programs.\n\n"),
     VAR_0);
 FUNC_1(FUNC_0("Usage:\n"
    "  %s [OPTION]... FILE...\n\n"),
     VAR_0);
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  -c             automatically generate C code from embedded SQL code;\n"
    "                 this affects EXEC SQL TYPE\n"));
 FUNC_1(FUNC_0("  -C MODE        set compatibility mode; MODE can be one of\n"
    "                 \"INFORMIX\", \"INFORMIX_SE\", \"ORACLE\"\n"));



 FUNC_1(FUNC_0("  -D SYMBOL      define SYMBOL\n"));
 FUNC_1(FUNC_0("  -h             parse a header file, this option includes option \"-c\"\n"));
 FUNC_1(FUNC_0("  -i             parse system include files as well\n"));
 FUNC_1(FUNC_0("  -I DIRECTORY   search DIRECTORY for include files\n"));
 FUNC_1(FUNC_0("  -o OUTFILE     write result to OUTFILE\n"));
 FUNC_1(FUNC_0("  -r OPTION      specify run-time behavior; OPTION can be:\n"
    "                 \"no_indicator\", \"prepare\", \"questionmarks\"\n"));
 FUNC_1(FUNC_0("  --regression   run in regression testing mode\n"));
 FUNC_1(FUNC_0("  -t             turn on autocommit of transactions\n"));
 FUNC_1(FUNC_0("  -V, --version  output version information, then exit\n"));
 FUNC_1(FUNC_0("  -?, --help     show this help, then exit\n"));
 FUNC_1(FUNC_0("\nIf no output file is specified, the name is formed by adding .c to the\n"
    "input file name, after stripping off .pgc if present.\n"));
 FUNC_1(FUNC_0("\nReport bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
