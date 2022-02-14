
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ag71xx {int stop_desc_dma; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ag71xx *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 FUNC_0(VAR_12);


 FUNC_2(VAR_12, VAR_0, 0);
 FUNC_2(VAR_12, VAR_3, 0);





 FUNC_3(1);


 FUNC_2(VAR_12, VAR_4, VAR_12->stop_desc_dma);
 FUNC_2(VAR_12, VAR_1, VAR_12->stop_desc_dma);


 for (VAR_14 = 0; VAR_14 < 256; VAR_14++) {
  FUNC_2(VAR_12, VAR_2, VAR_8);
  FUNC_2(VAR_12, VAR_5, VAR_10);
 }


 FUNC_2(VAR_12, VAR_2, VAR_6 | VAR_7);
 FUNC_2(VAR_12, VAR_5, VAR_9 | VAR_11);

 VAR_13 = FUNC_1(VAR_12, VAR_2);
 if (VAR_13)
  FUNC_4("%s: unable to clear DMA Rx status: %08x\n",
    VAR_12->dev->name, VAR_13);

 VAR_13 = FUNC_1(VAR_12, VAR_5);


 VAR_13 &= ~0xff000000;

 if (VAR_13)
  FUNC_4("%s: unable to clear DMA Tx status: %08x\n",
    VAR_12->dev->name, VAR_13);

 FUNC_0(VAR_12);
}
