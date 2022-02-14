
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; TYPE_1__* pstr; } ;
struct snd_pcm_runtime {int info; } ;
struct TYPE_2__ {int substream_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_6, int VAR_7)
{

 if (VAR_6 == ((void*)0)) {
  VAR_7 &= ~VAR_0;
  return VAR_7;
 }
 return VAR_7;
}
