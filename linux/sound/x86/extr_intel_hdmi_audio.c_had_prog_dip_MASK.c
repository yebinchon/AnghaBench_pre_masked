
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int chnl_alloc; } ;
union aud_info_frame3 {int regval; TYPE_2__ regx; } ;
struct TYPE_7__ {int chnl_cnt; int chksum; } ;
union aud_info_frame2 {int regval; TYPE_3__ regx; } ;
struct TYPE_8__ {int dip_freq; int dip_en_sta; } ;
union aud_ctrl_st {int regval; TYPE_4__ regx; } ;
typedef int u8 ;
typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_intelhad {scalar_t__ dp_output; } ;
struct TYPE_5__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_intelhad*,int) ;
 int FUNC_1 (struct snd_intelhad*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_7,
    struct snd_intelhad *VAR_8)
{
 int VAR_9;
 union aud_ctrl_st VAR_10 = {.regval = 0};
 union aud_info_frame2 VAR_11 = {.regval = 0};
 union aud_info_frame3 VAR_12 = {.regval = 0};
 u8 VAR_13 = 0;
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = VAR_7->runtime->channels;

 FUNC_1(VAR_8, VAR_0, VAR_10.regval);

 VAR_16 = FUNC_0(VAR_8, VAR_15);
 if (VAR_8->dp_output) {
  VAR_14 = VAR_3;
  VAR_11 = (VAR_7->runtime->channels - 1) | (VAR_16 << 24);
 } else {
  VAR_14 = VAR_5;
  VAR_11 = VAR_7->runtime->channels - 1;
  VAR_12 = VAR_16;


  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_13 += (VAR_14 >> (VAR_9 * 8)) & 0xff;
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_13 += (VAR_11 >> (VAR_9 * 8)) & 0xff;
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_13 += (VAR_12 >> (VAR_9 * 8)) & 0xff;

  VAR_11 = -(VAR_13);
 }

 FUNC_1(VAR_8, VAR_1, VAR_14);
 FUNC_1(VAR_8, VAR_1, VAR_11);
 FUNC_1(VAR_8, VAR_1, VAR_12);


 for (VAR_9 = 0; VAR_9 < VAR_4-VAR_6; VAR_9++)
  FUNC_1(VAR_8, VAR_1, 0x0);

 VAR_10.regx.dip_freq = 1;
 VAR_10.regx.dip_en_sta = 1;
 FUNC_1(VAR_8, VAR_0, VAR_10.regval);
}
