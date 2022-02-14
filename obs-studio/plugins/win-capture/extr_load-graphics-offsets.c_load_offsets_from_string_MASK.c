
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {void* resize; void* present1; void* present; } ;
struct TYPE_5__ {void* is_d3d9ex_clsoff; void* d3d9_clsoff; void* present_swap; void* present_ex; void* present; } ;
struct TYPE_4__ {void* present; } ;
struct graphics_offsets {TYPE_3__ dxgi; TYPE_2__ d3d9; TYPE_1__ d3d8; } ;
typedef int config_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int **,char const*) ;

__attribute__((used)) static inline bool FUNC_3(struct graphics_offsets *VAR_1,
         const char *VAR_2)
{
 config_t *VAR_3;

 if (FUNC_2(&VAR_3, VAR_2) != VAR_0) {
  return 0;
 }

 VAR_1->d3d8.present =
  (uint32_t)FUNC_1(VAR_3, "d3d8", "present");

 VAR_1->d3d9.present =
  (uint32_t)FUNC_1(VAR_3, "d3d9", "present");
 VAR_1->d3d9.present_ex =
  (uint32_t)FUNC_1(VAR_3, "d3d9", "present_ex");
 VAR_1->d3d9.present_swap =
  (uint32_t)FUNC_1(VAR_3, "d3d9", "present_swap");
 VAR_1->d3d9.d3d9_clsoff =
  (uint32_t)FUNC_1(VAR_3, "d3d9", "d3d9_clsoff");
 VAR_1->d3d9.is_d3d9ex_clsoff =
  (uint32_t)FUNC_1(VAR_3, "d3d9", "is_d3d9ex_clsoff");

 VAR_1->dxgi.present =
  (uint32_t)FUNC_1(VAR_3, "dxgi", "present");
 VAR_1->dxgi.present1 =
  (uint32_t)FUNC_1(VAR_3, "dxgi", "present1");
 VAR_1->dxgi.resize =
  (uint32_t)FUNC_1(VAR_3, "dxgi", "resize");

 FUNC_0(VAR_3);
 return 1;
}
