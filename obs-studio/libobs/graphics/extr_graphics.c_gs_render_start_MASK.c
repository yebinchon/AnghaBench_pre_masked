
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int capacity; int array; } ;
struct TYPE_13__ {int capacity; int array; } ;
struct TYPE_12__ {int capacity; int array; } ;
struct TYPE_16__ {int using_immediate; TYPE_5__* texverts; TYPE_4__ colors; TYPE_3__ norms; TYPE_2__ verts; TYPE_9__* vbd; int immediate_vertbuffer; } ;
typedef TYPE_6__ graphics_t ;
struct TYPE_17__ {TYPE_1__* tvarray; int colors; int normals; int points; } ;
struct TYPE_15__ {int capacity; int array; } ;
struct TYPE_11__ {int array; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_9__* FUNC_1 () ;
 TYPE_9__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* VAR_1 ;

void FUNC_5(bool VAR_2)
{
 graphics_t *VAR_3 = VAR_1;

 if (!FUNC_0("gs_render_start"))
  return;

 VAR_3->using_immediate = !VAR_2;
 FUNC_4(VAR_3);

 if (VAR_2) {
  VAR_3->vbd = FUNC_1();
 } else {
  VAR_3->vbd = FUNC_2(
   VAR_3->immediate_vertbuffer);
  FUNC_3(VAR_3->vbd->colors, 0xFF,
         sizeof(uint32_t) * VAR_0);

  VAR_3->verts.array = VAR_3->vbd->points;
  VAR_3->norms.array = VAR_3->vbd->normals;
  VAR_3->colors.array = VAR_3->vbd->colors;
  VAR_3->texverts[0].array = VAR_3->vbd->tvarray[0].array;

  VAR_3->verts.capacity = VAR_0;
  VAR_3->norms.capacity = VAR_0;
  VAR_3->colors.capacity = VAR_0;
  VAR_3->texverts[0].capacity = VAR_0;
 }
}
