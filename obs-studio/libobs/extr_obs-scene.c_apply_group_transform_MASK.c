
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vec4 {int dummy; } ;
struct matrix4 {struct vec4 y; struct vec4 x; struct vec4 t; struct vec4 z; } ;
struct TYPE_6__ {float x; float y; } ;
struct TYPE_7__ {scalar_t__ rot; TYPE_1__ scale; int pos; int draw_transform; } ;
typedef TYPE_2__ obs_sceneitem_t ;


 int FUNC_0 (struct matrix4*,int *) ;
 int FUNC_1 (struct matrix4*,struct matrix4*,struct matrix4*) ;
 int FUNC_2 (int *,struct matrix4*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 float FUNC_4 (struct vec4*) ;
 int FUNC_5 (struct vec4*,float,float,float,float) ;

__attribute__((used)) static void FUNC_6(obs_sceneitem_t *VAR_0, obs_sceneitem_t *VAR_1)
{
 struct matrix4 VAR_2;
 struct matrix4 VAR_3;
 struct vec4 VAR_4;

 FUNC_5(&VAR_4, 1.0f, 0.0f, 0.0f, 0.0f);

 FUNC_0(&VAR_2, &VAR_1->draw_transform);

 FUNC_2(&VAR_0->pos, &VAR_2);
 FUNC_5(&VAR_2.t, 0.0f, 0.0f, 0.0f, 1.0f);

 FUNC_5(&VAR_3.x, VAR_0->scale.x, 0.0f, 0.0f, 0.0f);
 FUNC_5(&VAR_3.y, 0.0f, VAR_0->scale.y, 0.0f, 0.0f);
 FUNC_5(&VAR_3.z, 0.0f, 0.0f, 1.0f, 0.0f);
 FUNC_5(&VAR_3.t, 0.0f, 0.0f, 0.0f, 1.0f);
 FUNC_1(&VAR_3, &VAR_3, &VAR_2);

 VAR_0->scale.x =
  FUNC_4(&VAR_3.x) * (VAR_0->scale.x > 0.0f ? 1.0f : -1.0f);
 VAR_0->scale.y =
  FUNC_4(&VAR_3.y) * (VAR_0->scale.y > 0.0f ? 1.0f : -1.0f);
 VAR_0->rot -= VAR_1->rot;

 FUNC_3(VAR_0, 0);
}
