
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* saved; } ;
struct snd_ice1712 {int vt1724; int num_total_dacs; int num_total_adcs; int akm_codecs; int pm_suspend_enabled; int * pm_resume; struct prodigy_hifi_spec* spec; void* akm; TYPE_1__ gpio; scalar_t__ vt1720; } ;
struct snd_akm4xxx {int dummy; } ;
struct prodigy_hifi_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*) ;
 void* FUNC_1 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_3)
{
 struct prodigy_hifi_spec *VAR_4;

 VAR_3->vt1720 = 0;
 VAR_3->vt1724 = 1;

 VAR_3->num_total_dacs = 1;
 VAR_3->num_total_adcs = 1;




 VAR_3->gpio.saved[0] = 0;


 VAR_3->akm = FUNC_1(sizeof(struct snd_akm4xxx), VAR_1);
 if (! VAR_3->akm)
  return -VAR_0;
 VAR_3->akm_codecs = 1;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->spec = VAR_4;






 FUNC_0(VAR_3);

 return 0;
}
