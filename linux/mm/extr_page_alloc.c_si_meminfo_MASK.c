
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int mem_unit; int freehigh; int totalhigh; int bufferram; int freeram; int sharedram; int totalram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct sysinfo *VAR_3)
{
 VAR_3->totalram = FUNC_5();
 VAR_3->sharedram = FUNC_0(VAR_1);
 VAR_3->freeram = FUNC_1(VAR_0);
 VAR_3->bufferram = FUNC_2();
 VAR_3->totalhigh = FUNC_4();
 VAR_3->freehigh = FUNC_3();
 VAR_3->mem_unit = VAR_2;
}
