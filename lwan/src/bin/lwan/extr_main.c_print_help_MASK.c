
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_config {char* listener; } ;
typedef int path_buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const struct lwan_config *VAR_2)
{
    char VAR_3[VAR_0];
    char *VAR_4 = FUNC_1();
    const char *VAR_5 = FUNC_2(VAR_3, sizeof(VAR_3));

    FUNC_3("Usage: %s [--root /path/to/root/dir] [--listen addr:port]\n", VAR_1);
    FUNC_3("\t[--config] [--user username] [--chroot] [--modules|--handlers]\n");
    FUNC_3("Serve files through HTTP.\n\n");
    FUNC_3("Options:\n");
    FUNC_3("\t-r, --root      Path to serve files from (default: ./wwwroot).\n");
    FUNC_3("\t-l, --listen    Listener (default: %s).\n", VAR_2->listener);
    FUNC_3("\t-c, --config    Path to config file path.\n");
    FUNC_3("\t-u, --user      Username to drop privileges to (root required).\n");
    FUNC_3("\t-C, --chroot    Chroot to path passed to --root (root required).\n");
    FUNC_3("\t-m, --modules   Print information about available modules.\n");
    FUNC_3("\t-H, --handlers  Print information about available handlers.\n");
    FUNC_3("\t-h, --help      This.\n");
    FUNC_3("\n");
    FUNC_3("Examples:\n");
    FUNC_3("  Serve system-wide documentation:\n");
    FUNC_3("        %s -r /usr/share/doc\n", VAR_1);
    FUNC_3("  Serve on a different port:\n");
    FUNC_3("        %s -l '*:1337'\n", VAR_1);
    FUNC_3("  Use %s from %s:\n", VAR_5, VAR_4);
    FUNC_3("        %s\n", VAR_1);
    FUNC_3("  Use /etc/%s:\n", VAR_5);
    FUNC_3("        %s -c /etc/%s\n", VAR_1, VAR_5);
    FUNC_3("\n");
    FUNC_3("Report bugs at <https://github.com/lpereira/lwan>.\n");

    FUNC_0(VAR_4);
}
