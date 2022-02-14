
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vec2 {int dummy; } ;
struct TYPE_5__ {TYPE_4__* texverts; } ;
typedef TYPE_1__ graphics_t ;
struct TYPE_6__ {int num; } ;


 int FUNC_0 (TYPE_4__,struct vec2 const*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;

void FUNC_3(const struct vec2 *VAR_1, int VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_1("gs_texcoord2v"))
  return;
 if (!FUNC_2(VAR_3, VAR_3->texverts[VAR_2].num,
      "gs_texcoord"))
  return;

 FUNC_0(VAR_3->texverts[VAR_2], VAR_1);
}
