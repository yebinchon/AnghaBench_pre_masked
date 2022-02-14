
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_symbol_entry {int address; } ;
struct dsp_spos_instance {int the_null_scb; } ;
struct TYPE_6__ {int member_0; int member_1; } ;
struct TYPE_5__ {int member_0; int member_3; int member_2; int member_1; } ;
struct dsp_spdifoscb {int member_3; int member_12; int member_14; int member_15; int member_16; int member_13; TYPE_3__ member_11; scalar_t__ member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; scalar_t__ member_2; TYPE_2__ member_1; int member_0; } ;
struct dsp_spdifiscb {int member_4; int member_5; int member_18; int member_19; int member_21; int member_22; int member_23; int member_20; scalar_t__ member_17; scalar_t__ member_16; int member_15; int member_14; scalar_t__ member_13; int member_12; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_3; int member_2; int member_1; int member_0; } ;
struct dsp_scb_descriptor {struct dsp_scb_descriptor* parent_scb_ptr; struct dsp_symbol_entry* task_entry; int sub_list_ptr; struct dsp_scb_descriptor* next_scb_ptr; } ;
struct dsp_async_codec_input_scb {int member_3; int member_4; int member_5; int member_6; int member_8; int member_10; int member_17; int member_18; int member_20; int member_21; int member_22; int member_24; int member_25; int member_26; int member_23; int member_19; scalar_t__ member_16; scalar_t__ member_15; int member_14; int member_13; scalar_t__ member_12; int member_11; int member_9; scalar_t__ member_7; int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,scalar_t__) ;
 struct dsp_symbol_entry* FUNC_1 (struct snd_cs46xx*,char*,int ) ;
 int FUNC_2 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_cs46xx*,int ,int) ;

__attribute__((used)) static int FUNC_6 (struct snd_cs46xx *VAR_24,
      struct dsp_scb_descriptor * VAR_25)
{
 struct dsp_spos_instance * VAR_26 = VAR_24->dsp_spos_instance;
 struct dsp_symbol_entry * VAR_27;
 struct dsp_symbol_entry * VAR_28;
 struct dsp_symbol_entry * VAR_29;
 struct dsp_scb_descriptor * VAR_30, * VAR_31, * VAR_32;

 VAR_27 = FUNC_1(VAR_24, "S16_ASYNCCODECINPUTTASK", VAR_23);
 if (VAR_27 == ((void*)0)) {
  FUNC_3(VAR_24->card->dev,
   "dsp_spos: symbol S16_ASYNCCODECINPUTTASK not found\n");
  return -VAR_8;
 }
 VAR_28 = FUNC_1(VAR_24, "SPDIFOTASK", VAR_23);
 if (VAR_28 == ((void*)0)) {
  FUNC_3(VAR_24->card->dev,
   "dsp_spos: symbol SPDIFOTASK not found\n");
  return -VAR_8;
 }

 VAR_29 = FUNC_1(VAR_24, "SPDIFITASK", VAR_23);
 if (VAR_29 == ((void*)0)) {
  FUNC_3(VAR_24->card->dev,
   "dsp_spos: symbol SPDIFITASK not found\n");
  return -VAR_8;
 }

 {

  struct dsp_spdifoscb VAR_33 = {
           VAR_7,
   {
            0xb0,
            0,
            0,
            0,
   },




           VAR_15 + VAR_13,
           ( VAR_21 << 0x10 ) | 0xFFFC,
           0,0,
           0,
           VAR_9, VAR_11,
           VAR_28->address,
   VAR_22 + VAR_20,
   {
            0x0040,
            0x20ff,
   },
           0x804c,0,
           0x0108,0x0001,
           VAR_7
  };


  struct dsp_spdifiscb VAR_34 = {
           VAR_6,VAR_5,
           0,
           0,
           1,4000,
           VAR_7,
           0,VAR_5,
           VAR_7,
           VAR_4,VAR_3,
           VAR_7,
           VAR_22, VAR_11,
           VAR_29->address,
   VAR_19 + VAR_17,




           VAR_15 + VAR_12,
           (VAR_18 << 0x10) | 0xFFFC,
           0x8048,0,
           0x01f0,0x0001,
           VAR_7
  };


  struct dsp_async_codec_input_scb VAR_35 = {
           VAR_7,
           0,
           0,
           1,4000,
           0x0118,0x0001,
           VAR_15 + VAR_14,
           (VAR_0 << 0x10) | 0xFFFC,
           VAR_4,0x3,
           VAR_7,
           VAR_19,VAR_11,
           VAR_27->address,
   VAR_10 + VAR_1,

           VAR_16 + VAR_14,
           (VAR_0 << 0x10),
           0,
  };

  VAR_31 = FUNC_0(VAR_24,"SPDIFOSCB",(u32 *)&VAR_33,VAR_22);

  if (FUNC_4(!VAR_31))
   return -VAR_8;
  VAR_30 = FUNC_0(VAR_24,"SPDIFISCB",(u32 *)&VAR_34,VAR_19);
  if (FUNC_4(!VAR_30))
   return -VAR_8;
  VAR_32 = FUNC_0(VAR_24,"AsynCodecInputSCB",(u32 *)&VAR_35, VAR_10);
  if (FUNC_4(!VAR_32))
   return -VAR_8;

  VAR_32->parent_scb_ptr = ((void*)0);
  VAR_32->next_scb_ptr = VAR_30;
  VAR_32->sub_list_ptr = VAR_26->the_null_scb;
  VAR_32->task_entry = VAR_27;

  VAR_30->parent_scb_ptr = VAR_32;
  VAR_30->next_scb_ptr = VAR_31;
  VAR_30->sub_list_ptr = VAR_26->the_null_scb;
  VAR_30->task_entry = VAR_29;

  VAR_31->parent_scb_ptr = VAR_30;
  VAR_31->next_scb_ptr = VAR_25;
  VAR_31->sub_list_ptr = VAR_26->the_null_scb;
  VAR_31->task_entry = VAR_28;



  VAR_25->parent_scb_ptr = VAR_31;


  FUNC_2 (VAR_24,VAR_31);
  FUNC_2 (VAR_24,VAR_30);
  FUNC_2 (VAR_24,VAR_32);


  FUNC_5(VAR_24, VAR_2, 0x1 );
 }

 return 0;
}
