
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ event_hdr ;
typedef int UINT32 ;
struct TYPE_2__ {int* (* sDriverPatches ) (int *) ;int* (* sFWPatches ) (int *) ;int* (* sBootLoaderPatches ) (int *) ;int pucTxCommandBuffer; } ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int const,int ,int*,int ) ;
 int* FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;

void FUNC_4(CHAR *VAR_2)
{
 CHAR *VAR_3 = (CHAR *)(VAR_2) + VAR_0;
 UINT32 VAR_4 = 0;
 CHAR *VAR_5;

 switch (*VAR_3)
 {
 case 129:

  if (VAR_1.sDriverPatches)
  {
   VAR_5 = VAR_1.sDriverPatches(&VAR_4);

   if (VAR_5)
   {
    FUNC_0(129,
     VAR_1.pucTxCommandBuffer, VAR_5, VAR_4);
    return;
   }
  }


  FUNC_0(129,
   VAR_1.pucTxCommandBuffer, 0, 0);
  break;

 case 128:

  if (VAR_1.sFWPatches)
  {
   VAR_5 = VAR_1.sFWPatches(&VAR_4);


   if (VAR_5)
   {
    FUNC_0(128,
     VAR_1.pucTxCommandBuffer, VAR_5, VAR_4);
    return;
   }
  }


  FUNC_0(128,
   VAR_1.pucTxCommandBuffer, 0, 0);
  break;

 case 130:

  if (VAR_1.sBootLoaderPatches)
  {
   VAR_5 = VAR_1.sBootLoaderPatches(&VAR_4);

   if (VAR_5)
   {
    FUNC_0(130,
     VAR_1.pucTxCommandBuffer, VAR_5, VAR_4);
    return;
   }
  }


  FUNC_0(130,
   VAR_1.pucTxCommandBuffer, 0, 0);
  break;
 }
}
