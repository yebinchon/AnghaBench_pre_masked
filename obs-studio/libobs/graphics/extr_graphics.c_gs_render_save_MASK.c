
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct gs_tvertarray {int dummy; } ;
typedef int gs_vertbuffer_t ;
struct TYPE_14__ {scalar_t__ num; int array; } ;
struct TYPE_13__ {int array; } ;
struct TYPE_12__ {int array; } ;
struct TYPE_16__ {TYPE_8__* vbd; TYPE_4__* texverts; TYPE_3__ verts; TYPE_2__ colors; TYPE_1__ norms; scalar_t__ using_immediate; } ;
typedef TYPE_5__ graphics_t ;
struct TYPE_17__ {size_t num_tex; TYPE_10__* tvarray; scalar_t__ num; int colors; int normals; int points; } ;
struct TYPE_15__ {int array; int num; } ;
struct TYPE_11__ {int width; int array; } ;


 TYPE_10__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_8__*) ;
 int * FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* VAR_0 ;

gs_vertbuffer_t *FUNC_5(void)
{
 graphics_t *VAR_1 = VAR_0;
 size_t VAR_2, VAR_3;

 if (!FUNC_1("gs_render_save"))
  return ((void*)0);
 if (VAR_1->using_immediate)
  return ((void*)0);

 if (!VAR_1->verts.num) {
  FUNC_2(VAR_1->vbd);
  return ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  if (!VAR_1->texverts[VAR_2].num)
   break;

 VAR_1->vbd->points = VAR_1->verts.array;
 VAR_1->vbd->normals = VAR_1->norms.array;
 VAR_1->vbd->colors = VAR_1->colors.array;
 VAR_1->vbd->num = VAR_1->verts.num;
 VAR_1->vbd->num_tex = VAR_2;

 if (VAR_1->vbd->num_tex) {
  VAR_1->vbd->tvarray =
   FUNC_0(sizeof(struct gs_tvertarray) * VAR_2);

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   VAR_1->vbd->tvarray[VAR_3].width = 2;
   VAR_1->vbd->tvarray[VAR_3].array =
    VAR_1->texverts[VAR_3].array;
  }
 }

 FUNC_4(VAR_1);

 return FUNC_3(VAR_1->vbd, 0);
}
