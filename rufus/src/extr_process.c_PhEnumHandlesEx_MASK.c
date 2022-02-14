
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PVOID ;
typedef scalar_t__ PSYSTEM_HANDLE_INFORMATION_EX ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,int,int *) ;

NTSTATUS FUNC_5(PSYSTEM_HANDLE_INFORMATION_EX *VAR_8)
{
 static ULONG VAR_9 = 0x10000;
 NTSTATUS VAR_10 = VAR_6;
 PVOID VAR_11;
 ULONG VAR_12;

 FUNC_1(VAR_0, VAR_1);
 if (!FUNC_0(VAR_10))
  return VAR_10;

 VAR_12 = VAR_9;
 VAR_11 = FUNC_2(VAR_12);
 if (VAR_11 == ((void*)0))
  return VAR_5;

 while ((VAR_10 = FUNC_4(VAR_7,
  VAR_11, VAR_12, ((void*)0))) == VAR_3) {
  FUNC_3(VAR_11);
  VAR_12 *= 2;


  if (VAR_12 > VAR_2)
   return VAR_4;

  VAR_11 = FUNC_2(VAR_12);
  if (VAR_11 == ((void*)0))
   return VAR_5;
 }

 if (!FUNC_0(VAR_10)) {
  FUNC_3(VAR_11);
  return VAR_10;
 }

 if (VAR_12 <= 0x200000)
  VAR_9 = VAR_12;
 *VAR_8 = (PSYSTEM_HANDLE_INFORMATION_EX)VAR_11;

 return VAR_10;
}
