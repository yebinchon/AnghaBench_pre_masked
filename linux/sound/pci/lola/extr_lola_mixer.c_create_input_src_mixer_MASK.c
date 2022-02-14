
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola {int card; int input_src_caps_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct lola*) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_1)
{
 if (!VAR_1->input_src_caps_mask)
  return 0;

 return FUNC_0(VAR_1->card,
      FUNC_1(&VAR_0, VAR_1));
}
