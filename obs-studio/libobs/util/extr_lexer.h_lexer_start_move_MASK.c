
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {char* text; char* offset; } ;


 int FUNC_0 (struct lexer*) ;

__attribute__((used)) static inline void FUNC_1(struct lexer *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->text = VAR_1;
 VAR_0->offset = VAR_0->text;
}
