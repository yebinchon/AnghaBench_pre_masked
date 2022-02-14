
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ id; } ;
struct xdp_rxq_info {scalar_t__ reg_state; TYPE_1__ mem; int * dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct xdp_rxq_info*) ;

void FUNC_2(struct xdp_rxq_info *VAR_3)
{

 if (VAR_3->reg_state == VAR_2)
  return;

 FUNC_0(!(VAR_3->reg_state == VAR_0), "Driver BUG");

 FUNC_1(VAR_3);

 VAR_3->reg_state = VAR_1;
 VAR_3->dev = ((void*)0);


 VAR_3->mem.id = 0;
 VAR_3->mem.type = 0;
}
