
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int** audio_gain; } ;
struct vx_audio_level {int has_level; int level; } ;
typedef int info ;


 int FUNC_0 (struct vx_audio_level*,int ,int) ;
 int FUNC_1 (struct vx_core*,int,int,struct vx_audio_level*) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct vx_audio_level VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.has_level = 1;
 VAR_4.level = VAR_3;
 VAR_0->audio_gain[VAR_2][VAR_1] = VAR_3;
 return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
}
