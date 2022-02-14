
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int* stack; int stack_pos; } ;
typedef enum parser_state { ____Placeholder_parser_state } parser_state ;



__attribute__((used)) __inline static void FUNC_0( struct parser *VAR_0, enum parser_state VAR_1 )
{

  VAR_0->stack[VAR_0->stack_pos++] = VAR_1;
}
