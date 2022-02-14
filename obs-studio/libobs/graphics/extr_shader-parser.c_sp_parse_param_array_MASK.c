
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct shader_var {int array_count; } ;
struct TYPE_7__ {TYPE_2__* cur_token; } ;
struct shader_parser {TYPE_3__ cfp; } ;
struct TYPE_5__ {int array; int len; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct shader_parser *VAR_2,
     struct shader_var *VAR_3)
{
 if (!FUNC_1(&VAR_2->cfp))
  return 0;

 if (VAR_2->cfp.cur_token->type != VAR_0 ||
     !FUNC_3(VAR_2->cfp.cur_token->str.array,
      VAR_2->cfp.cur_token->str.len))
  return 0;

 VAR_3->array_count =
  (int)FUNC_2(VAR_2->cfp.cur_token->str.array, ((void*)0), 10);

 if (FUNC_0(&VAR_2->cfp, "]", ";", ((void*)0)) == VAR_1)
  return 0;

 if (!FUNC_1(&VAR_2->cfp))
  return 0;

 return 1;
}
