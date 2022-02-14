
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm_coeff_ctl {int flags; char* cache; TYPE_3__* dsp; int len; scalar_t__ enabled; } ;
struct soc_bytes_ext {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {char* data; } ;
struct TYPE_5__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int pwr_lock; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm_coeff_ctl* FUNC_0 (struct soc_bytes_ext*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm_coeff_ctl*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct soc_bytes_ext *VAR_4 =
  (struct soc_bytes_ext *)VAR_2->private_value;
 struct wm_coeff_ctl *VAR_5 = FUNC_0(VAR_4);
 char *VAR_6 = VAR_3->value.bytes.data;
 int VAR_7 = 0;

 FUNC_2(&VAR_5->dsp->pwr_lock);

 if (VAR_5->flags & VAR_1) {
  if (VAR_5->enabled && VAR_5->dsp->running)
   VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_5->len);
  else
   VAR_7 = -VAR_0;
 } else {
  if (!VAR_5->flags && VAR_5->enabled && VAR_5->dsp->running)
   VAR_7 = FUNC_4(VAR_5, VAR_5->cache, VAR_5->len);

  FUNC_1(VAR_6, VAR_5->cache, VAR_5->len);
 }

 FUNC_3(&VAR_5->dsp->pwr_lock);

 return VAR_7;
}
