
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_11__ {TYPE_2__* var_info; TYPE_1__* vars; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_12__ {int last_var; } ;
typedef TYPE_4__ zend_op_array ;
typedef int uint32_t ;
struct TYPE_10__ {int range; scalar_t__ has_range; } ;
struct TYPE_9__ {scalar_t__ escape_state; scalar_t__ no_val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__ const*,int,int ) ;
 int FUNC_3 (TYPE_4__ const*,int ,int) ;

__attribute__((used)) static void FUNC_4(const zend_op_array *VAR_3, const zend_ssa *VAR_4, int VAR_5, zend_uchar VAR_6, int VAR_7, uint32_t VAR_8)
{
 if (VAR_5 >= 0) {
  FUNC_0(VAR_2, "#%d.", VAR_5);
 } else {
  FUNC_0(VAR_2, "#?.");
 }
 FUNC_3(VAR_3, (VAR_7 < VAR_3->last_var ? VAR_1 : VAR_6), VAR_7);

 if (VAR_5 >= 0 && VAR_4->vars) {
  if (VAR_4->vars[VAR_5].no_val) {
   FUNC_0(VAR_2, " NOVAL");
  }
  if (VAR_4->vars[VAR_5].escape_state == VAR_0) {
   FUNC_0(VAR_2, " NOESC");
  }
  if (VAR_4->var_info) {
   FUNC_2(VAR_4, VAR_5, VAR_8);
   if (VAR_4->var_info[VAR_5].has_range) {
    FUNC_1(&VAR_4->var_info[VAR_5].range);
   }
  }
 }
}
