
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {int array; scalar_t__ len; } ;
struct TYPE_3__ {int array; } ;
struct cf_token {TYPE_1__ str; } ;
struct TYPE_4__ {size_t num; struct cf_lexer* array; } ;
struct cf_preprocessor {TYPE_2__ dependencies; } ;
struct cf_lexer {int file; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct cf_preprocessor*,struct cf_token const*,char*,int ,int *,int *) ;
 struct cf_token* FUNC_2 (struct cf_lexer*) ;
 int FUNC_3 (struct cf_lexer*) ;
 int FUNC_4 (struct cf_lexer*,char*,int ) ;
 int FUNC_5 (struct cf_preprocessor*,int,struct cf_token**) ;
 int FUNC_6 (TYPE_2__,struct cf_lexer*) ;
 int FUNC_7 (struct dstr*,TYPE_1__*) ;
 int FUNC_8 (struct dstr*) ;
 int FUNC_9 (struct dstr*) ;
 int FUNC_10 (struct dstr*,struct dstr*,int,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cf_preprocessor*,struct dstr*) ;
 int * FUNC_13 (int ,char*) ;
 int FUNC_14 (int *,char**) ;
 scalar_t__ FUNC_15 (int ,int ) ;

__attribute__((used)) static void FUNC_16(struct cf_preprocessor *VAR_0,
       const struct cf_token *VAR_1)
{
 struct cf_lexer VAR_2;
 struct dstr VAR_3;
 FILE *VAR_4;
 char *VAR_5;
 struct cf_token *VAR_6;
 size_t VAR_7;

 FUNC_9(&VAR_3);
 FUNC_7(&VAR_3, &VAR_1->str);
 FUNC_10(&VAR_3, &VAR_3, 1, VAR_3.len - 2);
 FUNC_12(VAR_0, &VAR_3);


 for (VAR_7 = 0; VAR_7 < VAR_0->dependencies.num; VAR_7++) {
  struct cf_lexer *VAR_8 = VAR_0->dependencies.array + VAR_7;

  if (FUNC_15(VAR_8->file, VAR_3.array) == 0) {
   VAR_6 = FUNC_2(VAR_8);
   FUNC_5(VAR_0, 0, &VAR_6);
   goto exit;
  }
 }

 VAR_4 = FUNC_13(VAR_3.array, "rb");
 if (!VAR_4) {
  FUNC_1(VAR_0, VAR_1, "Could not open file '$1'",
       VAR_1->str.array, ((void*)0), ((void*)0));
  goto exit;
 }

 FUNC_14(VAR_4, &VAR_5);
 FUNC_11(VAR_4);

 FUNC_3(&VAR_2);
 FUNC_4(&VAR_2, VAR_5, VAR_3.array);
 VAR_6 = FUNC_2(&VAR_2);
 FUNC_5(VAR_0, 0, &VAR_6);
 FUNC_0(VAR_5);

 FUNC_6(VAR_0->dependencies, &VAR_2);

exit:
 FUNC_8(&VAR_3);
}
