
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int string; } ;
struct TYPE_12__ {int string_len; TYPE_2__ value; int type; } ;
typedef TYPE_3__ json_token_t ;
struct TYPE_13__ {char* ptr; int tmp; TYPE_1__* cfg; } ;
typedef TYPE_4__ json_parse_t ;
struct TYPE_10__ {char* escape2char; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,char*) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(json_parse_t *VAR_1, json_token_t *VAR_2)
{
    char *VAR_3 = VAR_1->cfg->escape2char;
    char VAR_4;


    FUNC_0(*VAR_1->ptr == '"');


    VAR_1->ptr++;





    FUNC_5(VAR_1->tmp);

    while ((VAR_4 = *VAR_1->ptr) != '"') {
        if (!VAR_4) {

            FUNC_2(VAR_2, VAR_1, "unexpected end of string");
            return;
        }


        if (VAR_4 == '\\') {

            VAR_4 = *(VAR_1->ptr + 1);


            VAR_4 = VAR_3[(unsigned char)VAR_4];
            if (VAR_4 == 'u') {
                if (FUNC_1(VAR_1) == 0)
                    continue;

                FUNC_2(VAR_2, VAR_1,
                                     "invalid unicode escape code");
                return;
            }
            if (!VAR_4) {
                FUNC_2(VAR_2, VAR_1, "invalid escape code");
                return;
            }


            VAR_1->ptr++;
        }


        FUNC_3(VAR_1->tmp, VAR_4);
        VAR_1->ptr++;
    }
    VAR_1->ptr++;

    FUNC_4(VAR_1->tmp);

    VAR_2->type = VAR_0;
    VAR_2->value.string = FUNC_6(VAR_1->tmp, &VAR_2->string_len);
}
