
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* blli; } ;
struct atm_vcc {TYPE_4__ sap; } ;
struct TYPE_5__ {scalar_t__* snap; } ;
struct TYPE_6__ {TYPE_1__ tr9577; } ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct atm_vcc *VAR_2)
{
 return ((VAR_2->sap.blli[0].l3.tr9577.snap[4] == VAR_0) ||
  (VAR_2->sap.blli[0].l3.tr9577.snap[4] == VAR_1));
}
