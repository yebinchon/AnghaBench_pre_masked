
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_4__ {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_3__ {int member_3; scalar_t__ member_2; scalar_t__ member_1; int member_0; } ;
struct dsp_mix2_ostream_scb {int member_6; int member_7; int member_8; int member_10; int member_11; int member_12; int member_13; int member_9; scalar_t__ member_5; int member_4; int member_3; int member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int*,int,char*,struct dsp_scb_descriptor*,int) ;

struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_15, char * VAR_16,
                                     u16 VAR_17, u16 VAR_18, u32 VAR_19,
                                     struct dsp_scb_descriptor * VAR_20,
                                     int VAR_21)
{
 struct dsp_scb_descriptor * VAR_22;

 struct dsp_mix2_ostream_scb VAR_23 = {

  {
   VAR_3 +
   VAR_2 +
   VAR_1 +
   VAR_5 +
   VAR_4 +
   15,

   VAR_6 +
   VAR_7 +

   VAR_0,
   VAR_8 +
   VAR_17,
   0x0
  },

  { 0, 0, 0, 0, 0, },
  0,0,
  0,VAR_18,

  VAR_9 +
  (19 << VAR_11) +

  ((VAR_19 >> 4) << VAR_14) +
  VAR_10 +
  VAR_13 +
  VAR_12,
  (VAR_17 + (32 * 4)) << 0x10,
  1,0,
  0x0001,0x0080,
  0xFFFF,0
 };


 VAR_22 = FUNC_0(VAR_15,VAR_16,(u32 *)&VAR_23,

     VAR_19,"S16_MIX_TO_OSTREAM",VAR_20,
         VAR_21);

 return VAR_22;
}
