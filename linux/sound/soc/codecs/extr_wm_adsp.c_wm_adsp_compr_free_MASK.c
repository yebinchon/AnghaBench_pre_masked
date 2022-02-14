
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp_compr {struct wm_adsp_compr* raw_buf; int list; struct wm_adsp* dsp; } ;
struct wm_adsp {int pwr_lock; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct wm_adsp_compr* private_data; } ;


 int FUNC_0 (struct wm_adsp_compr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm_adsp_compr*) ;

int FUNC_5(struct snd_compr_stream *VAR_0)
{
 struct wm_adsp_compr *VAR_1 = VAR_0->runtime->private_data;
 struct wm_adsp *VAR_2 = VAR_1->dsp;

 FUNC_2(&VAR_2->pwr_lock);

 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->list);

 FUNC_0(VAR_1->raw_buf);
 FUNC_0(VAR_1);

 FUNC_3(&VAR_2->pwr_lock);

 return 0;
}
