
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef enum r3di_dsp_status { ____Placeholder_r3di_dsp_status } r3di_dsp_status ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
  enum r3di_dsp_status VAR_5)
{
 unsigned int VAR_6;


 VAR_6 = FUNC_0(VAR_4, 0x01, 0, VAR_0, 0);

 switch (VAR_5) {
 case 128:
  VAR_6 |= (1 << VAR_3);
  FUNC_1(VAR_4, VAR_4->core.afg, 0,
    VAR_1, VAR_6);
  break;
 case 129:

  VAR_6 &= ~(1 << VAR_3);

  FUNC_1(VAR_4, VAR_4->core.afg, 0,
    VAR_1, VAR_6);

  VAR_6 |= (1 << VAR_2);
  break;
 }

 FUNC_1(VAR_4, VAR_4->core.afg, 0,
       VAR_1, VAR_6);
}
