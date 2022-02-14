
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ IV; scalar_t__ szIV; } ;
typedef TYPE_1__* PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE ;
typedef int * LPCVOID ;
typedef scalar_t__ LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int *,int ,int ,int *,int *) ;

BOOL FUNC_2(PKULL_M_CRED_VAULT_CREDENTIAL_ATTRIBUTE VAR_8, HCRYPTPROV VAR_9, BYTE VAR_10[VAR_0], BYTE VAR_11[VAR_1], HCRYPTKEY *VAR_12, BOOL *VAR_13)
{
 BOOL VAR_14 = VAR_5;
 DWORD VAR_15 = VAR_4, VAR_16, VAR_17;
 LPCVOID VAR_18;

 *VAR_13 = VAR_8->id && (VAR_8->id < 100);
 if(*VAR_13)
 {
  VAR_16 = VAR_2;
  VAR_18 = VAR_10;
  VAR_17 = VAR_0;

 }
 else
 {
  VAR_16 = VAR_3;
  VAR_18 = VAR_11;
  VAR_17 = VAR_1;
 }

 if((VAR_14 = FUNC_1(VAR_9, VAR_16, VAR_18, VAR_17, 0, VAR_12, ((void*)0))))
 {
  FUNC_0(*VAR_12, VAR_7, (LPCBYTE) &VAR_15, 0);
  if(VAR_8->szIV && VAR_8->IV)
   FUNC_0(*VAR_12, VAR_6, VAR_8->IV, 0);
 }
 return VAR_14;
}
