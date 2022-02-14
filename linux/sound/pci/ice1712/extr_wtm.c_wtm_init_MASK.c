
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtm_spec {int mute_mutex; } ;
struct TYPE_2__ {int set_pro_rate; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int force_rdma1; TYPE_1__ gpio; struct wtm_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct wtm_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*,unsigned short,unsigned short) ;
 int FUNC_3 (struct snd_ice1712*,unsigned short,unsigned short) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_3)
{
 static unsigned short VAR_4[] = {
  128, 0,
  129, 0x11,
  (unsigned short)-1
 };
 unsigned short *VAR_5;
 struct wtm_spec *VAR_6;


 VAR_3->num_total_dacs = 8;
 VAR_3->num_total_adcs = 4;
 VAR_3->force_rdma1 = 1;


 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_3->spec = VAR_6;
 FUNC_1(&VAR_6->mute_mutex);



 VAR_5 = VAR_4;
 for (; *VAR_5 != (unsigned short)-1; VAR_5 += 2) {
  FUNC_3(VAR_3, VAR_5[0], VAR_5[1]);
  FUNC_2(VAR_3, VAR_5[0], VAR_5[1]);
 }
 VAR_3->gpio.set_pro_rate = VAR_2;
 return 0;
}
