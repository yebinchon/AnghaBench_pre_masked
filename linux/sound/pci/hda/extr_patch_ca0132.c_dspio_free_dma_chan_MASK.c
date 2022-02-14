
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int dma_chan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*,...) ;
 int FUNC_1 (struct hda_codec*,int ,int,int ,int ,unsigned int*,int,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 FUNC_0(VAR_3, "     dspio_free_dma_chan() -- begin\n");
 FUNC_0(VAR_3, "dspio_free_dma_chan: chan=%d\n", VAR_4);

 VAR_5 = FUNC_1(VAR_3, VAR_0, 0x20,
   VAR_1, VAR_2, &VAR_4,
   sizeof(VAR_4), ((void*)0), &VAR_6);

 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "dspio_free_dma_chan: SCP Failed\n");
  return VAR_5;
 }

 FUNC_0(VAR_3, "     dspio_free_dma_chan() -- complete\n");

 return VAR_5;
}
