
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int ProcSignalSlot ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (char*,int ,int*) ;

void
FUNC_3(void)
{
 Size VAR_1 = FUNC_1();
 bool VAR_2;

 VAR_0 = (ProcSignalSlot *)
  FUNC_2("ProcSignalSlots", VAR_1, &VAR_2);


 if (!VAR_2)
  FUNC_0(VAR_0, 0, VAR_1);
}
