
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm_adsp_compr {TYPE_2__* dsp; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct snd_compr_caps {int num_codecs; int max_fragments; int min_fragments; int max_fragment_size; int min_fragment_size; int direction; int * codecs; } ;
struct TYPE_8__ {int num_caps; int compr_direction; TYPE_3__* caps; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int fw; } ;
struct TYPE_5__ {struct wm_adsp_compr* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;

int FUNC_0(struct snd_compr_stream *VAR_5,
      struct snd_compr_caps *VAR_6)
{
 struct wm_adsp_compr *VAR_7 = VAR_5->runtime->private_data;
 int VAR_8 = VAR_7->dsp->fw;
 int VAR_9;

 if (VAR_4[VAR_8].caps) {
  for (VAR_9 = 0; VAR_9 < VAR_4[VAR_8].num_caps; VAR_9++)
   VAR_6->codecs[VAR_9] = VAR_4[VAR_8].caps[VAR_9].id;

  VAR_6->num_codecs = VAR_9;
  VAR_6->direction = VAR_4[VAR_8].compr_direction;

  VAR_6->min_fragment_size = VAR_3;
  VAR_6->max_fragment_size = VAR_1;
  VAR_6->min_fragments = VAR_2;
  VAR_6->max_fragments = VAR_0;
 }

 return 0;
}
