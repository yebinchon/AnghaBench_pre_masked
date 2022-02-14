
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

void FUNC_5(unsigned long VAR_1)
{
 char VAR_2[100];
 if (VAR_1 == FUNC_1())
  return;
 FUNC_2("%luMB: ", VAR_1 >> 20);
 FUNC_0(VAR_0);
 FUNC_3(VAR_2, sizeof VAR_2,
  "cat /sys/kernel/mm/hugepages/hugepages-%lukB/free_hugepages",
  VAR_1 >> 10);
 FUNC_4(VAR_2);
}
