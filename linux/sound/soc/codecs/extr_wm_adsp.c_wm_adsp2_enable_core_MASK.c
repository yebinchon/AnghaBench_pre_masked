
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct wm_adsp*) ;

__attribute__((used)) static int FUNC_2(struct wm_adsp *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_2->base + VAR_0,
           VAR_1, VAR_1);
 if (VAR_3 != 0)
  return VAR_3;

 return FUNC_1(VAR_2);
}
