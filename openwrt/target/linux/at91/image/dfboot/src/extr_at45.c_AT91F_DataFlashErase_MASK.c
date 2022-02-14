
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_5__ {unsigned int pages_number; int cs; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_2__* AT91PS_DataFlash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;

AT91S_DataFlashStatus FUNC_4(AT91PS_DataFlash VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 FUNC_2(VAR_3->pDevice->cs);

  for(VAR_4=0; VAR_4 < VAR_3->pDevice->pages_number; VAR_4++)
     {

  if ((VAR_4 & 0x00FF) == 0)
   FUNC_3("\rERA %d/%d", VAR_4, VAR_3->pDevice->pages_number);
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  FUNC_0(VAR_3->pDataFlashDesc, VAR_2);
  if (!VAR_5)
   return VAR_0;
    }

 return VAR_1;
}
