
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vec4 {int dummy; } ;
struct vec2 {float x; float y; } ;
struct matrix4 {struct vec4 y; struct vec4 x; struct vec4 t; struct vec4 z; } ;
struct TYPE_3__ {scalar_t__ rot; int draw_transform; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (struct matrix4*,int *) ;
 int FUNC_1 (struct matrix4*,struct matrix4*,struct matrix4*) ;
 int FUNC_2 (struct vec2*,struct matrix4*) ;
 float FUNC_3 (struct vec4*) ;
 int FUNC_4 (struct vec4*,float,float,float,float) ;

__attribute__((used)) static void FUNC_5(obs_sceneitem_t *VAR_0, struct vec2 *VAR_1,
        struct vec2 *VAR_2, float *VAR_3)
{
 struct matrix4 VAR_4;
 struct matrix4 VAR_5;
 struct vec4 VAR_6;

 FUNC_4(&VAR_6, 1.0f, 0.0f, 0.0f, 0.0f);

 FUNC_0(&VAR_4, &VAR_0->draw_transform);

 FUNC_2(VAR_1, &VAR_4);
 FUNC_4(&VAR_4.t, 0.0f, 0.0f, 0.0f, 1.0f);

 FUNC_4(&VAR_5.x, VAR_2->x, 0.0f, 0.0f, 0.0f);
 FUNC_4(&VAR_5.y, 0.0f, VAR_2->y, 0.0f, 0.0f);
 FUNC_4(&VAR_5.z, 0.0f, 0.0f, 1.0f, 0.0f);
 FUNC_4(&VAR_5.t, 0.0f, 0.0f, 0.0f, 1.0f);
 FUNC_1(&VAR_5, &VAR_5, &VAR_4);

 VAR_2->x = FUNC_3(&VAR_5.x) * (VAR_2->x > 0.0f ? 1.0f : -1.0f);
 VAR_2->y = FUNC_3(&VAR_5.y) * (VAR_2->y > 0.0f ? 1.0f : -1.0f);
 *VAR_3 += VAR_0->rot;
}
