
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int default_val; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,long*,int) ;

__attribute__((used)) static inline int FUNC_4(struct effect_parser *VAR_2,
          struct ep_param *VAR_3)
{
 if (!FUNC_1(&VAR_2->cfp))
  return VAR_0;

 if (FUNC_2(&VAR_2->cfp, "true")) {
  long VAR_4 = 1;
  FUNC_3(VAR_3->default_val, &VAR_4, sizeof(long));
  return VAR_1;
 } else if (FUNC_2(&VAR_2->cfp, "false")) {
  long VAR_5 = 0;
  FUNC_3(VAR_3->default_val, &VAR_5, sizeof(long));
  return VAR_1;
 }

 FUNC_0(&VAR_2->cfp, "true or false");

 return VAR_0;
}
