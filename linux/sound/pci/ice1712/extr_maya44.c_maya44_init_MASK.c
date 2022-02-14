
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_maya44 {int * wm; struct snd_ice1712* ice; int mutex; } ;
struct TYPE_2__ {int set_pro_rate; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int force_rdma1; int own_routing; TYPE_1__ gpio; int * hw_rates; scalar_t__ akm_codecs; struct snd_maya44* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_maya44* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (struct snd_ice1712*,int *,int ) ;
 int FUNC_3 (struct snd_maya44*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_6)
{
 int VAR_7;
 struct snd_maya44 *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 FUNC_1(&VAR_8->mutex);
 VAR_8->ice = VAR_6;
 VAR_6->spec = VAR_8;


 VAR_6->num_total_dacs = 4;
 VAR_6->num_total_adcs = 4;
 VAR_6->akm_codecs = 0;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  FUNC_2(VAR_6, &VAR_8->wm[VAR_7], VAR_5[VAR_7]);
  FUNC_3(VAR_8, VAR_7, VAR_2);
 }


 VAR_6->hw_rates = &VAR_3;


 VAR_6->gpio.set_pro_rate = VAR_4;


 VAR_6->force_rdma1 = 1;


 VAR_6->own_routing = 1;

 return 0;
}
