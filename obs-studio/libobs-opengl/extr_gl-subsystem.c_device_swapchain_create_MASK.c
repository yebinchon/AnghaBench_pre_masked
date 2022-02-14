
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_init_data {int dummy; } ;
struct gs_swap_chain {int wi; struct gs_init_data info; int * device; } ;
typedef struct gs_swap_chain gs_swapchain_t ;
typedef int gs_device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct gs_swap_chain* FUNC_1 (int) ;
 int FUNC_2 (struct gs_swap_chain*) ;
 int FUNC_3 (struct gs_init_data const*) ;
 int FUNC_4 (struct gs_swap_chain*) ;

gs_swapchain_t *FUNC_5(gs_device_t *VAR_1,
     const struct gs_init_data *VAR_2)
{
 struct gs_swap_chain *VAR_3 = FUNC_1(sizeof(struct gs_swap_chain));

 VAR_3->device = VAR_1;
 VAR_3->info = *VAR_2;
 VAR_3->wi = FUNC_3(VAR_2);
 if (!VAR_3->wi) {
  FUNC_0(VAR_0, "device_swapchain_create (GL) failed");
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 if (!FUNC_2(VAR_3)) {
  FUNC_0(VAR_0, "gl_platform_init_swapchain  failed");
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
