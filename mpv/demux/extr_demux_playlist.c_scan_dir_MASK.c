
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct pl_parser {TYPE_1__* s; } ;
struct dirent {char* d_name; } ;
struct TYPE_2__ {int cancel; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (struct pl_parser*,char*) ;
 int FUNC_1 (struct pl_parser*,char**,int,char*) ;
 int FUNC_2 (struct pl_parser*,char*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (struct pl_parser*,char*,char*) ;
 int * FUNC_7 (char*) ;
 struct dirent* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct stat*,struct stat*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static bool FUNC_12(struct pl_parser *VAR_1, char *VAR_2,
                     struct stat *VAR_3, int VAR_4,
                     char ***VAR_5, int *VAR_6)
{
    if (FUNC_11(VAR_2) >= 8192 || VAR_4 == VAR_0)
        return 0;

    DIR *VAR_7 = FUNC_7(VAR_2);
    if (!VAR_7) {
        FUNC_0(VAR_1, "Could not read directory.\n");
        return 0;
    }

    struct dirent *VAR_8;
    while ((VAR_8 = FUNC_8(VAR_7))) {
        if (VAR_8->d_name[0] == '.')
            continue;

        if (FUNC_5(VAR_1->s->cancel))
            break;

        char *VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_8->d_name);

        struct stat VAR_10;
        if (FUNC_10(VAR_9, &VAR_10) == 0 && FUNC_3(VAR_10.st_mode)) {
            for (int VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
                if (FUNC_9(&VAR_3[VAR_11], &VAR_10)) {
                    FUNC_2(VAR_1, "Skip recursive entry: %s\n", VAR_9);
                    goto skip;
                }
            }

            VAR_3[VAR_4] = VAR_10;
            FUNC_12(VAR_1, VAR_9, VAR_3, VAR_4 + 1, VAR_5, VAR_6);
        } else {
            FUNC_1(VAR_1, *VAR_5, *VAR_6, VAR_9);
        }

        skip: ;
    }

    FUNC_4(VAR_7);
    return 1;
}
