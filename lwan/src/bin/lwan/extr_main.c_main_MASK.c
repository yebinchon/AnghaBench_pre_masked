
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_url_map {char* prefix; int member_1; } ;
struct lwan_straitjacket {scalar_t__ user_name; int chroot_path; } ;
struct lwan_config {char* listener; char* config_file_path; } ;
struct lwan {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 struct lwan_config* FUNC_3 () ;
 int FUNC_4 (struct lwan*) ;
 int FUNC_5 (struct lwan*,struct lwan_config*) ;
 int FUNC_6 (struct lwan*) ;
 int FUNC_7 (struct lwan*,struct lwan_url_map const*) ;
 int FUNC_8 (struct lwan*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct lwan_straitjacket*) ;
 int FUNC_11 (int,char**,struct lwan_config*,char*,struct lwan_straitjacket*) ;
 char* FUNC_12 (char*) ;

int
FUNC_13(int VAR_3, char *VAR_4[])
{
    struct lwan VAR_5;
    struct lwan_config VAR_6;
    struct lwan_straitjacket VAR_7 = {};
    char VAR_8[VAR_2];
    char *VAR_9 = VAR_8;
    int VAR_10 = VAR_1;

    if (!FUNC_2(VAR_9, VAR_2))
        return 1;

    VAR_6 = *FUNC_3();
    VAR_6.listener = FUNC_12("*:8080");

    switch (FUNC_11(VAR_3, VAR_4, &VAR_6, VAR_9, &VAR_7)) {
    case 129:
        FUNC_9("Serving files from %s", VAR_9);

        if (VAR_7.chroot_path) {
            VAR_9 = "/";
        }
        FUNC_10(&VAR_7);

        FUNC_5(&VAR_5, &VAR_6);

        const struct lwan_url_map VAR_11[] = {
            { .prefix = "/", FUNC_0(VAR_9) },
            { }
        };
        FUNC_7(&VAR_5, VAR_11);
        break;
    case 128:
        FUNC_10(&VAR_7);
        if (VAR_6.config_file_path)
            FUNC_5(&VAR_5, &VAR_6);
        else
            FUNC_4(&VAR_5);
        break;
    case 130:
        VAR_10 = VAR_0;
        goto out;
    }

    FUNC_6(&VAR_5);
    FUNC_8(&VAR_5);

out:
    FUNC_1(VAR_6.listener);
    FUNC_1(VAR_6.config_file_path);
    FUNC_1((char *)VAR_7.user_name);

    return VAR_10;
}
