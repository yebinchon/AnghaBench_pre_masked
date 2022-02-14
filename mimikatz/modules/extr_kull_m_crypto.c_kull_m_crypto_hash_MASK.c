
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* Finish ) (int *) ;int (* Finalize ) (int ,int ) ;int (* Sum ) (int ,int,scalar_t__) ;int (* Initialize ) (int ,int *) ;} ;
typedef int PVOID ;
typedef TYPE_1__* PKERB_CHECKSUM ;
typedef int * PBYTE ;
typedef int LPVOID ;
typedef scalar_t__ LPCVOID ;
typedef int LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__**) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;

BOOL FUNC_16(ALG_ID VAR_7, LPCVOID VAR_8, DWORD VAR_9, LPVOID VAR_10, DWORD VAR_11)
{
 BOOL VAR_12 = VAR_2;
 HCRYPTPROV VAR_13;
 HCRYPTHASH VAR_14;
 DWORD VAR_15;
 PBYTE VAR_16;
 PKERB_CHECKSUM VAR_17;
 PVOID VAR_18;

 if(VAR_7 == VAR_0)
 {
  if((VAR_11 == sizeof(DWORD)) && FUNC_9(FUNC_0(VAR_4, &VAR_17)))
  {
   if(FUNC_9(VAR_17->Initialize(0, &VAR_18)))
   {
    VAR_17->Sum(VAR_18, VAR_9, VAR_8);
    VAR_12 = FUNC_9(VAR_17->Finalize(VAR_18, VAR_10));
    VAR_17->Finish(&VAR_18);
   }
  }
 }
 else if(FUNC_1(&VAR_13, ((void*)0), ((void*)0), VAR_6, VAR_1))
 {
  if(FUNC_2(VAR_13, VAR_7, 0, 0, &VAR_14))
  {
   if(FUNC_5(VAR_14, (LPCBYTE) VAR_8, VAR_9, 0))
   {
    if(FUNC_4(VAR_14, VAR_3, ((void*)0), &VAR_15, 0))
    {
     if((VAR_16 = (PBYTE) FUNC_7(VAR_5, VAR_15)))
     {
      VAR_12 = FUNC_4(VAR_14, VAR_3, VAR_16, &VAR_15, 0);
      FUNC_10(VAR_10, VAR_16, FUNC_11(VAR_15, VAR_11));
      FUNC_8(VAR_16);
     }
    }
   }
   FUNC_3(VAR_14);
  }
  FUNC_6(VAR_13, 0);
 }
 return VAR_12;
}
