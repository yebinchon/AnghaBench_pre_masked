
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int number; } ;
struct TYPE_9__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ json_token_t ;
struct TYPE_10__ {char* ptr; } ;
typedef TYPE_3__ json_parse_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_2(json_parse_t *VAR_1, json_token_t *VAR_2)
{
    char *VAR_3;

    VAR_2->type = VAR_0;
    VAR_2->value.number = FUNC_0(VAR_1->ptr, &VAR_3);
    if (VAR_1->ptr == VAR_3)
        FUNC_1(VAR_2, VAR_1, "invalid number");
    else
        VAR_1->ptr = VAR_3;

    return;
}
