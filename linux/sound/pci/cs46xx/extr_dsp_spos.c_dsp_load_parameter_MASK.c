
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct dsp_segment_desc {int offset; int size; int data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct snd_cs46xx*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_cs46xx *VAR_2,
         struct dsp_segment_desc *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (!VAR_3) {
  FUNC_0(VAR_2->card->dev,
   "dsp_spos: module got no parameter segment\n");
  return 0;
 }

 VAR_4 = (VAR_3->offset * 4 + VAR_0);
 VAR_5 = VAR_3->size * 4;

 FUNC_0(VAR_2->card->dev,
  "dsp_spos: downloading parameter data to chip (%08x-%08x)\n",
      VAR_4,VAR_4 + VAR_5);
 if (FUNC_2 (VAR_2, VAR_3->data, VAR_4, VAR_5)) {
  FUNC_1(VAR_2->card->dev,
   "dsp_spos: failed to download parameter data to DSP\n");
  return -VAR_1;
 }
 return 0;
}
