
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp_alg_region {scalar_t__ base; int type; } ;
struct wm_coeff_ctl {scalar_t__ offset; struct wm_adsp_alg_region alg_region; struct wm_adsp* dsp; } ;
struct wm_adsp_region {int dummy; } ;
struct wm_adsp {TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* region_to_reg ) (struct wm_adsp_region const*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wm_adsp*,char*,int ) ;
 unsigned int FUNC_1 (struct wm_adsp_region const*,scalar_t__) ;
 struct wm_adsp_region* FUNC_2 (struct wm_adsp*,int ) ;

__attribute__((used)) static int FUNC_3(struct wm_coeff_ctl *VAR_1, unsigned int *VAR_2)
{
 const struct wm_adsp_alg_region *VAR_3 = &VAR_1->alg_region;
 struct wm_adsp *VAR_4 = VAR_1->dsp;
 const struct wm_adsp_region *VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3->type);
 if (!VAR_5) {
  FUNC_0(VAR_4, "No base for region %x\n",
    VAR_3->type);
  return -VAR_0;
 }

 *VAR_2 = VAR_4->ops->region_to_reg(VAR_5, VAR_1->alg_region.base + VAR_1->offset);

 return 0;
}
