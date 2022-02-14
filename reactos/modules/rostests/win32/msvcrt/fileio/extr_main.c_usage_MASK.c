
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

int FUNC_1(char* VAR_0)
{
    FUNC_0("USAGE: %s test_id [unicode]|[ansi] [clean]|[status][verbose]\n", VAR_0);
    FUNC_0("\tWhere test_id is one of:\n");
    FUNC_0("\t0 - (default) regression mode, run tests 1-4 displaying failures only\n");
    FUNC_0("\t1 - Write DOS style eol data to file in text mode (text.dos)\n");
    FUNC_0("\t2 - Write NIX style eol data to file in binary mode (binary.dos)\n");
    FUNC_0("\t3 - Write DOS style eol data to file in text mode (text.nix)\n");
    FUNC_0("\t4 - Write NIX style eol data to file in binary mode (binary.nix)\n");
    FUNC_0("\t5 - Echo console line input\n");
    FUNC_0("\t6 - Dump console line input in hex format\n");
    FUNC_0("\t7 - The source code is your friend\n");
    FUNC_0("\t[unicode] - perform tests using UNICODE versions of library functions\n");
    FUNC_0("\t[ansi] - perform tests using ANSI versions of library functions\n");
    FUNC_0("\t    If neither unicode or ansi is specified build default is used\n");
    FUNC_0("\t[clean] - delete all temporary test output files\n");
    FUNC_0("\t[status] - enable extra status display while running\n");
    FUNC_0("\t[verbose] - enable verbose output when running\n");
    return 0;
}
