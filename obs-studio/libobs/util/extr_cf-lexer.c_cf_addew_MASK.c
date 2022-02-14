
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dstr {char const* array; } ;
struct cf_token {TYPE_1__* lex; } ;
struct cf_preprocessor {int ed; } ;
struct TYPE_2__ {int file; } ;


 int FUNC_0 (struct cf_preprocessor*,struct cf_token const*,int *,int *) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char const*,char const*,char const*,char const*,int *) ;
 int FUNC_4 (int ,int ,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_5(struct cf_preprocessor *VAR_0, const struct cf_token *VAR_1,
       const char *VAR_2, int VAR_3, const char *VAR_4,
       const char *VAR_5, const char *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 FUNC_0(VAR_0, VAR_1, &VAR_7, &VAR_8);

 if (!VAR_4 && !VAR_5 && !VAR_6) {
  FUNC_4(VAR_0->ed, VAR_1->lex->file, VAR_7, VAR_8, VAR_2,
          VAR_3);
 } else {
  struct dstr VAR_9;
  FUNC_2(&VAR_9);
  FUNC_3(&VAR_9, VAR_2, VAR_4, VAR_5, VAR_6, ((void*)0));

  FUNC_4(VAR_0->ed, VAR_1->lex->file, VAR_7, VAR_8,
          VAR_9.array, VAR_3);
  FUNC_1(&VAR_9);
 }
}
