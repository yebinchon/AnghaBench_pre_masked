
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;
struct TYPE_4__ {int da; } ;
struct cf_preprocessor {TYPE_2__ tokens; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*) ;
 int FUNC_1 (struct cf_preprocessor*,int *,struct cf_token**,int *,int *) ;
 int FUNC_2 (struct cf_preprocessor*,int,struct cf_token**) ;
 int FUNC_3 (struct cf_token**) ;
 int FUNC_4 (struct cf_token**,int) ;

__attribute__((used)) static void FUNC_5(struct cf_preprocessor *VAR_3, bool VAR_4,
     struct cf_token **VAR_5)
{
 bool VAR_6 = 1;
 bool VAR_7 = VAR_4;
 struct cf_token *VAR_8 = *VAR_5;

 while (VAR_8->type != VAR_1) {
  if (VAR_8->type != VAR_2 &&
      VAR_8->type != VAR_0) {
   if (VAR_7) {
    FUNC_0(VAR_3, VAR_8);
    if (!FUNC_3(&VAR_8))
     break;
   }

   if (VAR_6 && *VAR_8->str.array == '#') {
    FUNC_4(&VAR_8, 1);
    VAR_7 = 1;
    if (!FUNC_2(VAR_3, VAR_4, &VAR_8))
     break;

    continue;
   }

   VAR_6 = 0;
  }

  if (VAR_8->type == VAR_0) {
   VAR_6 = 1;
   VAR_7 = 0;
  } else if (VAR_8->type == VAR_1) {
   break;
  }

  FUNC_1(VAR_3, &VAR_3->tokens.da, &VAR_8, ((void*)0),
           ((void*)0));
 }

 *VAR_5 = VAR_8;
}
