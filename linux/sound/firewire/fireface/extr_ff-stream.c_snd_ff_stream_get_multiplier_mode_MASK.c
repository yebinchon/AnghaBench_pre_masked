
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum snd_ff_stream_mode { ____Placeholder_snd_ff_stream_mode } snd_ff_stream_mode ;
typedef enum cip_sfc { ____Placeholder_cip_sfc } cip_sfc ;
 int VAR_0 ;
 int VAR_1 ;




int FUNC_0(enum cip_sfc VAR_2,
          enum snd_ff_stream_mode *VAR_3)
{
 static const enum snd_ff_stream_mode VAR_4[] = {
  [135] = 129,
  [134] = 129,
  [133] = 129,
  [132] = 128,
  [131] = 128,
  [137] = 130,
  [136] = 130,
 };

 if (VAR_2 >= VAR_0)
  return -VAR_1;

 *VAR_3 = VAR_4[VAR_2];

 return 0;
}
