
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_alg_region {int dummy; } ;
struct wm_adsp {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct wm_adsp_alg_region*) ;
 int FUNC_1 (struct wm_adsp_alg_region*) ;
 struct wm_adsp_alg_region* FUNC_2 (struct wm_adsp*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wm_adsp *VAR_0, __be32 VAR_1, int VAR_2,
    int *VAR_3, __be32 *VAR_4)
{
 struct wm_adsp_alg_region *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_2(VAR_0, VAR_3[VAR_6], VAR_1, VAR_4[VAR_6]);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
 }

 return 0;
}
