
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_4; int * member_3; int member_2; int * member_1; int member_0; } ;
typedef int * PBYTE ;
typedef int LPVOID ;
typedef scalar_t__ LPCVOID ;
typedef int LPCBYTE ;
typedef TYPE_1__ HMAC_INFO ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (int ,int *,int ) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__,int ,int ,int *,int *) ;
 int FUNC_12 (int ,int ) ;

BOOL FUNC_13(DWORD VAR_9, LPCVOID VAR_10, DWORD VAR_11, LPCVOID VAR_12, DWORD VAR_13, LPVOID VAR_14, DWORD VAR_15)
{
 BOOL VAR_16 = VAR_4;
 DWORD VAR_17;
 HCRYPTPROV VAR_18;
 HCRYPTKEY VAR_19;
 HCRYPTHASH VAR_20;
 HMAC_INFO VAR_21 = {VAR_9, ((void*)0), 0, ((void*)0), 0};
 PBYTE VAR_22;

 if(FUNC_0(&VAR_18, ((void*)0), ((void*)0), VAR_8, VAR_3))
 {
  if(FUNC_11(VAR_18, VAR_1, VAR_10, VAR_11, VAR_2, &VAR_19, ((void*)0)))
  {
   if(FUNC_1(VAR_18, VAR_0, VAR_19, 0, &VAR_20))
   {
    if(FUNC_7(VAR_20, VAR_6, (LPCBYTE) &VAR_21, 0))
     if(FUNC_5(VAR_20, (LPCBYTE) VAR_12, VAR_13, 0))
      if(FUNC_4(VAR_20, VAR_5, ((void*)0), &VAR_17, 0))
      {
       if((VAR_22 = (PBYTE) FUNC_8(VAR_7, VAR_17)))
       {
        VAR_16 = FUNC_4(VAR_20, VAR_5, VAR_22, &VAR_17, 0);
        FUNC_10(VAR_14, VAR_22, FUNC_12(VAR_17, VAR_15));
        FUNC_9(VAR_22);
       }
      }
      FUNC_2(VAR_20);
   }
   FUNC_3(VAR_19);
  }
  FUNC_6(VAR_18, 0);
 }
 return VAR_16;
}
