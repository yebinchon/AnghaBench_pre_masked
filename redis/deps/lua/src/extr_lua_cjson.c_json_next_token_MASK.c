
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* json_token_type_t ;
struct TYPE_14__ {int boolean; } ;
struct TYPE_16__ {void* type; TYPE_1__ value; scalar_t__* index; } ;
typedef TYPE_3__ json_token_t ;
struct TYPE_17__ {int data; TYPE_2__* cfg; scalar_t__* ptr; } ;
typedef TYPE_4__ json_parse_t ;
struct TYPE_15__ {scalar_t__ decode_invalid_numbers; void** ch2token; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,char*) ;
 int FUNC_4 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_5(json_parse_t *VAR_6, json_token_t *VAR_7)
{
    const json_token_type_t *VAR_8 = VAR_6->cfg->ch2token;
    int VAR_9;


    while (1) {
        VAR_9 = (unsigned char)*(VAR_6->ptr);
        VAR_7->type = VAR_8[VAR_9];
        if (VAR_7->type != VAR_5)
            break;
        VAR_6->ptr++;
    }



    VAR_7->index = VAR_6->ptr - VAR_6->data;


    if (VAR_7->type == VAR_2) {
        FUNC_3(VAR_7, VAR_6, "invalid token");
        return;
    }

    if (VAR_7->type == VAR_1) {
        return;
    }


    if (VAR_7->type != VAR_4) {
        VAR_6->ptr++;
        return;
    }







    if (VAR_9 == '"') {
        FUNC_2(VAR_6, VAR_7);
        return;
    } else if (VAR_9 == '-' || ('0' <= VAR_9 && VAR_9 <= '9')) {
        if (!VAR_6->cfg->decode_invalid_numbers && FUNC_0(VAR_6)) {
            FUNC_3(VAR_7, VAR_6, "invalid number");
            return;
        }
        FUNC_1(VAR_6, VAR_7);
        return;
    } else if (!FUNC_4(VAR_6->ptr, "true", 4)) {
        VAR_7->type = VAR_0;
        VAR_7->value.boolean = 1;
        VAR_6->ptr += 4;
        return;
    } else if (!FUNC_4(VAR_6->ptr, "false", 5)) {
        VAR_7->type = VAR_0;
        VAR_7->value.boolean = 0;
        VAR_6->ptr += 5;
        return;
    } else if (!FUNC_4(VAR_6->ptr, "null", 4)) {
        VAR_7->type = VAR_3;
        VAR_6->ptr += 4;
        return;
    } else if (VAR_6->cfg->decode_invalid_numbers &&
               FUNC_0(VAR_6)) {





        FUNC_1(VAR_6, VAR_7);
        return;
    }


    FUNC_3(VAR_7, VAR_6, "invalid token");
}
