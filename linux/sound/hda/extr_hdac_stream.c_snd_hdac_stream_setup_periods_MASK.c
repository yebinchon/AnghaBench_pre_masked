
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct TYPE_2__ {scalar_t__ area; } ;
struct hdac_stream {int period_bytes; int bufsize; int no_period_wakeup; scalar_t__ frags; TYPE_1__ bdl; struct snd_pcm_substream* substream; struct hdac_bus* bus; } ;
struct hdac_bus {int bdl_pos_adj; int dev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int) ;
 int FUNC_3 (struct hdac_bus*,int ,struct hdac_stream*,int **,int,int,int) ;
 int FUNC_4 (struct hdac_stream*,int ,int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;

int FUNC_6(struct hdac_stream *VAR_3)
{
 struct hdac_bus *VAR_4 = VAR_3->bus;
 struct snd_pcm_substream *VAR_5 = VAR_3->substream;
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 __le32 *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;


 FUNC_4(VAR_3, VAR_1, 0);
 FUNC_4(VAR_3, VAR_2, 0);

 VAR_11 = VAR_3->period_bytes;
 VAR_10 = VAR_3->bufsize / VAR_11;


 VAR_7 = (__le32 *)VAR_3->bdl.area;
 VAR_9 = 0;
 VAR_3->frags = 0;

 VAR_12 = VAR_4->bdl_pos_adj;
 if (!VAR_3->no_period_wakeup && VAR_12 > 0) {
  VAR_13 = VAR_12;
  VAR_12 = (VAR_12 * VAR_6->rate + 47999) / 48000;
  if (!VAR_12)
   VAR_12 = VAR_13;
  else
   VAR_12 = ((VAR_12 + VAR_13 - 1) / VAR_13) *
    VAR_13;
  VAR_12 = FUNC_2(VAR_6, VAR_12);
  if (VAR_12 >= VAR_11) {
   FUNC_1(VAR_4->dev, "Too big adjustment %d\n",
     VAR_12);
   VAR_12 = 0;
  } else {
   VAR_9 = FUNC_3(VAR_4, FUNC_5(VAR_5),
      VAR_3,
      &VAR_7, VAR_9, VAR_12, 1);
   if (VAR_9 < 0)
    goto error;
  }
 } else
  VAR_12 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (VAR_8 == VAR_10 - 1 && VAR_12)
   VAR_9 = FUNC_3(VAR_4, FUNC_5(VAR_5),
      VAR_3, &VAR_7, VAR_9,
      VAR_11 - VAR_12, 0);
  else
   VAR_9 = FUNC_3(VAR_4, FUNC_5(VAR_5),
      VAR_3, &VAR_7, VAR_9,
      VAR_11,
      !VAR_3->no_period_wakeup);
  if (VAR_9 < 0)
   goto error;
 }
 return 0;

 error:
 FUNC_0(VAR_4->dev, "Too many BDL entries: buffer=%d, period=%d\n",
  VAR_3->bufsize, VAR_11);
 return -VAR_0;
}
