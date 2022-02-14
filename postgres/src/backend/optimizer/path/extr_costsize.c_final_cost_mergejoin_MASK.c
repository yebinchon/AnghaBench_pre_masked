
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_30__ {scalar_t__ inner_unique; } ;
struct TYPE_20__ {double rows; scalar_t__ parallel_workers; double startup_cost; double total_cost; TYPE_5__* pathtarget; TYPE_2__* parent; TYPE_1__* param_info; } ;
struct TYPE_21__ {scalar_t__ jointype; TYPE_11__ path; int * joinrestrictinfo; TYPE_7__* innerjoinpath; TYPE_7__* outerjoinpath; } ;
struct TYPE_29__ {int skip_mark_restore; int materialize_inner; TYPE_16__ jpath; int * path_mergeclauses; int * innersortkeys; } ;
struct TYPE_28__ {double rows; TYPE_3__* pathtarget; } ;
struct TYPE_27__ {double startup; double per_tuple; } ;
struct TYPE_25__ {double startup; int per_tuple; } ;
struct TYPE_26__ {TYPE_4__ cost; } ;
struct TYPE_24__ {int width; } ;
struct TYPE_23__ {double rows; } ;
struct TYPE_22__ {double ppi_rows; } ;
struct TYPE_19__ {double startup_cost; double run_cost; double inner_run_cost; double outer_rows; double inner_rows; double outer_skip_rows; double inner_skip_rows; } ;
typedef TYPE_6__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_7__ Path ;
typedef TYPE_8__ MergePath ;
typedef int List ;
typedef TYPE_9__ JoinPathExtraData ;
typedef TYPE_10__ JoinCostWorkspace ;
typedef double Cost ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 double FUNC_2 (int *,TYPE_16__*,int *) ;
 double FUNC_3 (double) ;
 int FUNC_4 (TYPE_6__*,int *,int *) ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 double FUNC_5 (TYPE_11__*) ;
 scalar_t__ FUNC_6 (double) ;
 scalar_t__ FUNC_7 (int *) ;
 long FUNC_8 (double,int ) ;
 long VAR_9 ;

void
FUNC_9(PlannerInfo *VAR_10, MergePath *VAR_11,
      JoinCostWorkspace *VAR_12,
      JoinPathExtraData *VAR_13)
{
 Path *VAR_14 = VAR_11->jpath.outerjoinpath;
 Path *VAR_15 = VAR_11->jpath.innerjoinpath;
 double VAR_16 = VAR_15->rows;
 List *VAR_17 = VAR_11->path_mergeclauses;
 List *VAR_18 = VAR_11->innersortkeys;
 Cost VAR_19 = VAR_12->startup_cost;
 Cost VAR_20 = VAR_12->run_cost;
 Cost VAR_21 = VAR_12->inner_run_cost;
 double VAR_22 = VAR_12->outer_rows;
 double VAR_23 = VAR_12->inner_rows;
 double VAR_24 = VAR_12->outer_skip_rows;
 double VAR_25 = VAR_12->inner_skip_rows;
 Cost VAR_26,
    VAR_27,
    VAR_28;
 QualCost VAR_29;
 QualCost VAR_30;
 double VAR_31,
    VAR_32;
 double VAR_33;


 if (VAR_16 <= 0 || FUNC_6(VAR_16))
  VAR_16 = 1;


 if (VAR_11->jpath.path.param_info)
  VAR_11->jpath.path.rows = VAR_11->jpath.path.param_info->ppi_rows;
 else
  VAR_11->jpath.path.rows = VAR_11->jpath.path.parent->rows;


 if (VAR_11->jpath.path.parallel_workers > 0)
 {
  double VAR_34 = FUNC_5(&VAR_11->jpath.path);

  VAR_11->jpath.path.rows =
   FUNC_3(VAR_11->jpath.path.rows / VAR_34);
 }






 if (!VAR_8)
  VAR_19 += VAR_6;





 FUNC_4(&VAR_29, VAR_17, VAR_10);
 FUNC_4(&VAR_30, VAR_11->jpath.joinrestrictinfo, VAR_10);
 VAR_30.startup -= VAR_29.startup;
 VAR_30.per_tuple -= VAR_29.per_tuple;







 if ((VAR_11->jpath.jointype == VAR_1 ||
   VAR_11->jpath.jointype == VAR_0 ||
   VAR_13->inner_unique) &&
  (FUNC_7(VAR_11->jpath.joinrestrictinfo) ==
   FUNC_7(VAR_11->path_mergeclauses)))
  VAR_11->skip_mark_restore = 1;
 else
  VAR_11->skip_mark_restore = 0;





 VAR_31 = FUNC_2(VAR_10, &VAR_11->jpath, VAR_17);
 if (FUNC_1(VAR_14, VAR_3) ||VAR_11->skip_mark_restore)
  VAR_32 = 0;
 else
 {
  VAR_32 = VAR_31 - VAR_16;

  if (VAR_32 < 0)
   VAR_32 = 0;
 }






 VAR_33 = 1.0 + (VAR_32 / VAR_23);
 VAR_27 = VAR_21 * VAR_33;
 VAR_28 = VAR_21 +
  VAR_4 * VAR_23 * VAR_33;




 if (VAR_11->skip_mark_restore)
  VAR_11->materialize_inner = 0;





 else if (VAR_7 && VAR_28 < VAR_27)
  VAR_11->materialize_inner = 1;
 else if (VAR_18 == VAR_2 &&
    !FUNC_0(VAR_15))
  VAR_11->materialize_inner = 1;
 else if (VAR_7 && VAR_18 != VAR_2 &&
    FUNC_8(VAR_16,
        VAR_15->pathtarget->width) >
    (VAR_9 * 1024L))
  VAR_11->materialize_inner = 1;
 else
  VAR_11->materialize_inner = 0;


 if (VAR_11->materialize_inner)
  VAR_20 += VAR_28;
 else
  VAR_20 += VAR_27;
 VAR_19 += VAR_29.startup;
 VAR_19 += VAR_29.per_tuple *
  (VAR_24 + VAR_25 * VAR_33);
 VAR_20 += VAR_29.per_tuple *
  ((VAR_22 - VAR_24) +
   (VAR_23 - VAR_25) * VAR_33);
 VAR_19 += VAR_30.startup;
 VAR_26 = VAR_5 + VAR_30.per_tuple;
 VAR_20 += VAR_26 * VAR_31;


 VAR_19 += VAR_11->jpath.path.pathtarget->cost.startup;
 VAR_20 += VAR_11->jpath.path.pathtarget->cost.per_tuple * VAR_11->jpath.path.rows;

 VAR_11->jpath.path.startup_cost = VAR_19;
 VAR_11->jpath.path.total_cost = VAR_19 + VAR_20;
}
