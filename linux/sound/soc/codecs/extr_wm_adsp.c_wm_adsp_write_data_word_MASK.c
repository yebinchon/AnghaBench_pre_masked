
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wm_adsp_region {int dummy; } ;
struct wm_adsp {int regmap; TYPE_1__* ops; } ;
typedef int data ;
struct TYPE_2__ {unsigned int (* region_to_reg ) (struct wm_adsp_region const*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,int*,int) ;
 unsigned int FUNC_2 (struct wm_adsp_region const*,unsigned int) ;
 struct wm_adsp_region* FUNC_3 (struct wm_adsp*,int) ;

__attribute__((used)) static int FUNC_4(struct wm_adsp *VAR_1, int VAR_2,
       unsigned int VAR_3, u32 VAR_4)
{
 struct wm_adsp_region const *VAR_5 = FUNC_3(VAR_1, VAR_2);
 unsigned int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_1->ops->region_to_reg(VAR_5, VAR_3);

 VAR_4 = FUNC_0(VAR_4 & 0x00ffffffu);

 return FUNC_1(VAR_1->regmap, VAR_6, &VAR_4, sizeof(VAR_4));
}
