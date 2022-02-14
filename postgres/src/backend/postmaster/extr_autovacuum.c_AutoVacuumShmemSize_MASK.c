
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WorkerInfoData ;
typedef int Size ;
typedef int AutoVacuumShmemStruct ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

Size
FUNC_3(void)
{
 Size VAR_1;




 VAR_1 = sizeof(AutoVacuumShmemStruct);
 VAR_1 = FUNC_0(VAR_1);
 VAR_1 = FUNC_1(VAR_1, FUNC_2(VAR_0,
           sizeof(WorkerInfoData)));
 return VAR_1;
}
