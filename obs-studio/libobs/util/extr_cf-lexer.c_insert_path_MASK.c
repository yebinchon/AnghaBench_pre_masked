
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dstr {int member_0; } ;
struct cf_preprocessor {TYPE_1__* lex; } ;
struct TYPE_2__ {char* file; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*,int ,struct dstr*) ;
 int FUNC_2 (struct dstr*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static inline void FUNC_4(struct cf_preprocessor *VAR_0,
          struct dstr *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;

 if (VAR_0 && VAR_0->lex && VAR_0->lex->file) {
  VAR_2 = VAR_0->lex->file;
  VAR_3 = FUNC_3(VAR_2, '/');
  if (VAR_3) {
   struct dstr VAR_4 = {0};
   FUNC_2(&VAR_4, VAR_2, VAR_3 - VAR_2 + 1);
   FUNC_1(VAR_1, 0, &VAR_4);
   FUNC_0(&VAR_4);
  }
 }
}
