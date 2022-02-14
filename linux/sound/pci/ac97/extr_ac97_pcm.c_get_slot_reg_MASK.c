
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ac97_pcm {scalar_t__ stream; TYPE_1__* r; scalar_t__ spdif; } ;
struct TYPE_2__ {size_t* rate_table; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char*** VAR_3 ;

__attribute__((used)) static unsigned char FUNC_0(struct ac97_pcm *VAR_4, unsigned short VAR_5,
      unsigned short VAR_6, int VAR_7)
{
 if (VAR_6 < 3)
  return 0xff;
 if (VAR_6 > 11)
  return 0xff;
 if (VAR_4->spdif)
  return VAR_0;
 if (VAR_4->stream == VAR_1)
  return VAR_3[VAR_7][VAR_4->r[VAR_7].rate_table[VAR_5]][VAR_6 - 3];
 else
  return VAR_2[VAR_6 - 3];
}
