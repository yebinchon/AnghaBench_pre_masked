
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_config {int dummy; } ;
struct config_pair {int key; char* value; int value_len; } ;
struct config_option {scalar_t__ type; int offset; int max_len; } ;
typedef int buffer ;
typedef int UINT ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct config_pair*,struct config_option const**) ;
 int FUNC_3 (char*,struct config_pair*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (char*,int *) ;

__attribute__((used)) static int FUNC_10(
    struct idmap_config *VAR_4,
    const char *VAR_5)
{
    char VAR_6[1024], *VAR_7;
    FILE *VAR_8;
    struct config_pair VAR_9;
    const struct config_option *VAR_10;
    int VAR_11 = 0;
    int VAR_12 = VAR_2;


    VAR_8 = FUNC_7(VAR_5, "r");
    if (VAR_8 == ((void*)0)) {
        FUNC_4("config_load() failed to open file '%s'\n", VAR_5);
        goto out;
    }


    while (FUNC_6(VAR_6, sizeof(VAR_6), VAR_8)) {
        VAR_11++;


        VAR_7 = VAR_6;
        while (FUNC_8(*VAR_7)) VAR_7++;


        if (*VAR_7 == '#' || *VAR_7 == 0)
            continue;


        VAR_12 = FUNC_3(VAR_6, &VAR_9);
        if (VAR_12) {
            FUNC_4("error on line %d: %s\n", VAR_11, VAR_6);
            break;
        }


        VAR_12 = FUNC_2(&VAR_9, &VAR_10);
        if (VAR_12) {
            FUNC_4("unrecognized option '%s' on line %d: %s\n",
                VAR_9.key, VAR_11, VAR_6);
            VAR_12 = VAR_1;
            break;
        }

        if (VAR_10->type == VAR_3) {
            if (!FUNC_9(VAR_9.value, (UINT*)((char*)VAR_4 + VAR_10->offset))) {
                VAR_12 = VAR_1;
                FUNC_4("expected a number on line %d: %s=\"%s\"\n",
                    VAR_11, VAR_9.key, VAR_9.value);
                break;
            }
        } else {
            if (FUNC_0(FUNC_1((char*)VAR_4 + VAR_10->offset,
                    VAR_10->max_len, VAR_9.value, VAR_9.value_len))) {
                VAR_12 = VAR_0;
                FUNC_4("overflow on line %d: %s=\"%s\"\n",
                    VAR_11, VAR_9.key, VAR_9.value);
                break;
            }
        }
    }

    FUNC_5(VAR_8);
out:
    return VAR_12;
}
