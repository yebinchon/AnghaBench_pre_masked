
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obs_module_path {int dummy; } ;
typedef int obs_find_module_callback_t ;
struct TYPE_3__ {size_t num; struct obs_module_path* array; } ;
struct TYPE_4__ {TYPE_1__ module_paths; } ;


 int FUNC_0 (struct obs_module_path*,int ,void*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(obs_find_module_callback_t VAR_1, void *VAR_2)
{
 if (!VAR_0)
  return;

 for (size_t VAR_3 = 0; VAR_3 < VAR_0->module_paths.num; VAR_3++) {
  struct obs_module_path *VAR_4 = VAR_0->module_paths.array + VAR_3;
  FUNC_0(VAR_4, VAR_1, VAR_2);
 }
}
