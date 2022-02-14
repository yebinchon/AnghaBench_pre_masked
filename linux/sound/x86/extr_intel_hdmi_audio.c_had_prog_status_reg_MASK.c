
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int wrd_len; int max_wrd_len; } ;
union aud_ch_status_1 {int regval; TYPE_3__ regx; } ;
struct TYPE_4__ {int lpcm_id; int clk_acc; int samp_freq; } ;
union aud_ch_status_0 {int regval; TYPE_1__ regx; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_intelhad {int aes_bits; } ;
struct TYPE_5__ {int rate; int format; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int FUNC_0 (struct snd_intelhad*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_16,
   struct snd_intelhad *VAR_17)
{
 union aud_ch_status_0 VAR_18 = {.regval = 0};
 union aud_ch_status_1 VAR_19 = {.regval = 0};

 VAR_18 = (VAR_17->aes_bits &
       VAR_10) >> 1;
 VAR_18 = (VAR_17->aes_bits &
       VAR_11) >> 4;

 switch (VAR_16->runtime->rate) {
 case 135:
  VAR_18 = VAR_4;
  break;

 case 134:
  VAR_18 = VAR_5;
  break;
 case 133:
  VAR_18 = VAR_6;
  break;
 case 132:
  VAR_18 = VAR_7;
  break;
 case 131:
  VAR_18 = VAR_8;
  break;
 case 137:
  VAR_18 = VAR_2;
  break;
 case 136:
  VAR_18 = VAR_3;
  break;

 default:

  return -VAR_9;
 }

 FUNC_0(VAR_17,
      VAR_0, VAR_18);

 switch (VAR_16->runtime->format) {
 case 130:
  VAR_19 = VAR_12;
  VAR_19 = VAR_14;
  break;
 case 129:
 case 128:
  VAR_19 = VAR_13;
  VAR_19 = VAR_15;
  break;
 default:
  return -VAR_9;
 }

 FUNC_0(VAR_17,
      VAR_1, VAR_19);
 return 0;
}
