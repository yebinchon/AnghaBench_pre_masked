
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_id {int* prio; int* addr; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int) ;

ssize_t FUNC_1(char *VAR_0, const struct bridge_id *VAR_1)
{
 return FUNC_0(VAR_0, "%.2x%.2x.%.2x%.2x%.2x%.2x%.2x%.2x\n",
        VAR_1->prio[0], VAR_1->prio[1],
        VAR_1->addr[0], VAR_1->addr[1], VAR_1->addr[2],
        VAR_1->addr[3], VAR_1->addr[4], VAR_1->addr[5]);
}
