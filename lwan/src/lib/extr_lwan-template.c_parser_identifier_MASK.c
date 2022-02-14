
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser {int flags; TYPE_1__* tpl; int lexer; } ;
struct lwan_var_descriptor {int dummy; } ;
struct TYPE_4__ {int value; scalar_t__ len; } ;
struct lexeme {scalar_t__ type; TYPE_2__ value; } ;
typedef enum flags { ____Placeholder_flags } flags ;
struct TYPE_3__ {int minimum_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct parser*,int ,int,struct lwan_var_descriptor*) ;
 void* FUNC_1 (struct lexeme*,char*,...) ;
 struct lexeme* FUNC_2 (int *) ;
 int FUNC_3 (struct parser*,struct lexeme*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 struct lwan_var_descriptor* FUNC_4 (struct parser*,struct lexeme*) ;
 void* FUNC_5 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_6(struct parser *VAR_10, struct lexeme *VAR_11)
{
    struct lexeme *VAR_12;

    if (!(VAR_12 = FUNC_2(&VAR_10->lexer)))
        return ((void*)0);

    if (VAR_10->flags & VAR_4) {
        if (VAR_12->type != VAR_5)
            return FUNC_1(VAR_11, "Expecting closing brace");
        if (!(VAR_12 = FUNC_2(&VAR_10->lexer)))
            return FUNC_5(VAR_11);
    }

    if (VAR_12->type == VAR_7) {
        struct lwan_var_descriptor *VAR_13 =
            FUNC_4(VAR_10, VAR_11);
        if (!VAR_13) {
            return FUNC_1(VAR_11, "Unknown variable: %.*s",
                                (int)VAR_11->value.len, VAR_11->value.value);
        }

        FUNC_0(VAR_10, VAR_1, VAR_10->flags, VAR_13);

        VAR_10->flags &= ~VAR_4;
        VAR_10->tpl->minimum_size += VAR_11->value.len + 1;

        return VAR_9;
    }

    if (VAR_12->type == VAR_6) {
        struct lwan_var_descriptor *VAR_14 =
            FUNC_4(VAR_10, VAR_11);
        if (!VAR_14) {
            return FUNC_1(VAR_11, "Unknown variable: %.*s",
                                (int)VAR_11->value.len, VAR_11->value.value);
        }

        enum flags VAR_15 = VAR_3 | (VAR_10->flags & VAR_2);
        FUNC_0(VAR_10, VAR_0, VAR_15, VAR_14);
        FUNC_3(VAR_10, VAR_11);

        VAR_10->flags &= ~VAR_2;

        return VAR_8;
    }

    return FUNC_5(VAR_12);
}
