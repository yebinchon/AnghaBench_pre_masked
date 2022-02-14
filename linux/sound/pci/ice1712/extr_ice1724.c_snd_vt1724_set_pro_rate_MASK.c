
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* setup_rate ) (struct snd_ice1712*,unsigned int) ;} ;
struct TYPE_11__ {TYPE_4__ ops; } ;
struct TYPE_8__ {int (* set_pro_rate ) (struct snd_ice1712*,unsigned int) ;int (* i2s_mclk_changed ) (struct snd_ice1712*) ;} ;
struct snd_ice1712 {unsigned int cur_rate; unsigned int (* get_rate ) (struct snd_ice1712*) ;unsigned char (* set_mclk ) (struct snd_ice1712*,unsigned int) ;unsigned int akm_codecs; TYPE_5__ spdif; TYPE_6__* akm; TYPE_2__ gpio; int reg_lock; int (* set_rate ) (struct snd_ice1712*,unsigned int) ;int (* is_spdif_master ) (struct snd_ice1712*) ;TYPE_1__* hw_rates; } ;
struct TYPE_9__ {int (* set_rate_val ) (TYPE_6__*,unsigned int) ;} ;
struct TYPE_12__ {TYPE_3__ ops; } ;
struct TYPE_7__ {unsigned int* list; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_ice1712*) ;
 unsigned int FUNC_6 (struct snd_ice1712*) ;
 int FUNC_7 (struct snd_ice1712*,unsigned int) ;
 unsigned char FUNC_8 (struct snd_ice1712*,unsigned int) ;
 int FUNC_9 (struct snd_ice1712*) ;
 int FUNC_10 (struct snd_ice1712*,unsigned int) ;
 int FUNC_11 (TYPE_6__*,unsigned int) ;
 int FUNC_12 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct snd_ice1712 *VAR_6, unsigned int VAR_7,
        int VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10;
 unsigned int VAR_11, VAR_12;

 if (VAR_7 > VAR_6->hw_rates->list[VAR_6->hw_rates->count - 1])
  return -VAR_5;

 FUNC_3(&VAR_6->reg_lock, VAR_9);
 if ((FUNC_1(FUNC_0(VAR_6, VAR_0)) & VAR_3) ||
     (FUNC_1(FUNC_0(VAR_6, VAR_1)) & VAR_2)) {

  FUNC_4(&VAR_6->reg_lock, VAR_9);
  return ((VAR_7 == VAR_6->cur_rate) && !VAR_8) ? 0 : -VAR_4;
 }
 if (!VAR_8 && FUNC_2(VAR_6)) {


  FUNC_4(&VAR_6->reg_lock, VAR_9);
  return (VAR_7 == VAR_6->cur_rate) ? 0 : -VAR_4;
 }

 if (VAR_8 || !VAR_6->is_spdif_master(VAR_6)) {


  VAR_12 = VAR_6->get_rate(VAR_6);
  if (VAR_8 || (VAR_12 != VAR_7))
   VAR_6->set_rate(VAR_6, VAR_7);
  else if (VAR_7 == VAR_6->cur_rate) {
   FUNC_4(&VAR_6->reg_lock, VAR_9);
   return 0;
  }
 }

 VAR_6->cur_rate = VAR_7;


 VAR_10 = VAR_6->set_mclk(VAR_6, VAR_7);

 FUNC_4(&VAR_6->reg_lock, VAR_9);

 if (VAR_10 && VAR_6->gpio.i2s_mclk_changed)
  VAR_6->gpio.i2s_mclk_changed(VAR_6);
 if (VAR_6->gpio.set_pro_rate)
  VAR_6->gpio.set_pro_rate(VAR_6, VAR_7);


 for (VAR_11 = 0; VAR_11 < VAR_6->akm_codecs; VAR_11++) {
  if (VAR_6->akm[VAR_11].ops.set_rate_val)
   VAR_6->akm[VAR_11].ops.set_rate_val(&VAR_6->akm[VAR_11], VAR_7);
 }
 if (VAR_6->spdif.ops.setup_rate)
  VAR_6->spdif.ops.setup_rate(VAR_6, VAR_7);

 return 0;
}
