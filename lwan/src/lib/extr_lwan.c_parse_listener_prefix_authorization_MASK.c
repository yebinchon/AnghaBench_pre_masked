
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* password_file; void* realm; } ;
struct lwan_url_map {TYPE_1__ authorization; int flags; } ;
struct config_line {char* value; int type; char* key; } ;
struct config {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct config*,char*,...) ;
 struct config_line* FUNC_1 (struct config*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 void* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(struct config *VAR_1,
                                                const struct config_line *VAR_2,
                                                struct lwan_url_map *VAR_3)
{
    if (!FUNC_5(VAR_2->value, "basic")) {
        FUNC_0(VAR_1, "Only basic authorization supported");
        return;
    }

    FUNC_3(&VAR_3->authorization, 0, sizeof(VAR_3->authorization));

    while ((VAR_2 = FUNC_1(VAR_1))) {
        switch (VAR_2->type) {
        case 130:
            if (FUNC_5(VAR_2->key, "realm")) {
                FUNC_2(VAR_3->authorization.realm);
                VAR_3->authorization.realm = FUNC_4(VAR_2->value);
            } else if (FUNC_5(VAR_2->key, "password_file")) {
                FUNC_2(VAR_3->authorization.password_file);
                VAR_3->authorization.password_file = FUNC_4(VAR_2->value);
            }
            break;

        case 129:
            FUNC_0(VAR_1, "Unexpected section: %s", VAR_2->key);
            goto error;

        case 128:
            if (!VAR_3->authorization.realm)
                VAR_3->authorization.realm = FUNC_4("Lwan");
            if (!VAR_3->authorization.password_file)
                VAR_3->authorization.password_file = FUNC_4("htpasswd");

            VAR_3->flags |= VAR_0;
            return;
        }
    }

    FUNC_0(VAR_1, "Could not find end of authorization section");

error:
    FUNC_2(VAR_3->authorization.realm);
    FUNC_2(VAR_3->authorization.password_file);
}
