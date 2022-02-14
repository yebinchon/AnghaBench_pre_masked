
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* array; size_t len; } ;
struct TYPE_5__ {int len; int array; } ;
struct cf_token {int type; TYPE_2__ unmerged_str; TYPE_1__ str; } ;
struct TYPE_7__ {char* offset; } ;
struct cf_lexer {TYPE_3__ base_lexer; int write_offset; } ;
struct TYPE_8__ {char* array; scalar_t__ len; } ;
struct base_token {TYPE_4__ text; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct base_token*) ;
 int FUNC_1 (struct base_token*,struct base_token*) ;
 int FUNC_2 (struct cf_token*,struct base_token*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct base_token*,struct base_token*) ;
 scalar_t__ FUNC_5 (struct cf_lexer*,struct cf_token*) ;
 scalar_t__ FUNC_6 (struct cf_lexer*,struct cf_token*) ;
 int FUNC_7 (struct cf_lexer*,TYPE_4__*) ;
 int FUNC_8 (struct cf_token*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,struct base_token*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool FUNC_11(struct cf_lexer *VAR_2, struct cf_token *VAR_3)
{
 struct base_token VAR_4, VAR_5;
 bool VAR_6 = 0;

 FUNC_0(&VAR_4);
 FUNC_0(&VAR_5);
 FUNC_8(VAR_3);

 while (FUNC_9(&VAR_2->base_lexer, &VAR_4, VAR_1)) {

  if (*VAR_4.text.array == '_')
   VAR_4.type = VAR_0;


  if (FUNC_3(VAR_4.text.array)) {
   VAR_2->base_lexer.offset +=
    FUNC_10(VAR_4.text.array + 1);
   continue;
  }

  if (!VAR_6) {
   VAR_3->unmerged_str.array = VAR_4.text.array;
   VAR_3->str.array = VAR_2->write_offset;


   if (FUNC_5(VAR_2, VAR_3))
    return 1;


   if (FUNC_6(VAR_2, VAR_3))
    return 1;

   FUNC_1(&VAR_5, &VAR_4);
   VAR_6 = 1;

  } else if (FUNC_4(&VAR_5, &VAR_4)) {
   VAR_2->base_lexer.offset -= VAR_4.text.len;
   break;
  }


  FUNC_7(VAR_2, &VAR_4.text);
  VAR_3->str.len += VAR_4.text.len;
 }

 if (VAR_6) {
  VAR_3->unmerged_str.len = (size_t)(
   VAR_2->base_lexer.offset - VAR_3->unmerged_str.array);
  VAR_3->type = FUNC_2(VAR_3, &VAR_5);
 }

 return VAR_6;
}
