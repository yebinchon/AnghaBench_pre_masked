
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int text; int offset; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct lexer*) ;

__attribute__((used)) static inline void FUNC_2(struct lexer *VAR_0, const char *VAR_1)
{
 FUNC_1(VAR_0);
 VAR_0->text = FUNC_0(VAR_1);
 VAR_0->offset = VAR_0->text;
}
