
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_vcc {TYPE_2__* dev; int send; int * push_oam; int pop; int push; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int send; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct atm_vcc *VAR_2)
{
 VAR_2->push = VAR_1;
 VAR_2->pop = VAR_0;
 VAR_2->push_oam = ((void*)0);
 VAR_2->send = VAR_2->dev->ops->send;
 return 0;
}
