
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct lola_stream {int period_bytes; int bufsize; int index; scalar_t__ frags; } ;
struct TYPE_3__ {scalar_t__ area; } ;
struct lola_pcm {TYPE_1__ bdl; } ;
struct lola {TYPE_2__* card; } ;
typedef int __le32 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct snd_pcm_substream*,struct lola_stream*,int **,int,int) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_2, struct lola_pcm *VAR_3,
         struct snd_pcm_substream *VAR_4,
         struct lola_stream *VAR_5)
{
 __le32 *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_10 = VAR_5->period_bytes;
 VAR_9 = VAR_5->bufsize / VAR_10;


 VAR_6 = (__le32 *)(VAR_3->bdl.area + VAR_1 * VAR_5->index);
 VAR_8 = 0;
 VAR_5->frags = 0;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_6, VAR_8, VAR_10);
  if (VAR_8 < 0)
   goto error;
 }
 return 0;

 error:
 FUNC_0(VAR_2->card->dev, "Too many BDL entries: buffer=%d, period=%d\n",
     VAR_5->bufsize, VAR_10);
 return -VAR_0;
}
