
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int private_data; } ;
struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
       struct hda_jack_callback *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->core.afg, 0,
      VAR_0, 0);

 FUNC_1(VAR_1, VAR_1->core.afg, 0, 0x7e0,
       !!(VAR_3 & (1 << VAR_2->private_data)));
}
