
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct highlight {float vfuzz; float hfuzz; int len; int cap; TYPE_3__* box; } ;
struct TYPE_6__ {int dir; } ;
typedef TYPE_1__ fz_stext_line ;
struct TYPE_8__ {int lr; int ur; int ul; int ll; } ;
struct TYPE_7__ {float size; TYPE_3__ quad; } ;
typedef TYPE_2__ fz_stext_char ;
typedef TYPE_3__ fz_quad ;
typedef int fz_context ;


 float FUNC_0 (int *,int *,int *) ;
 float FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, void *VAR_1, fz_stext_line *VAR_2, fz_stext_char *VAR_3)
{
 struct highlight *VAR_4 = VAR_1;
 float VAR_5 = VAR_3->size * VAR_4->vfuzz;
 float VAR_6 = VAR_3->size * VAR_4->hfuzz;

 if (VAR_4->len > 0)
 {
  fz_quad *VAR_7 = &VAR_4->box[VAR_4->len-1];
  if (FUNC_0(&VAR_2->dir, &VAR_7->lr, &VAR_3->quad.ll) < VAR_6
   && FUNC_1(&VAR_2->dir, &VAR_7->lr, &VAR_3->quad.ll) < VAR_5
   && FUNC_0(&VAR_2->dir, &VAR_7->ur, &VAR_3->quad.ul) < VAR_6
   && FUNC_1(&VAR_2->dir, &VAR_7->ur, &VAR_3->quad.ul) < VAR_5)
  {
   VAR_7->ur = VAR_3->quad.ur;
   VAR_7->lr = VAR_3->quad.lr;
   return;
  }
 }

 if (VAR_4->len < VAR_4->cap)
  VAR_4->box[VAR_4->len++] = VAR_3->quad;
}
