
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_tscm {int unit; TYPE_1__* spec; } ;
typedef int reg ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int pcm_capture_analog_channels; unsigned int pcm_playback_analog_channels; scalar_t__ has_spdif; scalar_t__ has_adat; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_tscm *VAR_4)
{
 __be32 VAR_5;
 u32 VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->spec->pcm_capture_analog_channels; ++VAR_7)
  VAR_6 |= FUNC_0(VAR_7);
 if (VAR_4->spec->has_adat)
  VAR_6 |= 0x0000ff00;
 if (VAR_4->spec->has_spdif)
  VAR_6 |= 0x00030000;

 VAR_5 = FUNC_1(VAR_6);
 VAR_8 = FUNC_2(VAR_4->unit, VAR_0,
     VAR_1 + VAR_3,
     &VAR_5, sizeof(VAR_5), 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->spec->pcm_playback_analog_channels; ++VAR_7)
  VAR_6 |= FUNC_0(VAR_7);
 if (VAR_4->spec->has_adat)
  VAR_6 |= 0x0000ff00;
 if (VAR_4->spec->has_spdif)
  VAR_6 |= 0x00030000;

 VAR_5 = FUNC_1(VAR_6);
 return FUNC_2(VAR_4->unit, VAR_0,
      VAR_1 + VAR_2,
      &VAR_5, sizeof(VAR_5), 0);
}
