
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cbSecret; int data; } ;
struct TYPE_8__ {int bits; TYPE_2__ hardkey; } ;
struct TYPE_5__ {scalar_t__ cbSecret; int data; } ;
struct TYPE_7__ {int type; TYPE_1__ key; } ;
typedef int PVOID ;
typedef TYPE_3__* PKULL_M_CRED_VAULT_POLICY_KEY_MBDK ;
typedef TYPE_4__* PKIWI_BCRYPT_KEY ;
typedef char* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__) ;

BOOL FUNC_1(PVOID VAR_3, DWORD VAR_4, BYTE VAR_5[VAR_0], BYTE VAR_6[VAR_1])
{
 BOOL VAR_7 = VAR_2;
 DWORD VAR_8, VAR_9;
 PBYTE VAR_10 = (PBYTE) VAR_3;
 PKULL_M_CRED_VAULT_POLICY_KEY_MBDK VAR_11;
 PKIWI_BCRYPT_KEY VAR_12;

 VAR_8 = *(PDWORD) VAR_10;
 if(VAR_8 >= 0x24)
 {
  if(*(PDWORD) (VAR_10 + 3 * sizeof(DWORD)) == 'MBDK')
  {
   VAR_11 = (PKULL_M_CRED_VAULT_POLICY_KEY_MBDK) VAR_10;
   if((VAR_7 = ((VAR_11->type == 2) && (VAR_11->key.cbSecret == VAR_0))))
    FUNC_0(VAR_5, VAR_11->key.data, VAR_0);
  }
  else if(*(PDWORD) (VAR_10 + 4 * sizeof(DWORD)) == 'MSSK')
  {
   VAR_12 = (PKIWI_BCRYPT_KEY) (VAR_10 + 3 * sizeof(DWORD));
   if((VAR_7 = ((VAR_12->bits == 128) && (VAR_12->hardkey.cbSecret == VAR_0))))
    FUNC_0(VAR_5, VAR_12->hardkey.data, VAR_0);
  }

  if(VAR_7)
  {
   VAR_7 = VAR_2;
   VAR_10 += sizeof(DWORD) + VAR_8;
   VAR_9 = *(PDWORD) VAR_10;
   if(VAR_9 >= 0x34)
   {
    if(*(PDWORD) (VAR_10 + 3 * sizeof(DWORD)) == 'MBDK')
    {
     VAR_11 = (PKULL_M_CRED_VAULT_POLICY_KEY_MBDK) VAR_10;
     if((VAR_7 = ((VAR_11->type == 1) && (VAR_11->key.cbSecret == VAR_1))))
      FUNC_0(VAR_6, VAR_11->key.data, VAR_1);
    }
    else if(*(PDWORD) (VAR_10 + 4 * sizeof(DWORD)) == 'MSSK')
    {
     VAR_12 = (PKIWI_BCRYPT_KEY) (VAR_10 + 3 * sizeof(DWORD));
     if((VAR_7 = ((VAR_12->bits == 256) && (VAR_12->hardkey.cbSecret == VAR_1))))
      FUNC_0(VAR_6, VAR_12->hardkey.data, VAR_1);
    }
   }
  }
 }
 return VAR_7;
}
