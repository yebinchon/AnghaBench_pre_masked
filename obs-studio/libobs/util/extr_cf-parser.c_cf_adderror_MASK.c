
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dstr {char const* array; } ;
struct cf_parser {TYPE_3__* cur_token; int error_list; } ;
struct TYPE_4__ {int array; } ;
struct TYPE_6__ {TYPE_2__* lex; TYPE_1__ unmerged_str; } ;
struct TYPE_5__ {int file; int base_lexer; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char const*,char const*,char const*,char const*,int *) ;
 int FUNC_3 (int *,int ,int ,int ,char const*,int) ;
 int FUNC_4 (int *,int ,int *,int *) ;

void FUNC_5(struct cf_parser *VAR_0, const char *VAR_1, int VAR_2,
   const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 FUNC_4(&VAR_0->cur_token->lex->base_lexer,
      VAR_0->cur_token->unmerged_str.array, &VAR_6, &VAR_7);

 if (!VAR_3 && !VAR_4 && !VAR_5) {
  FUNC_3(&VAR_0->error_list, VAR_0->cur_token->lex->file, VAR_6,
          VAR_7, VAR_1, VAR_2);
 } else {
  struct dstr VAR_8;
  FUNC_1(&VAR_8);
  FUNC_2(&VAR_8, VAR_1, VAR_3, VAR_4, VAR_5, ((void*)0));

  FUNC_3(&VAR_0->error_list, VAR_0->cur_token->lex->file, VAR_6,
          VAR_7, VAR_8.array, VAR_2);

  FUNC_0(&VAR_8);
 }
}
