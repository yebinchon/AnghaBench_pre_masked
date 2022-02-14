
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rme9652 {TYPE_1__* pcm; scalar_t__ playback_substream; scalar_t__ capture_substream; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int substream; } ;
struct TYPE_3__ {TYPE_2__* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct snd_rme9652*,int ) ;
 int FUNC_1 (struct snd_rme9652*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct snd_rme9652 *VAR_9 = (struct snd_rme9652 *) VAR_8;

 if (!(FUNC_0(VAR_9, VAR_4) & VAR_2)) {
  return VAR_1;
 }

 FUNC_1(VAR_9, VAR_3, 0);

 if (VAR_9->capture_substream) {
  FUNC_2(VAR_9->pcm->streams[VAR_5].substream);
 }

 if (VAR_9->playback_substream) {
  FUNC_2(VAR_9->pcm->streams[VAR_6].substream);
 }
 return VAR_0;
}
