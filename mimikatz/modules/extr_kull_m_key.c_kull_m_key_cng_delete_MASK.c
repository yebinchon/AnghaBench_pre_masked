
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pPrivateKey; struct TYPE_4__* pPrivateProperties; scalar_t__ cbPublicProperties; scalar_t__ pPublicProperties; struct TYPE_4__* pName; } ;
typedef TYPE_1__* PKULL_M_KEY_CNG_BLOB ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(PKULL_M_KEY_CNG_BLOB VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->pName)
   FUNC_0(VAR_0->pName);
  if(VAR_0->cbPublicProperties && VAR_0->pPublicProperties)
   FUNC_1(VAR_0->pPublicProperties, VAR_0->cbPublicProperties);
  if(VAR_0->pPrivateProperties)
   FUNC_0(VAR_0->pPrivateProperties);
  if(VAR_0->pPrivateKey)
   FUNC_0(VAR_0->pPrivateKey);
  FUNC_0(VAR_0);
 }
}
