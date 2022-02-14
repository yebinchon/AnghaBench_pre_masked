
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_module_pin {int is_dynamic; } ;



__attribute__((used)) static void FUNC_0(
  struct skl_module_pin *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_0[VAR_3].is_dynamic = VAR_2;
}
