
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_alg_region {int type; int list; void* base; void* alg; } ;
struct wm_adsp {scalar_t__ fw_ver; int alg_regions; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct wm_adsp_alg_region* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 struct wm_adsp_alg_region* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct wm_adsp*,struct wm_adsp_alg_region*) ;

__attribute__((used)) static struct wm_adsp_alg_region *FUNC_5(struct wm_adsp *VAR_2,
       int VAR_3, __be32 VAR_4,
       __be32 VAR_5)
{
 struct wm_adsp_alg_region *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->type = VAR_3;
 VAR_6->alg = FUNC_1(VAR_4);
 VAR_6->base = FUNC_1(VAR_5);

 FUNC_3(&VAR_6->list, &VAR_2->alg_regions);

 if (VAR_2->fw_ver > 0)
  FUNC_4(VAR_2, VAR_6);

 return VAR_6;
}
