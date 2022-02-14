
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_module_path {void* data; void* bin; } ;
struct TYPE_2__ {int module_paths; } ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (int ,struct obs_module_path*) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(const char *VAR_1, const char *VAR_2)
{
 struct obs_module_path VAR_3;

 if (!VAR_0 || !VAR_1 || !VAR_2)
  return;

 VAR_3.bin = FUNC_0(VAR_1);
 VAR_3.data = FUNC_0(VAR_2);
 FUNC_1(VAR_0->module_paths, &VAR_3);
}
