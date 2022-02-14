
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* vars; TYPE_2__* var_info; } ;
typedef TYPE_4__ zend_ssa ;
typedef int zend_op_array ;
typedef void* zend_long ;
typedef void* zend_bool ;
struct TYPE_8__ {int scc; } ;
struct TYPE_6__ {void* overflow; void* max; void* min; void* underflow; } ;
struct TYPE_7__ {int has_range; TYPE_1__ range; } ;


 int FUNC_0 (char*,int ,int,char*,void*,void*,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_1(const zend_op_array *VAR_2, zend_ssa *VAR_3, int VAR_4, zend_bool VAR_5, zend_long VAR_6, zend_long VAR_7, zend_bool VAR_8)
{
 if (VAR_5) {
  VAR_6 = VAR_1;
 }
 if (VAR_8) {
  VAR_7 = VAR_0;
 }
 VAR_3->var_info[VAR_4].has_range = 1;
 VAR_3->var_info[VAR_4].range.underflow = VAR_5;
 VAR_3->var_info[VAR_4].range.min = VAR_6;
 VAR_3->var_info[VAR_4].range.max = VAR_7;
 VAR_3->var_info[VAR_4].range.overflow = VAR_8;
 FUNC_0("  change range (init      SCC %2d) %2d [%s%ld..%ld%s]\n", VAR_3->vars[VAR_4].scc, VAR_4, (VAR_5?"-- ":""), VAR_6, VAR_7, (VAR_8?" ++":""));
}
