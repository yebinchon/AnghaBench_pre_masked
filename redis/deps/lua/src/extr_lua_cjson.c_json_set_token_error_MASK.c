
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* string; } ;
struct TYPE_7__ {TYPE_1__ value; scalar_t__ index; int type; } ;
typedef TYPE_2__ json_token_t ;
struct TYPE_8__ {scalar_t__ data; scalar_t__ ptr; } ;
typedef TYPE_3__ json_parse_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(json_token_t *VAR_1, json_parse_t *VAR_2,
                                 const char *VAR_3)
{
    VAR_1->type = VAR_0;
    VAR_1->index = VAR_2->ptr - VAR_2->data;
    VAR_1->value.string = VAR_3;
}
