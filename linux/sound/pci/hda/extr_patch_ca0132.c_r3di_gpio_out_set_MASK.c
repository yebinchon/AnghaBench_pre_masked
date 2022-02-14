
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef enum r3di_out_select { ____Placeholder_r3di_out_select } r3di_out_select ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
  enum r3di_out_select VAR_4)
{
 unsigned int VAR_5;


 VAR_5 = FUNC_0(VAR_3, 0x01, 0, VAR_0, 0);

 switch (VAR_4) {
 case 129:
  VAR_5 &= ~(1 << VAR_2);
  break;
 case 128:
  VAR_5 |= (1 << VAR_2);
  break;
 }
 FUNC_1(VAR_3, VAR_3->core.afg, 0,
       VAR_1, VAR_5);
}
