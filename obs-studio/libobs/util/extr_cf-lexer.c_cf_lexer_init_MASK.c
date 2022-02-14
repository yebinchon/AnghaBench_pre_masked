
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_lexer {int unexpected_eof; int * write_offset; int * reformatted; int * file; int tokens; int base_lexer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cf_lexer *VAR_0)
{
 FUNC_1(&VAR_0->base_lexer);
 FUNC_0(VAR_0->tokens);

 VAR_0->file = ((void*)0);
 VAR_0->reformatted = ((void*)0);
 VAR_0->write_offset = ((void*)0);
 VAR_0->unexpected_eof = 0;
}
