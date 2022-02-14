
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int flags; } ;
struct lwan_var_descriptor {int list_desc; } ;
struct TYPE_2__ {int value; scalar_t__ len; } ;
struct lexeme {scalar_t__ type; TYPE_1__ value; } ;
typedef enum flags { ____Placeholder_flags } flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct parser*,int ,int,struct lwan_var_descriptor*) ;
 void* FUNC_1 (struct lexeme*,char*,...) ;
 int FUNC_2 (struct parser*,struct lexeme*) ;
 void* VAR_5 ;
 struct lwan_var_descriptor* FUNC_3 (struct parser*,struct lexeme*) ;
 int FUNC_4 (struct parser*,int ) ;
 void* FUNC_5 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_6(struct parser *VAR_6, struct lexeme *VAR_7)
{
    if (VAR_7->type == VAR_4) {
        enum flags VAR_8 = VAR_6->flags & VAR_2;
        struct lwan_var_descriptor *VAR_9 =
            FUNC_3(VAR_6, VAR_7);
        if (!VAR_9) {
            return FUNC_1(VAR_7, "Unknown variable: %.*s",
                                (int)VAR_7->value.len, VAR_7->value.value);
        }

        int VAR_10 = FUNC_4(VAR_6, VAR_9->list_desc);
        if (VAR_10 < 0) {
            if (VAR_10 == -VAR_1) {
                return FUNC_1(
                    VAR_7, "Couldn't find descriptor for variable `%.*s'",
                    (int)VAR_7->value.len, VAR_7->value.value);
            }
            return FUNC_1(VAR_7,
                                "Could not push symbol table (out of memory)");
        }

        FUNC_0(VAR_6, VAR_0, VAR_8 | VAR_3, VAR_9);

        FUNC_2(VAR_6, VAR_7);
        VAR_6->flags &= ~VAR_2;
        return VAR_5;
    }

    return FUNC_5(VAR_7);
}
