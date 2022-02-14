
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_info_iterator {int * addr; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rds_info_iterator *VAR_0)
{
 if (VAR_0->addr) {
  FUNC_0(VAR_0->addr);
  VAR_0->addr = ((void*)0);
 }
}
