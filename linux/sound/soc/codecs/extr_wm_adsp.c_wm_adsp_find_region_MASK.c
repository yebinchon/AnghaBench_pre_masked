
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_region {int type; } ;
struct wm_adsp {int num_mems; struct wm_adsp_region const* mem; } ;



__attribute__((used)) static struct wm_adsp_region const *FUNC_0(struct wm_adsp *VAR_0,
       int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_mems; VAR_2++)
  if (VAR_0->mem[VAR_2].type == VAR_1)
   return &VAR_0->mem[VAR_2];

 return ((void*)0);
}
