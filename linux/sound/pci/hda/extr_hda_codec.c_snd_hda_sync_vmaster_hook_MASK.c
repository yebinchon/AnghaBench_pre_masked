
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_vmaster_mute_hook {int sw_kctl; TYPE_2__* codec; int hook; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ shutdown; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hda_vmaster_mute_hook *VAR_0)
{
 if (!VAR_0->hook || !VAR_0->codec)
  return;



 if (VAR_0->codec->bus->shutdown)
  return;
 FUNC_0(VAR_0->sw_kctl);
}
