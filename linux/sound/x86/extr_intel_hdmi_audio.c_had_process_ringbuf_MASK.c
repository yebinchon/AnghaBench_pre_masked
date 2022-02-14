
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_intelhad {int period_bytes; int num_bds; int pcmbuf_head; int had_spinlock; int dev; int bd_head; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_3 (struct snd_intelhad*,int ,int*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1,
          struct snd_intelhad *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_4 = 0;
 FUNC_4(&VAR_2->had_spinlock, VAR_5);
 for (;;) {

  FUNC_3(VAR_2,
      FUNC_0(VAR_2->bd_head),
      &VAR_3);
  if (VAR_3 < 0 || VAR_3 > VAR_2->period_bytes) {
   FUNC_1(VAR_2->dev, "Invalid buf length %d\n",
    VAR_3);
   VAR_3 = -VAR_0;
   goto out;
  }

  if (VAR_3 > 0)
   break;


  if (++VAR_4 >= VAR_2->num_bds) {
   VAR_3 = -VAR_0;
   goto out;
  }
  FUNC_2(VAR_1, VAR_2);
 }

 VAR_3 = VAR_2->period_bytes - VAR_3;
 VAR_3 += VAR_2->period_bytes * VAR_2->pcmbuf_head;
 out:
 FUNC_5(&VAR_2->had_spinlock, VAR_5);
 return VAR_3;
}
