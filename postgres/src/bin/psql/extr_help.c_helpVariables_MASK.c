
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
 int * FUNC_1 (int,int *) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_2__ VAR_1 ;

void
FUNC_4(unsigned short int VAR_2)
{
 FILE *VAR_3;







 VAR_3 = FUNC_1(158, VAR_2 ? &(VAR_1.popt.topt) : ((void*)0));

 FUNC_3(VAR_3, FUNC_2("List of specially treated variables\n\n"));

 FUNC_3(VAR_3, FUNC_2("psql variables:\n"));
 FUNC_3(VAR_3, FUNC_2("Usage:\n"));
 FUNC_3(VAR_3, FUNC_2("  psql --set=NAME=VALUE\n  or \\set NAME VALUE inside psql\n\n"));

 FUNC_3(VAR_3, FUNC_2("  AUTOCOMMIT\n"
       "    if set, successful SQL commands are automatically committed\n"));
 FUNC_3(VAR_3, FUNC_2("  COMP_KEYWORD_CASE\n"
       "    determines the case used to complete SQL key words\n"
       "    [lower, upper, preserve-lower, preserve-upper]\n"));
 FUNC_3(VAR_3, FUNC_2("  DBNAME\n"
       "    the currently connected database name\n"));
 FUNC_3(VAR_3, FUNC_2("  ECHO\n"
       "    controls what input is written to standard output\n"
       "    [all, errors, none, queries]\n"));
 FUNC_3(VAR_3, FUNC_2("  ECHO_HIDDEN\n"
       "    if set, display internal queries executed by backslash commands;\n"
       "    if set to \"noexec\", just show them without execution\n"));
 FUNC_3(VAR_3, FUNC_2("  ENCODING\n"
       "    current client character set encoding\n"));
 FUNC_3(VAR_3, FUNC_2("  ERROR\n"
       "    true if last query failed, else false\n"));
 FUNC_3(VAR_3, FUNC_2("  FETCH_COUNT\n"
       "    the number of result rows to fetch and display at a time (0 = unlimited)\n"));
 FUNC_3(VAR_3, FUNC_2("  HIDE_TABLEAM\n"
       "    if set, table access methods are not displayed\n"));
 FUNC_3(VAR_3, FUNC_2("  HISTCONTROL\n"
       "    controls command history [ignorespace, ignoredups, ignoreboth]\n"));
 FUNC_3(VAR_3, FUNC_2("  HISTFILE\n"
       "    file name used to store the command history\n"));
 FUNC_3(VAR_3, FUNC_2("  HISTSIZE\n"
       "    maximum number of commands to store in the command history\n"));
 FUNC_3(VAR_3, FUNC_2("  HOST\n"
       "    the currently connected database server host\n"));
 FUNC_3(VAR_3, FUNC_2("  IGNOREEOF\n"
       "    number of EOFs needed to terminate an interactive session\n"));
 FUNC_3(VAR_3, FUNC_2("  LASTOID\n"
       "    value of the last affected OID\n"));
 FUNC_3(VAR_3, FUNC_2("  LAST_ERROR_MESSAGE\n"
       "  LAST_ERROR_SQLSTATE\n"
       "    message and SQLSTATE of last error, or empty string and \"00000\" if none\n"));
 FUNC_3(VAR_3, FUNC_2("  ON_ERROR_ROLLBACK\n"
       "    if set, an error doesn't stop a transaction (uses implicit savepoints)\n"));
 FUNC_3(VAR_3, FUNC_2("  ON_ERROR_STOP\n"
       "    stop batch execution after error\n"));
 FUNC_3(VAR_3, FUNC_2("  PORT\n"
       "    server port of the current connection\n"));
 FUNC_3(VAR_3, FUNC_2("  PROMPT1\n"
       "    specifies the standard psql prompt\n"));
 FUNC_3(VAR_3, FUNC_2("  PROMPT2\n"
       "    specifies the prompt used when a statement continues from a previous line\n"));
 FUNC_3(VAR_3, FUNC_2("  PROMPT3\n"
       "    specifies the prompt used during COPY ... FROM STDIN\n"));
 FUNC_3(VAR_3, FUNC_2("  QUIET\n"
       "    run quietly (same as -q option)\n"));
 FUNC_3(VAR_3, FUNC_2("  ROW_COUNT\n"
       "    number of rows returned or affected by last query, or 0\n"));
 FUNC_3(VAR_3, FUNC_2("  SERVER_VERSION_NAME\n"
       "  SERVER_VERSION_NUM\n"
       "    server's version (in short string or numeric format)\n"));
 FUNC_3(VAR_3, FUNC_2("  SHOW_CONTEXT\n"
       "    controls display of message context fields [never, errors, always]\n"));
 FUNC_3(VAR_3, FUNC_2("  SINGLELINE\n"
       "    if set, end of line terminates SQL commands (same as -S option)\n"));
 FUNC_3(VAR_3, FUNC_2("  SINGLESTEP\n"
       "    single-step mode (same as -s option)\n"));
 FUNC_3(VAR_3, FUNC_2("  SQLSTATE\n"
       "    SQLSTATE of last query, or \"00000\" if no error\n"));
 FUNC_3(VAR_3, FUNC_2("  USER\n"
       "    the currently connected database user\n"));
 FUNC_3(VAR_3, FUNC_2("  VERBOSITY\n"
       "    controls verbosity of error reports [default, verbose, terse, sqlstate]\n"));
 FUNC_3(VAR_3, FUNC_2("  VERSION\n"
       "  VERSION_NAME\n"
       "  VERSION_NUM\n"
       "    psql's version (in verbose string, short string, or numeric format)\n"));

 FUNC_3(VAR_3, FUNC_2("\nDisplay settings:\n"));
 FUNC_3(VAR_3, FUNC_2("Usage:\n"));
 FUNC_3(VAR_3, FUNC_2("  psql --pset=NAME[=VALUE]\n  or \\pset NAME [VALUE] inside psql\n\n"));

 FUNC_3(VAR_3, FUNC_2("  border\n"
       "    border style (number)\n"));
 FUNC_3(VAR_3, FUNC_2("  columns\n"
       "    target width for the wrapped format\n"));
 FUNC_3(VAR_3, FUNC_2("  expanded (or x)\n"
       "    expanded output [on, off, auto]\n"));
 FUNC_3(VAR_3, FUNC_2("  fieldsep\n"
       "    field separator for unaligned output (default \"%s\")\n"),
   VAR_0);
 FUNC_3(VAR_3, FUNC_2("  fieldsep_zero\n"
       "    set field separator for unaligned output to a zero byte\n"));
 FUNC_3(VAR_3, FUNC_2("  footer\n"
       "    enable or disable display of the table footer [on, off]\n"));
 FUNC_3(VAR_3, FUNC_2("  format\n"
       "    set output format [unaligned, aligned, wrapped, html, asciidoc, ...]\n"));
 FUNC_3(VAR_3, FUNC_2("  linestyle\n"
       "    set the border line drawing style [ascii, old-ascii, unicode]\n"));
 FUNC_3(VAR_3, FUNC_2("  null\n"
       "    set the string to be printed in place of a null value\n"));
 FUNC_3(VAR_3, FUNC_2("  numericlocale\n"
       "    enable display of a locale-specific character to separate groups of digits\n"));
 FUNC_3(VAR_3, FUNC_2("  pager\n"
       "    control when an external pager is used [yes, no, always]\n"));
 FUNC_3(VAR_3, FUNC_2("  recordsep\n"
       "    record (line) separator for unaligned output\n"));
 FUNC_3(VAR_3, FUNC_2("  recordsep_zero\n"
       "    set record separator for unaligned output to a zero byte\n"));
 FUNC_3(VAR_3, FUNC_2("  tableattr (or T)\n"
       "    specify attributes for table tag in html format, or proportional\n"
       "    column widths for left-aligned data types in latex-longtable format\n"));
 FUNC_3(VAR_3, FUNC_2("  title\n"
       "    set the table title for subsequently printed tables\n"));
 FUNC_3(VAR_3, FUNC_2("  tuples_only\n"
       "    if set, only actual table data is shown\n"));
 FUNC_3(VAR_3, FUNC_2("  unicode_border_linestyle\n"
       "  unicode_column_linestyle\n"
       "  unicode_header_linestyle\n"
       "    set the style of Unicode line drawing [single, double]\n"));

 FUNC_3(VAR_3, FUNC_2("\nEnvironment variables:\n"));
 FUNC_3(VAR_3, FUNC_2("Usage:\n"));


 FUNC_3(VAR_3, FUNC_2("  NAME=VALUE [NAME=VALUE] psql ...\n  or \\setenv NAME [VALUE] inside psql\n\n"));




 FUNC_3(VAR_3, FUNC_2("  COLUMNS\n"
       "    number of columns for wrapped format\n"));
 FUNC_3(VAR_3, FUNC_2("  PGAPPNAME\n"
       "    same as the application_name connection parameter\n"));
 FUNC_3(VAR_3, FUNC_2("  PGDATABASE\n"
       "    same as the dbname connection parameter\n"));
 FUNC_3(VAR_3, FUNC_2("  PGHOST\n"
       "    same as the host connection parameter\n"));
 FUNC_3(VAR_3, FUNC_2("  PGPASSWORD\n"
       "    connection password (not recommended)\n"));
 FUNC_3(VAR_3, FUNC_2("  PGPASSFILE\n"
       "    password file name\n"));
 FUNC_3(VAR_3, FUNC_2("  PGPORT\n"
       "    same as the port connection parameter\n"));
 FUNC_3(VAR_3, FUNC_2("  PGUSER\n"
       "    same as the user connection parameter\n"));
 FUNC_3(VAR_3, FUNC_2("  PSQL_EDITOR, EDITOR, VISUAL\n"
       "    editor used by the \\e, \\ef, and \\ev commands\n"));
 FUNC_3(VAR_3, FUNC_2("  PSQL_EDITOR_LINENUMBER_ARG\n"
       "    how to specify a line number when invoking the editor\n"));
 FUNC_3(VAR_3, FUNC_2("  PSQL_HISTORY\n"
       "    alternative location for the command history file\n"));
 FUNC_3(VAR_3, FUNC_2("  PSQL_PAGER, PAGER\n"
       "    name of external pager program\n"));
 FUNC_3(VAR_3, FUNC_2("  PSQLRC\n"
       "    alternative location for the user's .psqlrc file\n"));
 FUNC_3(VAR_3, FUNC_2("  SHELL\n"
       "    shell used by the \\! command\n"));
 FUNC_3(VAR_3, FUNC_2("  TMPDIR\n"
       "    directory for temporary files\n"));

 FUNC_0(VAR_3);
}
