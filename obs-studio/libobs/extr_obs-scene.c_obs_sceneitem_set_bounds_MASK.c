
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vec2 {int dummy; } ;
struct TYPE_4__ {struct vec2 bounds; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(obs_sceneitem_t *VAR_0, const struct vec2 *VAR_1)
{
 if (VAR_0) {
  VAR_0->bounds = *VAR_1;
  FUNC_0(VAR_0);
 }
}
