
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_rel_visible; int p_cols_visible; int p_lateral_only; int p_lateral_ok; int * p_rte; } ;
typedef int RangeTblEntry ;
typedef TYPE_1__ ParseNamespaceItem ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static ParseNamespaceItem *
FUNC_1(RangeTblEntry *VAR_0, bool VAR_1, bool VAR_2,
      bool VAR_3, bool VAR_4)
{
 ParseNamespaceItem *VAR_5;

 VAR_5 = (ParseNamespaceItem *) FUNC_0(sizeof(ParseNamespaceItem));
 VAR_5->p_rte = VAR_0;
 VAR_5->p_rel_visible = VAR_1;
 VAR_5->p_cols_visible = VAR_2;
 VAR_5->p_lateral_only = VAR_3;
 VAR_5->p_lateral_ok = VAR_4;
 return VAR_5;
}
