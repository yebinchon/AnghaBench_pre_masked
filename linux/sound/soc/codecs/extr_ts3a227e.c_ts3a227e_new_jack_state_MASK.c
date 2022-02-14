
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts3a227e {int plugged; int mic_present; int regmap; scalar_t__ buttons_held; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ts3a227e *VAR_4, unsigned VAR_5)
{
 bool VAR_6, VAR_7;

 VAR_6 = !!(VAR_5 & VAR_1);
 VAR_7 = VAR_6 && !!(VAR_5 & VAR_0);

 VAR_4->plugged = VAR_6;

 if (VAR_7 != VAR_4->mic_present) {
  VAR_4->mic_present = VAR_7;
  VAR_4->buttons_held = 0;
  if (VAR_7) {

   FUNC_0(VAR_4->regmap,
        VAR_3,
        VAR_2, VAR_2);
  }
 }
}
