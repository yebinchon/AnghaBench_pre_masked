
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_3__ {int channels_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_4)
{
 VAR_4->runtime->hw.channels_max = 1;
 FUNC_0(VAR_4->runtime, 0,
       VAR_0,
       &VAR_3);

 return FUNC_0(VAR_4->runtime, 0,
   VAR_1,
   &VAR_2);
}
