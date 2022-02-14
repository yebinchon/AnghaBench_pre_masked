
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int type; } ;
typedef TYPE_1__ DsoJsonInfo ;


 unsigned int VAR_0 ;
 TYPE_1__ const* VAR_1 ;

__attribute__((used)) static const DsoJsonInfo* FUNC_0 (unsigned int VAR_2) {
 unsigned int VAR_3 = 0;
 for (; VAR_1[VAR_3].type != VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].type == VAR_2) return &VAR_1[VAR_3];
 }
 return ((void*)0);
}
