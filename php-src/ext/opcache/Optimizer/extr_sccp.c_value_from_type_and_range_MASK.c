
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_12__ {scalar_t__ min; scalar_t__ max; int underflow; int overflow; } ;
struct TYPE_13__ {int type; TYPE_4__ range; scalar_t__ has_range; } ;
typedef TYPE_5__ zend_ssa_var_info ;
struct TYPE_14__ {TYPE_1__* vars; TYPE_5__* var_info; } ;
typedef TYPE_6__ zend_ssa ;
struct TYPE_11__ {TYPE_2__* op_array; TYPE_6__* ssa; } ;
struct TYPE_15__ {TYPE_3__ scdf; } ;
typedef TYPE_7__ sccp_ctx ;
struct TYPE_10__ {scalar_t__ last_var; } ;
struct TYPE_9__ {scalar_t__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static zval *FUNC_4(sccp_ctx *VAR_6, int VAR_7, zval *VAR_8) {
 zend_ssa *VAR_9 = VAR_6->scdf.ssa;
 zend_ssa_var_info *VAR_10 = &VAR_9->var_info[VAR_7];

 if (VAR_9->vars[VAR_7].var >= VAR_6->scdf.op_array->last_var) {

  return ((void*)0);
 }

 if (VAR_10->type & VAR_5) {
  return ((void*)0);
 }

 if (!(VAR_10->type & ((VAR_0|VAR_5)-VAR_3))) {
  FUNC_2(VAR_8);
  return VAR_8;
 }
 if (!(VAR_10->type & ((VAR_0|VAR_5)-VAR_1))) {
  FUNC_0(VAR_8);
  return VAR_8;
 }
 if (!(VAR_10->type & ((VAR_0|VAR_5)-VAR_4))) {
  FUNC_3(VAR_8);
  return VAR_8;
 }

 if (!(VAR_10->type & ((VAR_0|VAR_5)-VAR_2))
   && VAR_10->has_range
   && !VAR_10->range.overflow && !VAR_10->range.underflow
   && VAR_10->range.min == VAR_10->range.max) {
  FUNC_1(VAR_8, VAR_10->range.min);
  return VAR_8;
 }

 return ((void*)0);
}
