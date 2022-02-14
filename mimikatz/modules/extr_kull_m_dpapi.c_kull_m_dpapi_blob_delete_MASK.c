
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pbSign; struct TYPE_4__* pbData; struct TYPE_4__* pbHmack2Key; struct TYPE_4__* pbHmackKey; struct TYPE_4__* pbSalt; struct TYPE_4__* szDescription; } ;
typedef TYPE_1__* PKULL_M_DPAPI_BLOB ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(PKULL_M_DPAPI_BLOB VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->szDescription)
   FUNC_0(VAR_0->szDescription);
  if(VAR_0->pbSalt)
   FUNC_0(VAR_0->pbSalt);
  if(VAR_0->pbHmackKey)
   FUNC_0(VAR_0->pbHmackKey);
  if(VAR_0->pbHmack2Key)
   FUNC_0(VAR_0->pbHmack2Key);
  if(VAR_0->pbData)
   FUNC_0(VAR_0->pbData);
  if(VAR_0->pbSign)
   FUNC_0(VAR_0->pbSign);
  FUNC_0(VAR_0);
 }
}
