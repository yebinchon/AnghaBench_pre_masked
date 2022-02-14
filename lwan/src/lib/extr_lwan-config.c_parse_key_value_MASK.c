
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int items; int strbuf; int lexer; int buffer; } ;
struct TYPE_2__ {scalar_t__ len; int value; } ;
struct lexeme {int type; TYPE_1__ value; } ;
struct config_line {int key; int value; int type; } ;


 int VAR_0 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct config_line*) ;
 struct lexeme* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct lexeme* FUNC_4 (int *) ;
 int * VAR_1 ;
 int FUNC_5 (char*,int,int ,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *) ;
 size_t FUNC_11 (int *) ;
 void* VAR_2 ;
 char* FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void *FUNC_13(struct parser *VAR_3)
{
    struct config_line VAR_4 = {.type = VAR_0};
    const struct lexeme *VAR_5;
    size_t VAR_6;

    while ((VAR_5 = FUNC_4(&VAR_3->buffer))) {
        FUNC_8(&VAR_3->strbuf, VAR_5->value.value,
                               VAR_5->value.len);

        if (!FUNC_3(&VAR_3->buffer))
            FUNC_7(&VAR_3->strbuf, '_');
    }
    VAR_6 = FUNC_11(&VAR_3->strbuf);
    FUNC_7(&VAR_3->strbuf, '\0');

    while ((VAR_5 = FUNC_2(&VAR_3->lexer))) {
        switch (VAR_5->type) {
        case 128:
        case 129: {
            const char *VAR_7;

            VAR_7 = FUNC_12(VAR_5->value.value, VAR_5->value.len);
            if (VAR_5->type == 129) {
                if (!VAR_7) {
                    FUNC_6(
                        "Variable '$%.*s' not defined in environment",
                        (int)VAR_5->value.len, VAR_5->value.value);
                    return ((void*)0);
                } else {
                    FUNC_9(&VAR_3->strbuf, VAR_7);
                }
            } else {
                const struct lexeme *VAR_8 = VAR_5;

                if (!(VAR_5 = FUNC_2(&VAR_3->lexer))) {
                    FUNC_6(
                        "Default value for variable '$%.*s' not given",
                        (int)VAR_8->value.len, VAR_8->value.value);
                    return ((void*)0);
                }

                if (VAR_5->type != 130) {
                    FUNC_6("Wrong format for default value");
                    return ((void*)0);
                }

                if (!VAR_7) {
                    FUNC_5(
                        "Using default value of '%.*s' for variable '${%.*s}'",
                        (int)VAR_5->value.len, VAR_5->value.value,
                        (int)VAR_8->value.len, VAR_8->value.value);
                    FUNC_8(&VAR_3->strbuf, VAR_5->value.value,
                                           VAR_5->value.len);
                } else {
                    FUNC_9(&VAR_3->strbuf, VAR_7);
                }
            }

            break;
        }

        case 132:
            FUNC_7(&VAR_3->strbuf, '=');
            break;

        case 130:
            FUNC_8(&VAR_3->strbuf, VAR_5->value.value,
                                   VAR_5->value.len);
            break;

        case 133:
            FUNC_0(&VAR_3->lexer);


        case 131:
            VAR_4.key = FUNC_10(&VAR_3->strbuf);
            VAR_4.value = VAR_4.key + VAR_6 + 1;
            return FUNC_1(&VAR_3->items, &VAR_4)
                       ? VAR_2
                       : ((void*)0);

        default:
            FUNC_6("Unexpected token while parsing key-value: %s",
                              VAR_1[VAR_5->type]);
            return ((void*)0);
        }
    }

    FUNC_6("EOF while parsing key-value");
    return ((void*)0);
}
