
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2(char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_1(VAR_1, '/');
 if (VAR_2) {
  VAR_2++;
 } else {
  VAR_2 = "php";
 }

 FUNC_0( "Usage: %s [-n] [-e] [-h] [-i] [-m] [-v] [-t] [-p <prefix>] [-g <pid>] [-c <file>] [-d foo[=bar]] [-y <file>] [-D] [-F [-O]]\n"
    "  -c <path>|<file> Look for php.ini file in this directory\n"
    "  -n               No php.ini file will be used\n"
    "  -d foo[=bar]     Define INI entry foo with value 'bar'\n"
    "  -e               Generate extended information for debugger/profiler\n"
    "  -h               This help\n"
    "  -i               PHP information\n"
    "  -m               Show compiled in modules\n"
    "  -v               Version number\n"
    "  -p, --prefix <dir>\n"
    "                   Specify alternative prefix path to FastCGI process manager (default: %s).\n"
    "  -g, --pid <file>\n"
    "                   Specify the PID file location.\n"
    "  -y, --fpm-config <file>\n"
    "                   Specify alternative path to FastCGI process manager config file.\n"
    "  -t, --test       Test FPM configuration and exit\n"
    "  -D, --daemonize  force to run in background, and ignore daemonize option from config file\n"
    "  -F, --nodaemonize\n"
    "                   force to stay in foreground, and ignore daemonize option from config file\n"
                                "  -O, --force-stderr\n"
                                "                   force output to stderr in nodaemonize even if stderr is not a TTY\n"
    "  -R, --allow-to-run-as-root\n"
    "                   Allow pool to run as root (disabled by default)\n",
    VAR_2, VAR_0);
}
