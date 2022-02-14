
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int find_total; int find_success; int del_total; int add_total; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 FUNC_1("%lu pages in swap cache\n", FUNC_2());
 FUNC_1("Swap cache stats: add %lu, delete %lu, find %lu/%lu\n",
  VAR_1.add_total, VAR_1.del_total,
  VAR_1.find_success, VAR_1.find_total);
 FUNC_1("Free swap  = %ldkB\n",
  FUNC_0() << (VAR_0 - 10));
 FUNC_1("Total swap = %lukB\n", VAR_2 << (VAR_0 - 10));
}
