
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ep_param {int default_val; } ;
struct TYPE_9__ {TYPE_2__* cur_token; } ;
struct effect_parser {TYPE_3__ cfp; } ;
struct TYPE_7__ {int array; } ;
struct TYPE_8__ {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,int ,char*,char*) ;
 int FUNC_4 (int ,...) ;
 scalar_t__ FUNC_5 (int ) ;
 long FUNC_6 (int ,int *,int) ;

__attribute__((used)) static inline int FUNC_7(struct effect_parser *VAR_3,
       struct ep_param *VAR_4,
       bool VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;

 if (!FUNC_1(&VAR_3->cfp))
  return VAR_1;

 if (FUNC_2(&VAR_3->cfp, "-")) {
  VAR_7 = 1;

  if (!FUNC_0(&VAR_3->cfp))
   return VAR_1;
 }

 VAR_6 = FUNC_3(&VAR_3->cfp, VAR_0, "numeric value", ";");
 if (VAR_6 != VAR_2)
  return VAR_6;

 if (VAR_5) {
  float VAR_8 = (float)FUNC_5(VAR_3->cfp.cur_token->str.array);
  if (VAR_7)
   VAR_8 = -VAR_8;
  FUNC_4(VAR_4->default_val, &VAR_8, sizeof(float));
 } else {
  long VAR_9 = FUNC_6(VAR_3->cfp.cur_token->str.array, ((void*)0), 10);
  if (VAR_7)
   VAR_9 = -VAR_9;
  FUNC_4(VAR_4->default_val, &VAR_9, sizeof(long));
 }

 return VAR_2;
}
