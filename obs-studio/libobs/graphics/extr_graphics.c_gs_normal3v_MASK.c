
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vec3 {int dummy; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_5__ {TYPE_4__ norms; } ;
typedef TYPE_1__ graphics_t ;


 int FUNC_0 (TYPE_4__,struct vec3 const*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;

void FUNC_3(const struct vec3 *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_1("gs_normal3v"))
  return;
 if (!FUNC_2(VAR_2, VAR_2->norms.num, "gs_normal"))
  return;

 FUNC_0(VAR_2->norms, VAR_1);
}
