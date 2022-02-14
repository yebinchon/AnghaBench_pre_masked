
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;
struct cf_preprocessor {int dummy; } ;
struct cf_def {int macro; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*) ;
 int FUNC_1 (struct cf_def*,struct cf_token*) ;
 int FUNC_2 (struct cf_token**) ;
 int FUNC_3 (struct cf_token**,int) ;

__attribute__((used)) static bool FUNC_4(struct cf_preprocessor *VAR_2,
           struct cf_def *VAR_3,
           struct cf_token **VAR_4)
{
 struct cf_token *VAR_5 = *VAR_4;
 bool VAR_6 = 0;
 VAR_3->macro = 1;

 do {
  FUNC_3(&VAR_5, 1);
  if (VAR_5->type != VAR_0) {
   FUNC_0(VAR_2, VAR_5, "identifier");
   FUNC_2(&VAR_5);
   goto exit;
  }

  FUNC_1(VAR_3, VAR_5);

  FUNC_3(&VAR_5, 1);
  if (VAR_5->type != VAR_1 ||
      (*VAR_5->str.array != ',' &&
       *VAR_5->str.array != ')')) {

   FUNC_0(VAR_2, VAR_5, "',' or ')'");
   FUNC_2(&VAR_5);
   goto exit;
  }
 } while (*VAR_5->str.array != ')');


 FUNC_3(&VAR_5, 1);
 VAR_6 = 1;

exit:
 *VAR_4 = VAR_5;
 return VAR_6;
}
