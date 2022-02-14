
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int last_live_range; scalar_t__ last_var; TYPE_2__* live_range; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_7__ {scalar_t__ var; scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_2__ zend_live_range ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(
  zend_op_array *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4) {
 zend_live_range *VAR_5;

 VAR_0->last_live_range++;
 VAR_0->live_range = FUNC_2(VAR_0->live_range,
  sizeof(zend_live_range) * VAR_0->last_live_range);

 FUNC_0(VAR_3 < VAR_4);
 VAR_5 = &VAR_0->live_range[VAR_0->last_live_range - 1];
 VAR_5->var = (uint32_t) (intptr_t) FUNC_1(((void*)0), VAR_0->last_var + VAR_1);
 VAR_5->var |= VAR_2;
 VAR_5->start = VAR_3;
 VAR_5->end = VAR_4;
}
