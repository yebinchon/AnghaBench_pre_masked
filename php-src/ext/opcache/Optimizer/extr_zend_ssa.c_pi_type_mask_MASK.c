
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type_mask; int * ce; } ;
struct TYPE_5__ {TYPE_2__ type; } ;
struct TYPE_7__ {TYPE_1__ constraint; scalar_t__ has_range_constraint; } ;
typedef TYPE_3__ zend_ssa_phi ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(zend_ssa_phi *VAR_5, uint32_t VAR_6) {
 VAR_5->has_range_constraint = 0;
 VAR_5->constraint.type.ce = ((void*)0);
 VAR_5->constraint.type.type_mask = VAR_3|VAR_1|VAR_2;
 VAR_5->constraint.type.type_mask |= VAR_6;
 if (VAR_6 & VAR_0) {
  VAR_5->constraint.type.type_mask |= VAR_4;
 }
}
