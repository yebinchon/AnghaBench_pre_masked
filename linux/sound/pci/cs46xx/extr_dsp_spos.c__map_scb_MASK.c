
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int nscb; int scb_highest_frag_index; struct dsp_scb_descriptor* scbs; } ;
struct dsp_scb_descriptor {int index; int ref_count; int scb_symbol; int address; int scb_name; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dsp_spos_instance*) ;
 int FUNC_3 (struct dsp_scb_descriptor*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct dsp_scb_descriptor * FUNC_5 (struct snd_cs46xx *VAR_2, char * VAR_3, u32 VAR_4)
{
 struct dsp_spos_instance * VAR_5 = VAR_2->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_5->nscb == VAR_0 - 1) {
  FUNC_1(VAR_2->card->dev,
   "dsp_spos: got no place for other SCB\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_2 (VAR_5);

 FUNC_3(&VAR_5->scbs[VAR_7], 0, sizeof(VAR_5->scbs[VAR_7]));
 FUNC_4(VAR_5->scbs[VAR_7].scb_name, VAR_3);
 VAR_5->scbs[VAR_7].address = VAR_4;
 VAR_5->scbs[VAR_7].index = VAR_7;
 VAR_5->scbs[VAR_7].ref_count = 1;

 VAR_6 = (VAR_5->scbs + VAR_7);
 VAR_5->scbs[VAR_7].scb_symbol = FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_1);

 if (VAR_7 > VAR_5->scb_highest_frag_index)
  VAR_5->scb_highest_frag_index = VAR_7;

 if (VAR_7 == VAR_5->nscb)
  VAR_5->nscb++;

 return VAR_6;
}
