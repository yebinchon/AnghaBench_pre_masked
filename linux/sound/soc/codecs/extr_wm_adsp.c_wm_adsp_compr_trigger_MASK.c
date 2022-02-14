
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp_compr {int buf; struct wm_adsp* dsp; } ;
struct wm_adsp {int pwr_lock; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct wm_adsp_compr* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct wm_adsp_compr*,char*,int) ;
 int FUNC_2 (struct wm_adsp_compr*,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct wm_adsp_compr*) ;
 int FUNC_9 (struct wm_adsp_compr*) ;
 int FUNC_10 (struct wm_adsp_compr*) ;

int FUNC_11(struct snd_compr_stream *VAR_2, int VAR_3)
{
 struct wm_adsp_compr *VAR_4 = VAR_2->runtime->private_data;
 struct wm_adsp *VAR_5 = VAR_4->dsp;
 int VAR_6 = 0;

 FUNC_1(VAR_4, "Trigger: %d\n", VAR_3);

 FUNC_3(&VAR_5->pwr_lock);

 switch (VAR_3) {
 case 129:
  if (!FUNC_9(VAR_4)) {
   VAR_6 = FUNC_8(VAR_4);
   if (VAR_6 < 0) {
    FUNC_2(VAR_4, "Failed to link buffer and stream: %d\n",
       VAR_6);
    break;
   }
  }

  VAR_6 = FUNC_6(VAR_4->buf);
  if (VAR_6 < 0)
   break;


  VAR_6 = FUNC_7(VAR_4->buf,
        FUNC_0(VAR_1),
        FUNC_10(VAR_4));
  if (VAR_6 < 0) {
   FUNC_2(VAR_4, "Failed to set high water mark: %d\n",
      VAR_6);
   break;
  }
  break;
 case 128:
  if (FUNC_9(VAR_4))
   FUNC_5(VAR_4->buf);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_4(&VAR_5->pwr_lock);

 return VAR_6;
}
