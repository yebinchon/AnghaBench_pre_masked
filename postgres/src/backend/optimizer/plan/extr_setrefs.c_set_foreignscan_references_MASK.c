
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_5__ {int * qual; int * targetlist; } ;
struct TYPE_6__ {scalar_t__ scanrelid; TYPE_1__ plan; } ;
struct TYPE_7__ {scalar_t__ fdw_scan_tlist; int * fs_relids; int * fdw_recheck_quals; int * fdw_exprs; TYPE_2__ scan; } ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;
typedef TYPE_3__ ForeignScan ;
typedef int Bitmapset ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(PlannerInfo *VAR_2,
         ForeignScan *VAR_3,
         int VAR_4)
{

 if (VAR_3->scan.scanrelid > 0)
  VAR_3->scan.scanrelid += VAR_4;

 if (VAR_3->fdw_scan_tlist != VAR_1 || VAR_3->scan.scanrelid == 0)
 {




  indexed_tlist *VAR_5 = FUNC_2(VAR_3->fdw_scan_tlist);

  VAR_3->scan.plan.targetlist = (List *)
   FUNC_4(VAR_2,
         (Node *) VAR_3->scan.plan.targetlist,
         VAR_5,
         VAR_0,
         VAR_4);
  VAR_3->scan.plan.qual = (List *)
   FUNC_4(VAR_2,
         (Node *) VAR_3->scan.plan.qual,
         VAR_5,
         VAR_0,
         VAR_4);
  VAR_3->fdw_exprs = (List *)
   FUNC_4(VAR_2,
         (Node *) VAR_3->fdw_exprs,
         VAR_5,
         VAR_0,
         VAR_4);
  VAR_3->fdw_recheck_quals = (List *)
   FUNC_4(VAR_2,
         (Node *) VAR_3->fdw_recheck_quals,
         VAR_5,
         VAR_0,
         VAR_4);
  FUNC_5(VAR_5);

  VAR_3->fdw_scan_tlist =
   FUNC_3(VAR_2, VAR_3->fdw_scan_tlist, VAR_4);
 }
 else
 {




  VAR_3->scan.plan.targetlist =
   FUNC_3(VAR_2, VAR_3->scan.plan.targetlist, VAR_4);
  VAR_3->scan.plan.qual =
   FUNC_3(VAR_2, VAR_3->scan.plan.qual, VAR_4);
  VAR_3->fdw_exprs =
   FUNC_3(VAR_2, VAR_3->fdw_exprs, VAR_4);
  VAR_3->fdw_recheck_quals =
   FUNC_3(VAR_2, VAR_3->fdw_recheck_quals, VAR_4);
 }


 if (VAR_4 > 0)
 {
  Bitmapset *VAR_6 = ((void*)0);
  int VAR_7 = -1;

  while ((VAR_7 = FUNC_1(VAR_3->fs_relids, VAR_7)) >= 0)
   VAR_6 = FUNC_0(VAR_6, VAR_7 + VAR_4);
  VAR_3->fs_relids = VAR_6;
 }
}
