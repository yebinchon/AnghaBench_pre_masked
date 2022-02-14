
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wm8776 {int agc_mode; TYPE_1__* ctl; } ;
struct TYPE_2__ {int flags; int name; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_wm8776*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_wm8776 *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 switch (VAR_3->agc_mode) {
 case 128:
  VAR_6 = VAR_2 | VAR_1;
  break;
 case 129:
  VAR_6 = VAR_1;
  VAR_5 = VAR_2;
  break;
 case 131:
 case 132:
 case 130:
  VAR_6 = VAR_2;
  VAR_5 = VAR_1;
  break;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->ctl[VAR_4].flags & VAR_6)
   FUNC_0(VAR_3, VAR_3->ctl[VAR_4].name, 0);
  else if (VAR_3->ctl[VAR_4].flags & VAR_5)
   FUNC_0(VAR_3, VAR_3->ctl[VAR_4].name, 1);
}
