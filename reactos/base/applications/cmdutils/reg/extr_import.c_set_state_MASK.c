
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int state; } ;
typedef enum parser_state { ____Placeholder_parser_state } parser_state ;



__attribute__((used)) static inline enum parser_state FUNC_0(struct parser *VAR_0, enum parser_state VAR_1)
{
    enum parser_state VAR_2 = VAR_0->state;
    VAR_0->state = VAR_1;
    return VAR_2;
}
