
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_2__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ data; } ;
struct dsp_spos_instance {int nmodules; struct dsp_module_desc* modules; TYPE_3__ code; } ;
struct dsp_segment_desc {scalar_t__ size; int offset; int data; } ;
struct TYPE_4__ {int symbols; } ;
struct dsp_module_desc {scalar_t__ load_address; int overlay_begin_address; int nfixups; TYPE_1__ symbol_table; int module_name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct snd_cs46xx*,struct dsp_module_desc*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_cs46xx*,struct dsp_segment_desc*) ;
 int FUNC_4 (struct snd_cs46xx*,struct dsp_segment_desc*) ;
 struct dsp_segment_desc* FUNC_5 (struct dsp_module_desc*,int ) ;
 int FUNC_6 (struct snd_cs46xx*,int ,int,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct snd_cs46xx*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct snd_cs46xx*,scalar_t__,int,int) ;

int FUNC_10 (struct snd_cs46xx * VAR_12, struct dsp_module_desc * VAR_13)
{
 struct dsp_spos_instance * VAR_14 = VAR_12->dsp_spos_instance;
 struct dsp_segment_desc * VAR_15 = FUNC_5 (VAR_13,VAR_10);
 u32 VAR_16, VAR_17;
 int VAR_18;

 if (VAR_14->nmodules == VAR_2 - 1) {
  FUNC_2(VAR_12->card->dev,
   "dsp_spos: to many modules loaded into DSP\n");
  return -VAR_8;
 }

 FUNC_1(VAR_12->card->dev,
  "dsp_spos: loading module %s into DSP\n", VAR_13->module_name);

 if (VAR_14->nmodules == 0) {
  FUNC_1(VAR_12->card->dev, "dsp_spos: clearing parameter area\n");
  FUNC_8(VAR_12, VAR_3, VAR_4);
 }

 VAR_18 = FUNC_3(VAR_12, FUNC_5(VAR_13,
       VAR_9));
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_14->nmodules == 0) {
  FUNC_1(VAR_12->card->dev, "dsp_spos: clearing sample area\n");
  FUNC_8(VAR_12, VAR_5, VAR_6);
 }

 VAR_18 = FUNC_4(VAR_12, FUNC_5(VAR_13,
           VAR_11));
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_14->nmodules == 0) {
  FUNC_1(VAR_12->card->dev, "dsp_spos: clearing code area\n");
  FUNC_8(VAR_12, VAR_0, VAR_1);
 }

 if (VAR_15 == ((void*)0)) {
  FUNC_1(VAR_12->card->dev,
   "dsp_spos: module got no code segment\n");
 } else {
  if (VAR_14->code.offset + VAR_15->size > VAR_1) {
   FUNC_2(VAR_12->card->dev,
    "dsp_spos: no space available in DSP\n");
   return -VAR_8;
  }

  VAR_13->load_address = VAR_14->code.offset;
  VAR_13->overlay_begin_address = 0x000;



  if (FUNC_7(!VAR_13->symbol_table.symbols))
   return -VAR_8;
  if (FUNC_0(VAR_12,VAR_13)) {
   FUNC_2(VAR_12->card->dev,
    "dsp_spos: failed to load symbol table\n");
   return -VAR_8;
  }

  VAR_16 = (VAR_15->offset * 4 + VAR_14->code.offset * 4 + VAR_0);
  VAR_17 = VAR_15->size * 4;
  FUNC_1(VAR_12->card->dev,
   "dsp_spos: downloading code to chip (%08x-%08x)\n",
       VAR_16,VAR_16 + VAR_17);

  VAR_13->nfixups = FUNC_6(VAR_12,VAR_15->data,VAR_15->size,VAR_13->overlay_begin_address);

  if (FUNC_9 (VAR_12,(VAR_14->code.data + VAR_14->code.offset),VAR_16,VAR_17)) {
   FUNC_2(VAR_12->card->dev,
    "dsp_spos: failed to download code to DSP\n");
   return -VAR_7;
  }

  VAR_14->code.offset += VAR_15->size;
 }




 VAR_14->modules[VAR_14->nmodules] = *VAR_13;
 VAR_14->nmodules++;

 return 0;
}
