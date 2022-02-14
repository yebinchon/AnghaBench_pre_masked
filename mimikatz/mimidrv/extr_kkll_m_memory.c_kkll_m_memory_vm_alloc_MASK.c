
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int NTSTATUS ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS FUNC_1(DWORD VAR_5, PVOID *VAR_6)
{
 NTSTATUS VAR_7 = VAR_2;
 if(VAR_6)
 {
  if((*VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_1)))
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_3;
 }
 return VAR_7;
}
