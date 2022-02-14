
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp_compr_buf {int avail; scalar_t__ error; } ;
struct wm_adsp_compr {int copied_total; int sample_rate; struct wm_adsp_compr_buf* buf; struct wm_adsp* dsp; } ;
struct wm_adsp {int pwr_lock; scalar_t__ fatal_error; } ;
struct snd_compr_tstamp {int copied_total; int sampling_rate; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct wm_adsp_compr* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wm_adsp_compr*,char*) ;
 int FUNC_1 (struct wm_adsp_compr*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_compr_stream*,int ) ;
 int FUNC_5 (struct wm_adsp_compr_buf*) ;
 int FUNC_6 (struct wm_adsp_compr_buf*) ;
 int FUNC_7 (struct wm_adsp_compr_buf*) ;
 int FUNC_8 (struct wm_adsp_compr*) ;

int FUNC_9(struct snd_compr_stream *VAR_3,
     struct snd_compr_tstamp *VAR_4)
{
 struct wm_adsp_compr *VAR_5 = VAR_3->runtime->private_data;
 struct wm_adsp *VAR_6 = VAR_5->dsp;
 struct wm_adsp_compr_buf *VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_5, "Pointer request\n");

 FUNC_2(&VAR_6->pwr_lock);

 VAR_7 = VAR_5->buf;

 if (VAR_6->fatal_error || !VAR_7 || VAR_7->error) {
  FUNC_4(VAR_3, VAR_1);
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_7->avail < FUNC_8(VAR_5)) {
  VAR_8 = FUNC_7(VAR_7);
  if (VAR_8 < 0) {
   FUNC_1(VAR_5, "Error reading avail: %d\n", VAR_8);
   goto out;
  }





  if (VAR_7->avail < FUNC_8(VAR_5)) {
   VAR_8 = FUNC_5(VAR_7);
   if (VAR_8 < 0) {
    if (VAR_7->error)
     FUNC_4(VAR_3,
       VAR_1);
    goto out;
   }

   VAR_8 = FUNC_6(VAR_7);
   if (VAR_8 < 0) {
    FUNC_1(VAR_5, "Failed to re-enable buffer IRQ: %d\n",
       VAR_8);
    goto out;
   }
  }
 }

 VAR_4->copied_total = VAR_5->copied_total;
 VAR_4->copied_total += VAR_7->avail * VAR_2;
 VAR_4->sampling_rate = VAR_5->sample_rate;

out:
 FUNC_3(&VAR_6->pwr_lock);

 return VAR_8;
}
