
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int vframe_info_buffer; int textures_copied; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct obs_core_video *VAR_1 = &VAR_0->video;
 FUNC_1(VAR_1->textures_copied, 0, sizeof(VAR_1->textures_copied));
 FUNC_0(&VAR_1->vframe_info_buffer);
}
