
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int has_arg; char val; } ;
struct lwan_straitjacket {char const* user_name; char* chroot_path; } ;
struct lwan_config {char* config_file_path; char* listener; } ;
typedef enum args { ____Placeholder_args } args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*,struct option const*,int*) ;
 int FUNC_3 (char*,int ,size_t) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,struct lwan_config*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int VAR_5 ;
 void* FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static enum args
FUNC_10(int VAR_6, char *VAR_7[], struct lwan_config *VAR_8, char *VAR_9,
    struct lwan_straitjacket *VAR_10)
{
    static const struct option VAR_11[] = {
        { .name = "root", .has_arg = 1, .val = 'r' },
        { .name = "listen", .has_arg = 1, .val = 'l' },
        { .name = "help", .val = 'h' },
        { .name = "config", .has_arg = 1, .val = 'c' },
        { .name = "chroot", .val = 'C' },
        { .name = "user", .val = 'u', .has_arg = 1 },
        { .name = "modules", .val = 'm' },
        { .name = "handlers", .val = 'H' },
        { }
    };
    int VAR_12, VAR_13 = 0;
    enum args VAR_14 = VAR_2;

    while ((VAR_12 = FUNC_2(VAR_6, VAR_7, "Hmhr:l:c:u:C", VAR_11, &VAR_13)) != -1) {
        switch (VAR_12) {
        case 'H':
            FUNC_4();
            return VAR_0;

        case 'm':
            FUNC_6();
            return VAR_0;

        case 'u':
            FUNC_1((char *)VAR_10->user_name);
            VAR_10->user_name = (const char *)FUNC_8(VAR_4);
            break;

        case 'C':
            VAR_10->chroot_path = VAR_9;
            break;

        case 'c':
            FUNC_1(VAR_8->config_file_path);
            VAR_8->config_file_path = FUNC_8(VAR_4);
            VAR_14 = VAR_2;
            break;

        case 'l':
            FUNC_1(VAR_8->listener);
            VAR_8->listener = FUNC_8(VAR_4);
            VAR_14 = VAR_1;
            break;

        case 'r': {
            size_t VAR_15 = FUNC_9(VAR_4);

            if (VAR_15 >= VAR_3) {
                FUNC_0(VAR_5, "Root path length exeeds %zu characters\n", VAR_3);
                return VAR_0;
            }

            FUNC_3(VAR_9, VAR_4, VAR_15 + 1);
            VAR_14 = VAR_1;
            break;
        }

        case 'h':
            FUNC_5(VAR_7[0], VAR_8);
            return VAR_0;

        default:
            FUNC_7("Run %s --help for usage information.\n", VAR_7[0]);
            return VAR_0;
        }
    }

    return VAR_14;
}
