
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int force_shmem; scalar_t__ scale_cy; scalar_t__ scale_cx; int force_scaling; int capture_overlays; } ;
struct game_capture {TYPE_2__* global_hook_info; TYPE_1__ config; scalar_t__ process_is_64bit; int global_hook_info_map; } ;
struct TYPE_4__ {int force_shmem; scalar_t__ cy; scalar_t__ cx; int use_scale; int capture_overlay; int offsets; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct game_capture*) ;
 int FUNC_6 (struct game_capture*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static inline bool FUNC_8(struct game_capture *VAR_3)
{
 VAR_3->global_hook_info_map = FUNC_5(VAR_3);
 if (!VAR_3->global_hook_info_map) {
  FUNC_7("init_hook_info: get_hook_info failed: %lu",
       FUNC_0());
  return 0;
 }

 VAR_3->global_hook_info = FUNC_1(VAR_3->global_hook_info_map,
          VAR_0, 0, 0,
          sizeof(*VAR_3->global_hook_info));
 if (!VAR_3->global_hook_info) {
  FUNC_7("init_hook_info: failed to map data view: %lu",
       FUNC_0());
  return 0;
 }

 if (VAR_3->config.force_shmem) {
  FUNC_7("init_hook_info: user is forcing shared memory "
       "(multi-adapter compatibility mode)");
 }

 VAR_3->global_hook_info->offsets = VAR_3->process_is_64bit ? VAR_2
            : VAR_1;
 VAR_3->global_hook_info->capture_overlay = VAR_3->config.capture_overlays;
 VAR_3->global_hook_info->force_shmem = VAR_3->config.force_shmem;
 VAR_3->global_hook_info->use_scale = VAR_3->config.force_scaling;
 if (VAR_3->config.scale_cx)
  VAR_3->global_hook_info->cx = VAR_3->config.scale_cx;
 if (VAR_3->config.scale_cy)
  VAR_3->global_hook_info->cy = VAR_3->config.scale_cy;
 FUNC_6(VAR_3);

 FUNC_3();
 if (!FUNC_2()) {
  FUNC_7("init_hook_info: shared texture capture unavailable");
  VAR_3->global_hook_info->force_shmem = 1;
 }
 FUNC_4();

 return 1;
}
