
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_miro {int res_mc_base; TYPE_1__* aci; int res_aci_port; } ;
struct snd_card {struct snd_miro* private_data; } ;
struct TYPE_2__ {scalar_t__ aci_port; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct snd_miro *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1->res_aci_port);
 if (VAR_1->aci)
  VAR_1->aci->aci_port = 0;
 FUNC_0(VAR_1->res_mc_base);
}
