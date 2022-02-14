
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int items; int strbuf; int buffer; } ;
struct TYPE_2__ {size_t len; int value; } ;
struct lexeme {TYPE_1__ value; } ;
struct config_line {int value; int key; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct config_line*) ;
 int FUNC_1 (int *) ;
 struct lexeme* FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (int *) ;
 void* VAR_1 ;

__attribute__((used)) static void *FUNC_6(struct parser *VAR_2)
{
    const struct lexeme *VAR_3;
    size_t VAR_4;

    if (!(VAR_3 = FUNC_2(&VAR_2->buffer)))
        return ((void*)0);

    FUNC_4(&VAR_2->strbuf, VAR_3->value.value,
                           VAR_3->value.len);
    VAR_4 = VAR_3->value.len;
    FUNC_3(&VAR_2->strbuf, '\0');

    while ((VAR_3 = FUNC_2(&VAR_2->buffer))) {
        FUNC_4(&VAR_2->strbuf, VAR_3->value.value,
                               VAR_3->value.len);

        if (!FUNC_1(&VAR_2->buffer))
            FUNC_3(&VAR_2->strbuf, ' ');
    }

    struct config_line VAR_5 = {
        .type = VAR_0,
        .key = FUNC_5(&VAR_2->strbuf),
        .value = FUNC_5(&VAR_2->strbuf) + VAR_4 + 1,
    };
    return FUNC_0(&VAR_2->items, &VAR_5) ? VAR_1
                                                             : ((void*)0);
}
