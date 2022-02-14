
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char* VAR_2)
{
    FUNC_0( "Usage : \n");
    FUNC_0( "      %s [arg] [input] [output] \n", VAR_2);
    FUNC_0( "\n");
    FUNC_0( "input   : a filename \n");
    FUNC_0( "          with no FILE, or when FILE is - or %s, read standard input\n", VAR_1);
    FUNC_0( "Arguments : \n");
    FUNC_0( " -1     : Fast compression (default) \n");
    FUNC_0( " -9     : High compression \n");
    FUNC_0( " -d     : decompression (default for %s extension)\n", VAR_0);
    FUNC_0( " -z     : force compression \n");
    FUNC_0( " -D FILE: use FILE as dictionary \n");
    FUNC_0( " -f     : overwrite output without prompting \n");
    FUNC_0( " -k     : preserve source files(s)  (default) \n");
    FUNC_0( "--rm    : remove source file(s) after successful de/compression \n");
    FUNC_0( " -h/-H  : display help/long help and exit \n");
    return 0;
}
