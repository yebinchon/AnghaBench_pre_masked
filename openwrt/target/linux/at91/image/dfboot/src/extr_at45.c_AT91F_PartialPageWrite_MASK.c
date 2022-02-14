
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pDevice; int pDataFlashDesc; } ;
struct TYPE_8__ {unsigned int pages_size; int pages_number; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_2__* AT91PS_DataFlash ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned char*,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_5 (
 AT91PS_DataFlash VAR_4,
 unsigned char *VAR_5,
 unsigned int VAR_6,
 unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_6 / (VAR_4->pDevice->pages_size);
 VAR_9 = VAR_6 % (VAR_4->pDevice->pages_size);


 FUNC_2(VAR_4, VAR_3, VAR_8);
 FUNC_0(VAR_4->pDataFlashDesc, VAR_0);


 FUNC_1(VAR_4, VAR_2, VAR_5, VAR_9, VAR_7);
 FUNC_0(VAR_4->pDataFlashDesc, VAR_0);


 if (VAR_4->pDevice->pages_number >= 16384)
 {
  FUNC_3(VAR_4, VAR_8);
  FUNC_0(VAR_4->pDataFlashDesc, VAR_0);
 }


 return(FUNC_4(VAR_4, VAR_1,
                                (VAR_8*VAR_4->pDevice->pages_size)));
}
