
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_1__ jsmntok_t ;
struct TYPE_9__ {char* name; char* fullname; void* callback_data; int (* callback_function ) (struct json_entry*) ;int type; } ;
typedef TYPE_2__ JSON_ENTRY ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ,TYPE_2__*) ;
 int FUNC_1 (char*,TYPE_1__*,int ,int ,TYPE_2__*) ;

size_t FUNC_2(char *VAR_2, jsmntok_t *VAR_3, void *VAR_4, int (*VAR_5)(struct json_entry *))
{
    JSON_ENTRY VAR_6 = {
            .name = "",
            .fullname = "",
            .callback_data = VAR_4,
            .callback_function = VAR_5
    };

    switch (VAR_3[0].type) {
        case 130:
            VAR_6.type = VAR_1;
            FUNC_1(VAR_2, VAR_3, 0, 0, &VAR_6);
            break;

        case 131:
            VAR_6.type = VAR_0;
            FUNC_0(VAR_2, VAR_3, 0, 0, &VAR_6);
            break;

        case 129:
        case 128:
            break;
    }

    return 1;
}
