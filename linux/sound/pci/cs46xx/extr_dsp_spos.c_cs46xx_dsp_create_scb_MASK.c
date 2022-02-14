
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct dsp_scb_descriptor {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,int *,int ) ;
 struct dsp_scb_descriptor* FUNC_1 (struct snd_cs46xx*,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int ) ;

struct dsp_scb_descriptor *
FUNC_5 (struct snd_cs46xx *VAR_2, char * VAR_3, u32 * VAR_4, u32 VAR_5)
{
 struct dsp_scb_descriptor * VAR_6;
 VAR_6 = FUNC_1 (VAR_2,VAR_3,VAR_5);
 if (VAR_6) {
  VAR_6->data = VAR_4;
  FUNC_0(VAR_2,VAR_4,VAR_5);
 } else {
  FUNC_2(VAR_2->card->dev, "dsp_spos: failed to map SCB\n");



 }

 return VAR_6;
}
