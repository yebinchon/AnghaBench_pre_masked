
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;
struct cf_preprocessor {int defines; scalar_t__ ignore_state; } ;
struct TYPE_4__ {int da; } ;
struct cf_def {TYPE_2__ tokens; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cf_preprocessor*,int *,int *) ;
 int FUNC_2 (struct cf_preprocessor*,struct cf_token*,char*) ;
 int FUNC_3 (struct cf_def*,int ) ;
 int FUNC_4 (struct cf_def*) ;
 int FUNC_5 (struct cf_def*) ;
 int FUNC_6 (struct cf_preprocessor*,struct cf_def*,struct cf_token**) ;
 int FUNC_7 (int *,struct cf_token*) ;
 int FUNC_8 (int ,struct cf_def*) ;
 int FUNC_9 (struct cf_token**) ;
 int FUNC_10 (struct cf_token**,int) ;

__attribute__((used)) static void FUNC_11(struct cf_preprocessor *VAR_3,
     struct cf_token **VAR_4)
{
 struct cf_token *VAR_5 = *VAR_4;
 struct cf_def VAR_6;

 if (VAR_3->ignore_state) {
  FUNC_9(VAR_4);
  return;
 }

 FUNC_5(&VAR_6);

 FUNC_10(&VAR_5, 1);
 if (VAR_5->type != VAR_0) {
  FUNC_2(VAR_3, VAR_5, "identifier");
  FUNC_9(&VAR_5);
  goto exit;
 }

 FUNC_1(VAR_3, &VAR_6.tokens.da, ((void*)0));
 FUNC_7(&VAR_6.name, VAR_5);

 if (!FUNC_10(&VAR_5, 1))
  goto complete;


 if (*VAR_5->str.array == '(') {
  if (!FUNC_6(VAR_3, &VAR_6, &VAR_5))
   goto error;
 }

 while (VAR_5->type != VAR_1 &&
        VAR_5->type != VAR_2)
  FUNC_3(&VAR_6, VAR_5++);

complete:
 FUNC_0(&VAR_6.tokens.da);
 FUNC_1(VAR_3, &VAR_6.tokens.da, ((void*)0));
 FUNC_8(VAR_3->defines, &VAR_6);
 goto exit;

error:
 FUNC_4(&VAR_6);

exit:
 *VAR_4 = VAR_5;
}
