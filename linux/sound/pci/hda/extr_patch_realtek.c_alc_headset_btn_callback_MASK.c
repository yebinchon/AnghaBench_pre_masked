
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int unsol_res; TYPE_1__* jack; } ;
struct hda_codec {int dummy; } ;
struct TYPE_2__ {int button_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_4,
         struct hda_jack_callback *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->unsol_res & (7 << 13))
  VAR_6 |= VAR_0;

 if (VAR_5->unsol_res & (1 << 16 | 3 << 8))
  VAR_6 |= VAR_1;


 if (VAR_5->unsol_res & (7 << 23))
  VAR_6 |= VAR_2;


 if (VAR_5->unsol_res & (7 << 10))
  VAR_6 |= VAR_3;

 VAR_5->jack->button_state = VAR_6;
}
