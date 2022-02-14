
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {scalar_t__ beep; int card; TYPE_1__* bus; } ;
struct TYPE_2__ {int shutdown; } ;


 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct hda_codec *VAR_0)
{
 if (!VAR_0->bus->shutdown && VAR_0->beep)
  FUNC_0(VAR_0->card, VAR_0->beep);
}
