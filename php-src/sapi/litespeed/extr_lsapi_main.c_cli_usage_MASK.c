
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const char * VAR_0 =
        "Usage: php\n"
        "      php -[b|c|n|h|i|q|s|v|?] [<file>] [args...]\n"
        "  Run in LSAPI mode, only '-b', '-s' and '-c' are effective\n"
        "  Run in Command Line Interpreter mode when parameters are specified\n"
        "\n"
        "  -b <address:port>|<port> Bind Path for external LSAPI Server mode\n"
        "  -c <path>|<file> Look for php.ini file in this directory\n"
        "  -n    No php.ini file will be used\n"
        "  -h    This help\n"
        "  -i    PHP information\n"
        "  -l    Syntax check\n"
        "  -q    Quiet-mode.  Suppress HTTP Header output.\n"
        "  -s    Display colour syntax highlighted source.\n"
        "  -v    Version number\n"
        "  -?    This help\n"
        "\n"
        "  args...    Arguments passed to script.\n";
    FUNC_3();
    FUNC_1();
    FUNC_4( "%s", VAR_0 );



    FUNC_0(1);

}
