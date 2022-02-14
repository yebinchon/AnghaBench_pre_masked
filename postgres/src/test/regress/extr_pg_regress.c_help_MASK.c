
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
 FUNC_1(FUNC_0("PostgreSQL regression test driver\n"));
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("Usage:\n  %s [OPTION]... [EXTRA-TEST]...\n"), VAR_0);
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("      --bindir=BINPATH          use BINPATH for programs that are run;\n"));
 FUNC_1(FUNC_0("                                if empty, use PATH from the environment\n"));
 FUNC_1(FUNC_0("      --config-auth=DATADIR     update authentication settings for DATADIR\n"));
 FUNC_1(FUNC_0("      --create-role=ROLE        create the specified role before testing\n"));
 FUNC_1(FUNC_0("      --dbname=DB               use database DB (default \"regression\")\n"));
 FUNC_1(FUNC_0("      --debug                   turn on debug mode in programs that are run\n"));
 FUNC_1(FUNC_0("      --dlpath=DIR              look for dynamic libraries in DIR\n"));
 FUNC_1(FUNC_0("      --encoding=ENCODING       use ENCODING as the encoding\n"));
 FUNC_1(FUNC_0("  -h, --help                    show this help, then exit\n"));
 FUNC_1(FUNC_0("      --inputdir=DIR            take input files from DIR (default \".\")\n"));
 FUNC_1(FUNC_0("      --launcher=CMD            use CMD as launcher of psql\n"));
 FUNC_1(FUNC_0("      --load-extension=EXT      load the named extension before running the\n"));
 FUNC_1(FUNC_0("                                tests; can appear multiple times\n"));
 FUNC_1(FUNC_0("      --load-language=LANG      load the named language before running the\n"));
 FUNC_1(FUNC_0("                                tests; can appear multiple times\n"));
 FUNC_1(FUNC_0("      --max-connections=N       maximum number of concurrent connections\n"));
 FUNC_1(FUNC_0("                                (default is 0, meaning unlimited)\n"));
 FUNC_1(FUNC_0("      --max-concurrent-tests=N  maximum number of concurrent tests in schedule\n"));
 FUNC_1(FUNC_0("                                (default is 0, meaning unlimited)\n"));
 FUNC_1(FUNC_0("      --outputdir=DIR           place output files in DIR (default \".\")\n"));
 FUNC_1(FUNC_0("      --schedule=FILE           use test ordering schedule from FILE\n"));
 FUNC_1(FUNC_0("                                (can be used multiple times to concatenate)\n"));
 FUNC_1(FUNC_0("      --temp-instance=DIR       create a temporary instance in DIR\n"));
 FUNC_1(FUNC_0("      --use-existing            use an existing installation\n"));
 FUNC_1(FUNC_0("  -V, --version                 output version information, then exit\n"));
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("Options for \"temp-instance\" mode:\n"));
 FUNC_1(FUNC_0("      --no-locale               use C locale\n"));
 FUNC_1(FUNC_0("      --port=PORT               start postmaster on PORT\n"));
 FUNC_1(FUNC_0("      --temp-config=FILE        append contents of FILE to temporary config\n"));
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("Options for using an existing installation:\n"));
 FUNC_1(FUNC_0("      --host=HOST               use postmaster running on HOST\n"));
 FUNC_1(FUNC_0("      --port=PORT               use postmaster running at PORT\n"));
 FUNC_1(FUNC_0("      --user=USER               connect as USER\n"));
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("The exit status is 0 if all tests passed, 1 if some tests failed, and 2\n"));
 FUNC_1(FUNC_0("if the tests could not be run for some reason.\n"));
 FUNC_1(FUNC_0("\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
