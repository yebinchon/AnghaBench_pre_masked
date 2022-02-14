
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct tipc_link *VAR_3)
{
 return VAR_3->state & (VAR_2 | VAR_1 | VAR_0);
}
