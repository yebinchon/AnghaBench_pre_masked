
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* ops; int rmidi; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int drain; scalar_t__ avail; scalar_t__ buffer_size; int sleep; } ;
struct TYPE_2__ {int (* drain ) (struct snd_rawmidi_substream*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,long,long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct snd_rawmidi_substream*) ;
 int FUNC_4 (struct snd_rawmidi_substream*) ;
 long FUNC_5 (int ,int,int) ;

int FUNC_6(struct snd_rawmidi_substream *VAR_4)
{
 int VAR_5;
 long VAR_6;
 struct snd_rawmidi_runtime *VAR_7 = VAR_4->runtime;

 VAR_5 = 0;
 VAR_7->drain = 1;
 VAR_6 = FUNC_5(VAR_7->sleep,
    (VAR_7->avail >= VAR_7->buffer_size),
    10*VAR_2);
 if (FUNC_2(VAR_3))
  VAR_5 = -VAR_1;
 if (VAR_7->avail < VAR_7->buffer_size && !VAR_6) {
  FUNC_1(VAR_4->rmidi,
      "rawmidi drain error (avail = %li, buffer_size = %li)\n",
      (long)VAR_7->avail, (long)VAR_7->buffer_size);
  VAR_5 = -VAR_0;
 }
 VAR_7->drain = 0;
 if (VAR_5 != -VAR_1) {

  if (VAR_4->ops->drain)
   VAR_4->ops->drain(VAR_4);
  else
   FUNC_0(50);
  FUNC_3(VAR_4);
 }
 return VAR_5;
}
