
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {scalar_t__ use_count; int opened; int append; size_t stream; int pid; scalar_t__ active_sensing; TYPE_1__* ops; } ;
struct snd_rawmidi {TYPE_2__* streams; } ;
struct TYPE_4__ {int substream_opened; } ;
struct TYPE_3__ {int (* open ) (struct snd_rawmidi_substream*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (struct snd_rawmidi_substream*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi *VAR_2,
     struct snd_rawmidi_substream *VAR_3,
     int VAR_4)
{
 int VAR_5;

 if (VAR_3->use_count == 0) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = VAR_3->ops->open(VAR_3);
  if (VAR_5 < 0) {
   FUNC_2(VAR_3);
   return VAR_5;
  }
  VAR_3->opened = 1;
  VAR_3->active_sensing = 0;
  if (VAR_4 & VAR_0)
   VAR_3->append = 1;
  VAR_3->pid = FUNC_0(FUNC_4(VAR_1));
  VAR_2->streams[VAR_3->stream].substream_opened++;
 }
 VAR_3->use_count++;
 return 0;
}
