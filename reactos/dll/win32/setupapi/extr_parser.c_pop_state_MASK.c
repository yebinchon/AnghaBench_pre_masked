
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {size_t stack_pos; int * stack; int state; } ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static inline void FUNC_1( struct parser *VAR_0 )
{
    FUNC_0( VAR_0->stack_pos );
    VAR_0->state = VAR_0->stack[--VAR_0->stack_pos];
}
