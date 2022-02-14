
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rtoffset; TYPE_3__* root; } ;
typedef TYPE_2__ fix_scan_expr_context ;
struct TYPE_9__ {scalar_t__ multiexpr_params; scalar_t__ minmax_aggs; TYPE_1__* glob; } ;
struct TYPE_7__ {scalar_t__ lastPHId; } ;
typedef TYPE_3__ PlannerInfo ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static Node *
FUNC_2(PlannerInfo *VAR_1, Node *VAR_2, int VAR_3)
{
 fix_scan_expr_context VAR_4;

 VAR_4.root = VAR_1;
 VAR_4.rtoffset = VAR_3;

 if (VAR_3 != 0 ||
  VAR_1->multiexpr_params != VAR_0 ||
  VAR_1->glob->lastPHId != 0 ||
  VAR_1->minmax_aggs != VAR_0)
 {
  return FUNC_0(VAR_2, &VAR_4);
 }
 else
 {
  (void) FUNC_1(VAR_2, &VAR_4);
  return VAR_2;
 }
}
