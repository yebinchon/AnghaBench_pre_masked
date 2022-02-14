
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int array; } ;
struct cf_token {TYPE_2__ unmerged_str; } ;
struct cf_preprocessor {TYPE_1__* lex; } ;
struct TYPE_3__ {int base_lexer; } ;


 int FUNC_0 (int *,int ,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct cf_preprocessor *VAR_0,
         const struct cf_token *VAR_1,
         uint32_t *VAR_2, uint32_t *VAR_3)
{
 FUNC_0(&VAR_0->lex->base_lexer, VAR_1->unmerged_str.array, VAR_2,
      VAR_3);
}
