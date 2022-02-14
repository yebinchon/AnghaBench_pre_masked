
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int texture_rendered; int texture_converted; scalar_t__ cur_texture; int vframe_info_buffer; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct obs_core_video *VAR_1 = &VAR_0->video;
 VAR_1->texture_rendered = 0;
 VAR_1->texture_converted = 0;
 FUNC_0(&VAR_1->vframe_info_buffer);
 VAR_1->cur_texture = 0;
}
