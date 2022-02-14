
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct dsp_symbol_entry {int dummy; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,int ,struct dsp_symbol_entry*,struct dsp_scb_descriptor*,int) ;
 struct dsp_symbol_entry* FUNC_1 (struct snd_cs46xx*,char*,int ) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static struct dsp_scb_descriptor *
FUNC_3 (struct snd_cs46xx *VAR_1, char * VAR_2, u32 * VAR_3,
          u32 VAR_4, char * VAR_5,
                               struct dsp_scb_descriptor * VAR_6,
                               int VAR_7)
{
 struct dsp_symbol_entry * VAR_8;

 VAR_8 = FUNC_1 (VAR_1,VAR_5,
            VAR_0);

 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_1->card->dev,
   "dsp_spos: symbol %s not found\n", VAR_5);
  return ((void*)0);
 }

 return FUNC_0 (VAR_1,VAR_2,VAR_3,VAR_4,VAR_8,
     VAR_6,VAR_7);
}
