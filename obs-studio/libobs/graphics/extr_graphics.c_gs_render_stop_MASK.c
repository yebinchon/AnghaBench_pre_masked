
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_vertbuffer_t ;
struct TYPE_6__ {size_t num; } ;
struct TYPE_5__ {int * vbd; int * immediate_vertbuffer; scalar_t__ using_immediate; TYPE_4__* texverts; TYPE_4__ verts; TYPE_4__ colors; TYPE_4__ norms; } ;
typedef TYPE_1__ graphics_t ;
typedef enum gs_draw_mode { ____Placeholder_gs_draw_mode } gs_draw_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (size_t,size_t) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

void FUNC_12(enum gs_draw_mode VAR_2)
{
 graphics_t *VAR_3 = VAR_1;
 size_t VAR_4, VAR_5;

 if (!FUNC_6("gs_render_stop"))
  return;

 VAR_5 = VAR_3->verts.num;
 if (!VAR_5) {
  if (!VAR_3->using_immediate) {
   FUNC_1(VAR_3->verts);
   FUNC_1(VAR_3->norms);
   FUNC_1(VAR_3->colors);
   for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    FUNC_1(VAR_3->texverts[VAR_4]);
   FUNC_7(VAR_3->vbd);
  }

  return;
 }

 if (VAR_3->norms.num &&
     (VAR_3->norms.num != VAR_3->verts.num)) {
  FUNC_0(VAR_0, "gs_render_stop: normal count does "
    "not match vertex count");
  VAR_5 = FUNC_10(VAR_5, VAR_3->norms.num);
 }

 if (VAR_3->colors.num &&
     (VAR_3->colors.num != VAR_3->verts.num)) {
  FUNC_0(VAR_0, "gs_render_stop: color count does "
    "not match vertex count");
  VAR_5 = FUNC_10(VAR_5, VAR_3->colors.num);
 }

 if (VAR_3->texverts[0].num &&
     (VAR_3->texverts[0].num != VAR_3->verts.num)) {
  FUNC_0(VAR_0, "gs_render_stop: texture vertex count does "
    "not match vertex count");
  VAR_5 = FUNC_10(VAR_5, VAR_3->texverts[0].num);
 }

 if (VAR_3->using_immediate) {
  FUNC_9(VAR_3->immediate_vertbuffer);

  FUNC_4(VAR_3->immediate_vertbuffer);
  FUNC_3(((void*)0));
  FUNC_2(VAR_2, 0, (uint32_t)VAR_5);

  FUNC_11(VAR_3);
 } else {
  gs_vertbuffer_t *VAR_6 = FUNC_5();

  FUNC_4(VAR_6);
  FUNC_3(((void*)0));
  FUNC_2(VAR_2, 0, 0);

  FUNC_8(VAR_6);
 }

 VAR_3->vbd = ((void*)0);
}
