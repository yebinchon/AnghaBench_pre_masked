
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* saved; } ;
struct snd_ice1712 {int vt1724; int num_total_dacs; int num_total_adcs; int akm_codecs; int pm_suspend_enabled; int * pm_resume; struct prodigy_hifi_spec* spec; void* akm; TYPE_1__ gpio; scalar_t__ vt1720; } ;
struct snd_akm4xxx {int dummy; } ;
struct prodigy_hifi_spec {int dummy; } ;


 unsigned int FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_ice1712*) ;
 int FUNC_4 (struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_3)
{
 static unsigned short VAR_4[] = {
  131, 0x0022,
  136, 0x0022,
  145, 0x0022,
  138, 0x0090,
  129, 0x0001,
  133, 0x0179,
  132, 0x0179,
  140, 0x0000,
  140, 0x0100,
  139, 0x0000,
  139, 0x0100,
  128, 0x0000,



  137, 0x0000,
  147, 0x0000,
  146, 0x0000,

  143, 0x007b,
  142, 0x0000,
  141, 0x0000,
  130, 0x0000,

  134, 0x0000,
  144, 0x0003,
 };
 struct prodigy_hifi_spec *VAR_5;
 unsigned int VAR_6;

 VAR_3->vt1720 = 0;
 VAR_3->vt1724 = 1;

 VAR_3->num_total_dacs = 8;
 VAR_3->num_total_adcs = 1;




 VAR_3->gpio.saved[0] = 0;


 VAR_3->akm = FUNC_1(sizeof(struct snd_akm4xxx), VAR_1);
 if (! VAR_3->akm)
  return -VAR_0;
 VAR_3->akm_codecs = 1;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_3->spec = VAR_5;


 FUNC_4(VAR_3);
 FUNC_2(1);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6 += 2)
  FUNC_5(VAR_3, VAR_4[VAR_6], VAR_4[VAR_6 + 1]);

 FUNC_3(VAR_3);






 return 0;
}
