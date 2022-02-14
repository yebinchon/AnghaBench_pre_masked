
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct obs_video_info {int range; int colorspace; int output_format; } ;
struct obs_core_video {int color_matrix; } ;
struct matrix4 {struct vec4 y; struct vec4 x; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct matrix4*) ;
 int FUNC_2 (struct matrix4*,struct matrix4*) ;
 int FUNC_3 (int ,struct matrix4*,int) ;
 int FUNC_4 (int ,int ,float*,int *,int *) ;

__attribute__((used)) static inline void FUNC_5(struct obs_core_video *VAR_0,
        struct obs_video_info *VAR_1)
{
 struct matrix4 VAR_2;
 struct vec4 VAR_3;

 if (FUNC_0(VAR_1->output_format)) {
  FUNC_4(VAR_1->colorspace, VAR_1->range,
         (float *)&VAR_2, ((void*)0), ((void*)0));
  FUNC_2(&VAR_2, &VAR_2);


  VAR_3 = VAR_2.x;
  VAR_2.x = VAR_2.y;
  VAR_2.y = VAR_3;
 } else {
  FUNC_1(&VAR_2);
 }

 FUNC_3(VAR_0->color_matrix, &VAR_2, sizeof(float) * 16);
}
