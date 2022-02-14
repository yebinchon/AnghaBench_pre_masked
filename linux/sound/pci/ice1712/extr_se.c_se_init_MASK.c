
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int set_pro_rate; } ;
struct TYPE_4__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int vt1720; TYPE_1__ gpio; TYPE_2__ eeprom; struct se_spec* spec; } ;
struct se_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct se_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_6)
{
 struct se_spec *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_6->spec = VAR_7;

 if (VAR_6->eeprom.subvendor == VAR_4) {
  VAR_6->num_total_dacs = 2;
  VAR_6->num_total_adcs = 0;
  VAR_6->vt1720 = 1;
  return 0;

 } else if (VAR_6->eeprom.subvendor == VAR_3) {
  VAR_6->num_total_dacs = 8;
  VAR_6->num_total_adcs = 2;
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);
  VAR_6->gpio.set_pro_rate = VAR_5;
  return 0;
 }

 return -VAR_0;
}
