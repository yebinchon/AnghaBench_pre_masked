
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct game_capture {int copy_texture; int texture; int cy; int cx; TYPE_2__* global_hook_info; scalar_t__ convert_16bit; TYPE_1__* shmem_data; scalar_t__ data; int ** texture_buffers; } ;
typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int tex1_offset; int tex2_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static inline bool FUNC_7(struct game_capture *VAR_3)
{
 enum gs_color_format VAR_4;

 VAR_3->texture_buffers[0] =
  (uint8_t *)VAR_3->data + VAR_3->shmem_data->tex1_offset;
 VAR_3->texture_buffers[1] =
  (uint8_t *)VAR_3->data + VAR_3->shmem_data->tex2_offset;

 VAR_3->convert_16bit = FUNC_3(VAR_3->global_hook_info->format);
 VAR_4 = VAR_3->convert_16bit
    ? VAR_0
    : FUNC_0(VAR_3->global_hook_info->format);

 FUNC_4();
 FUNC_2(VAR_3->texture);
 VAR_3->texture =
  FUNC_1(VAR_3->cx, VAR_3->cy, VAR_4, 1, ((void*)0), VAR_1);
 FUNC_5();

 if (!VAR_3->texture) {
  FUNC_6("init_shmem_capture: failed to create texture");
  return 0;
 }

 VAR_3->copy_texture = VAR_2;
 return 1;
}
