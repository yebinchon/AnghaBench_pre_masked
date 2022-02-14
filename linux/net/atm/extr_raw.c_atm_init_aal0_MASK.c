
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {int send; int * push_oam; int pop; int push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct atm_vcc *VAR_3)
{
 VAR_3->push = VAR_1;
 VAR_3->pop = VAR_0;
 VAR_3->push_oam = ((void*)0);
 VAR_3->send = VAR_2;
 return 0;
}
