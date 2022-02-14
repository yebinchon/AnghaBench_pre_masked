
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ep_sampler {int values; int states; } ;
struct TYPE_8__ {TYPE_2__* cur_token; } ;
struct effect_parser {TYPE_3__ cfp; } ;
struct dstr {char* array; scalar_t__ len; int member_0; } ;
struct TYPE_6__ {char* array; int len; } ;
struct TYPE_7__ {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,char**,char*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,char*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char**) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char const*,int ) ;

__attribute__((used)) static int FUNC_7(struct effect_parser *VAR_2,
           struct ep_sampler *VAR_3)
{
 int VAR_4;
 char *VAR_5 = ((void*)0);
 struct dstr VAR_6 = {0};

 VAR_4 = FUNC_1(&VAR_2->cfp, &VAR_5, "state name", ";");
 if (VAR_4 != VAR_1)
  goto fail;

 VAR_4 = FUNC_2(&VAR_2->cfp, "=", ";", ((void*)0));
 if (VAR_4 != VAR_1)
  goto fail;

 for (;;) {
  const char *VAR_7;

  if (!FUNC_3(&VAR_2->cfp))
   return VAR_0;

  VAR_7 = VAR_2->cfp.cur_token->str.array;
  if (*VAR_7 == ';')
   break;

  FUNC_6(&VAR_6, VAR_7, VAR_2->cfp.cur_token->str.len);
 }

 if (VAR_6.len) {
  FUNC_4(VAR_3->states, &VAR_5);
  FUNC_4(VAR_3->values, &VAR_6.array);
 }

 return VAR_4;

fail:
 FUNC_0(VAR_5);
 FUNC_5(&VAR_6);
 return VAR_4;
}
