
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct game_capture {int * data; TYPE_1__* global_hook_info; int hook_data_map; int pitch; int cy; int cx; } ;
typedef enum capture_result { ____Placeholder_capture_result } capture_result ;
struct TYPE_2__ {int map_size; int map_id; int pitch; int cy; int cx; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct game_capture*,int ,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static inline enum capture_result FUNC_6(struct game_capture *VAR_5)
{
 VAR_5->cx = VAR_5->global_hook_info->cx;
 VAR_5->cy = VAR_5->global_hook_info->cy;
 VAR_5->pitch = VAR_5->global_hook_info->pitch;

 if (VAR_5->data) {
  FUNC_3(VAR_5->data);
  VAR_5->data = ((void*)0);
 }

 FUNC_0(VAR_5->hook_data_map);

 VAR_5->hook_data_map = FUNC_4(VAR_5, VAR_4,
          VAR_5->global_hook_info->map_id);
 if (!VAR_5->hook_data_map) {
  DWORD VAR_6 = FUNC_1();
  if (VAR_6 == 2) {
   return VAR_1;
  } else {
   FUNC_5("init_capture_data: failed to open file "
        "mapping: %lu",
        VAR_6);
  }
  return VAR_0;
 }

 VAR_5->data = FUNC_2(VAR_5->hook_data_map, VAR_3, 0, 0,
     VAR_5->global_hook_info->map_size);
 if (!VAR_5->data) {
  FUNC_5("init_capture_data: failed to map data view: %lu",
       FUNC_1());
  return VAR_0;
 }

 return VAR_2;
}
