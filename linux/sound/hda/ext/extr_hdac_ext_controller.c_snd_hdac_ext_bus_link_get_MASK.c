
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_ext_link {int ref_count; int ml_addr; } ;
struct hdac_bus {int cmd_dma_state; int lock; int codec_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hdac_bus*) ;
 int FUNC_4 (struct hdac_bus*,int ) ;
 int FUNC_5 (struct hdac_bus*,int ,int ) ;
 int FUNC_6 (struct hdac_ext_link*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int) ;

int FUNC_9(struct hdac_bus *VAR_3,
    struct hdac_ext_link *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_3->lock);





 if (++VAR_4->ref_count == 1) {
  if (!VAR_3->cmd_dma_state) {
   FUNC_3(VAR_3);
   VAR_3->cmd_dma_state = 1;
  }

  VAR_5 = FUNC_6(VAR_4);




  FUNC_7(VAR_4->ml_addr, VAR_0,
     VAR_1, 0);




  FUNC_8(521);
  VAR_3->codec_mask = FUNC_4(VAR_3, VAR_2);
  FUNC_0(VAR_3->dev, "codec_mask = 0x%lx\n", VAR_3->codec_mask);
  FUNC_5(VAR_3, VAR_2, VAR_3->codec_mask);
 }

 FUNC_2(&VAR_3->lock);
 return VAR_5;
}
