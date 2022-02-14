
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct wm_adsp *VAR_5)
{
 FUNC_1(VAR_5->regmap, VAR_5->base + VAR_1, 0);
 FUNC_1(VAR_5->regmap, VAR_5->base + VAR_3, 0);
 FUNC_1(VAR_5->regmap, VAR_5->base + VAR_4, 0);

 FUNC_0(VAR_5->regmap, VAR_5->base + VAR_0,
      VAR_2, 0);
}
