
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int stack_pos; int* stack; } ;
typedef enum parser_state { ____Placeholder_parser_state } parser_state ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1( struct parser *VAR_0, enum parser_state VAR_1 )
{
    FUNC_0( VAR_0->stack_pos < sizeof(VAR_0->stack)/sizeof(VAR_0->stack[0]) );
    VAR_0->stack[VAR_0->stack_pos++] = VAR_1;
}
