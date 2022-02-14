
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int dummy; } ;
struct effect_parser {int cfp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct effect_parser*,struct ep_param*) ;

__attribute__((used)) static inline bool FUNC_2(struct effect_parser *VAR_1,
      struct ep_param *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2) != VAR_0)
  return 0;

 if (!FUNC_0(&VAR_1->cfp))
  return 0;

 return 1;
}
