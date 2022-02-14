
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int dma_chan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,char*,...) ;
 int FUNC_1 (struct hda_codec*,int ,int,int ,int ,int *,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = sizeof(VAR_5);

 FUNC_0(VAR_4, "     dspio_alloc_dma_chan() -- begin\n");
 VAR_6 = FUNC_1(VAR_4, VAR_1, 0x20,
   VAR_2, VAR_3, ((void*)0), 0,
   VAR_5, &VAR_7);

 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "dspio_alloc_dma_chan: SCP Failed\n");
  return VAR_6;
 }

 if ((*VAR_5 + 1) == 0) {
  FUNC_0(VAR_4, "no free dma channels to allocate\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4, "dspio_alloc_dma_chan: chan=%d\n", *VAR_5);
 FUNC_0(VAR_4, "     dspio_alloc_dma_chan() -- complete\n");

 return VAR_6;
}
