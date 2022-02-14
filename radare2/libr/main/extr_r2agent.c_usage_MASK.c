
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1 (int VAR_0) {
 FUNC_0 ("Usage: r2agent [-adhs] [-p port]\n"
 "  -a        listen for everyone (localhost by default)\n"
 "  -d        run in daemon mode (background)\n"
 "  -h        show this help message\n"
 "  -s        run in sandbox mode\n"
 "  -u        enable http Authorization access\n"
 "  -t        user:password authentication file\n"
 "  -p [port] specify listening port (defaults to 8080)\n");
 return !VAR_0;
}
