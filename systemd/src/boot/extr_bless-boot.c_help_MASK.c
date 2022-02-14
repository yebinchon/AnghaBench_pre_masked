
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, char *VAR_2[], void *VAR_3) {

        FUNC_0("%s [COMMAND] [OPTIONS...]\n"
               "\n"
               "Mark the boot process as good or bad.\n\n"
               "  -h --help          Show this help\n"
               "     --version       Print version\n"
               "     --path=PATH     Path to the $BOOT partition (may be used multiple times)\n"
               "\n"
               "Commands:\n"
               "     good            Mark this boot as good\n"
               "     bad             Mark this boot as bad\n"
               "     indeterminate   Undo any marking as good or bad\n",
               VAR_0);

        return 0;
}
