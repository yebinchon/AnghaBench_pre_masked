
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_1(struct wm_adsp *VAR_3)
{
 return FUNC_0(VAR_3->regmap, VAR_3->base + VAR_0,
     VAR_1 | VAR_2,
     VAR_1 | VAR_2);
}
