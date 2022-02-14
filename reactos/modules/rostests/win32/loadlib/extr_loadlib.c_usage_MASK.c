
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(const char* VAR_1)
{
    FUNC_0("USAGE: %s libname [libname ...] [unicode]|[ansi] [loop][recurse]\n", VAR_1);
    FUNC_0("\tWhere libname(s) is one or more libraries to load.\n");
    FUNC_0("\t[unicode] - perform tests using UNICODE api calls\n");
    FUNC_0("\t[ansi] - perform tests using ANSI api calls\n");
    FUNC_0("\t    default is %s\n", VAR_0);
    FUNC_0("\t[loop] - run test process in continuous loop\n");
    FUNC_0("\t[recurse] - load libraries recursively rather than sequentually\n");
    FUNC_0("\t[debug] - enable debug mode (unused)\n");
    FUNC_0("\t[verbose] - enable verbose output (unused)\n");
    return 0;
}
