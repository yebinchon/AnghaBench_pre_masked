
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nFlags; int nCharOfs; int * clusters; scalar_t__ max_clusters; int * offsets; int * advances; int * vis_attrs; int * glyphs; scalar_t__ max_glyphs; scalar_t__ num_glyphs; int * para; scalar_t__ len; int * reobj; int * style; } ;
struct TYPE_7__ {TYPE_1__ run; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef int ME_Style ;
typedef TYPE_3__ ME_DisplayItem ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;

ME_DisplayItem *FUNC_2(ME_Style *VAR_1, int VAR_2)
{
  ME_DisplayItem *VAR_3 = FUNC_1(VAR_0);
  VAR_3->member.run.style = VAR_1;
  VAR_3->member.run.reobj = ((void*)0);
  VAR_3->member.run.nFlags = VAR_2;
  VAR_3->member.run.nCharOfs = -1;
  VAR_3->member.run.len = 0;
  VAR_3->member.run.para = ((void*)0);
  VAR_3->member.run.num_glyphs = 0;
  VAR_3->member.run.max_glyphs = 0;
  VAR_3->member.run.glyphs = ((void*)0);
  VAR_3->member.run.vis_attrs = ((void*)0);
  VAR_3->member.run.advances = ((void*)0);
  VAR_3->member.run.offsets = ((void*)0);
  VAR_3->member.run.max_clusters = 0;
  VAR_3->member.run.clusters = ((void*)0);
  FUNC_0(VAR_1);
  return VAR_3;
}
