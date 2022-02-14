
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {TYPE_1__* _num; } ;
struct TYPE_8__ {TYPE_2__ val; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_3__ DsoJsonObj ;


 TYPE_3__* FUNC_0 () ;

DsoJsonObj * FUNC_1 (ut64 VAR_0) {
 DsoJsonObj *VAR_1 = FUNC_0 ();
 if (VAR_1) VAR_1->val._num->value = VAR_0;
 return VAR_1;
}
