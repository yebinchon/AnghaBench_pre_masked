
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ff {int unit; TYPE_1__* spec; } ;
typedef int __le32 ;
struct TYPE_2__ {int * pcm_playback_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_ff *VAR_5, bool VAR_6)
{
 unsigned int VAR_7;
 __le32 *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
  VAR_7 = FUNC_3(VAR_7, VAR_5->spec->pcm_playback_channels[VAR_9]);

 VAR_8 = FUNC_1(VAR_7, sizeof(__le32), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 if (!VAR_6) {







  for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9)
   VAR_8[VAR_9] = FUNC_0(0x00000001);
 }

 VAR_10 = FUNC_4(VAR_5->unit, VAR_4,
     VAR_1, VAR_8,
     sizeof(__le32) * VAR_7, 0);
 FUNC_2(VAR_8);
 return VAR_10;
}
