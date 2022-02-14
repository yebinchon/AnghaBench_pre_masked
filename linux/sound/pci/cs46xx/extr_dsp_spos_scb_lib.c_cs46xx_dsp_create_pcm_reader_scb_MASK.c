
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {TYPE_4__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int * null_algorithm; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_6__ {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int member_2; int member_3; int member_1; int member_0; } ;
struct dsp_generic_scb {int member_6; int member_7; TYPE_3__ member_9; int member_8; int member_5; int member_4; int member_3; int member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int*,int,int *,struct dsp_scb_descriptor*,int) ;
 int * FUNC_1 (struct snd_cs46xx*,char*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct dsp_scb_descriptor *
FUNC_3(struct snd_cs46xx * VAR_15, char * VAR_16,
                                 u16 VAR_17, u32 VAR_18,
                                 int VAR_19, u32 VAR_20,
                                 struct dsp_scb_descriptor * VAR_21,
                                 int VAR_22)
{
 struct dsp_spos_instance * VAR_23 = VAR_15->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_24;

 struct dsp_generic_scb VAR_25 = {
  { VAR_2 +
    VAR_1 +
    VAR_0 +
    VAR_4 +
    VAR_3 +
    15,


    VAR_5 +
    VAR_6 +

    VAR_19,
    VAR_20,
    VAR_7 +
    VAR_17
  },

  {
   0,
   0,
   0,
   0,
   0
  },

  VAR_8,VAR_8,

  0,VAR_8,


  VAR_9 +
  (19 << VAR_10) +

  ((VAR_18 >> 4) << VAR_13) +
  VAR_12 +
  VAR_11,

  (VAR_17 << 0x10),

  0,
  {


   0xffff,0xffff,
   0xffff,0xffff
  }
 };

 if (VAR_23->null_algorithm == ((void*)0)) {
  VAR_23->null_algorithm = FUNC_1 (VAR_15,"NULLALGORITHM",
         VAR_14);

  if (VAR_23->null_algorithm == ((void*)0)) {
   FUNC_2(VAR_15->card->dev,
    "dsp_spos: symbol NULLALGORITHM not found\n");
   return ((void*)0);
  }
 }

 VAR_24 = FUNC_0(VAR_15,VAR_16,(u32 *)&VAR_25,
          VAR_18,VAR_23->null_algorithm,VAR_21,
          VAR_22);

 return VAR_24;
}
