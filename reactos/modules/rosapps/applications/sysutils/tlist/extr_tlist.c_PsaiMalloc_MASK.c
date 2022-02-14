
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int NTSTATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void**,int ,int *,int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;

void *FUNC_3(SIZE_T VAR_2)
{
 void * VAR_3 = ((void*)0);
 NTSTATUS VAR_4;

 VAR_4 = FUNC_1
 (
  FUNC_2(),
  &VAR_3,
  0,
  &VAR_2,
  VAR_0,
  VAR_1
 );

 if(FUNC_0(VAR_4)) return VAR_3;
 else return ((void*)0);
}
