
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* val; size_t len; } ;
struct TYPE_5__ {TYPE_2__ string; } ;
struct TYPE_7__ {scalar_t__ token; TYPE_1__ value; } ;
typedef TYPE_3__ lex_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static char *FUNC_0(lex_t *VAR_1, size_t *VAR_2)
{
    char *VAR_3 = ((void*)0);
    if(VAR_1->token == VAR_0) {
        VAR_3 = VAR_1->value.string.val;
        *VAR_2 = VAR_1->value.string.len;
        VAR_1->value.string.val = ((void*)0);
        VAR_1->value.string.len = 0;
    }
    return VAR_3;
}
