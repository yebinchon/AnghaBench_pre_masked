
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; struct juli_spec* spec; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;
struct juli_spec {int ak4114; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char VAR_5 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int ) ;
 unsigned char FUNC_4 (struct snd_akm4xxx*,int ,int) ;
 int FUNC_5 (struct snd_akm4xxx*,int) ;
 int FUNC_6 (struct snd_akm4xxx*,int ,int,unsigned char) ;
 unsigned int FUNC_7 (struct snd_ice1712*) ;
 int FUNC_8 (struct snd_ice1712*,unsigned int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct snd_akm4xxx *VAR_6, unsigned int VAR_7)
{
 unsigned char VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 struct snd_ice1712 *VAR_14 = VAR_6->private_data[0];
 struct juli_spec *VAR_15 = VAR_14->spec;

 if (VAR_7 == 0)

  return;


 if (VAR_7 > 96000) {
  VAR_10 = 2;
  VAR_11 = VAR_3 | VAR_1;
 } else if (VAR_7 > 48000) {
  VAR_10 = 1;
  VAR_11 = VAR_2;
 } else {
  VAR_10 = 0;
  VAR_11 = 0;
 }

 VAR_12 = VAR_14->gpio.get_data(VAR_14);
 VAR_13 = (VAR_12 & ~VAR_4) | VAR_11;


 VAR_14->gpio.set_data(VAR_14, VAR_13);


 VAR_8 = FUNC_1(FUNC_0(VAR_14, VAR_0));
 FUNC_2(VAR_8 | VAR_5, FUNC_0(VAR_14, VAR_0));
 FUNC_9(1);
 FUNC_2(VAR_8 & ~VAR_5, FUNC_0(VAR_14, VAR_0));



 VAR_9 = FUNC_4(VAR_6, 0, 2);
 FUNC_5(VAR_6, 1);
 VAR_9 = FUNC_4(VAR_6, 0, 2);
 VAR_9 &= ~(0x03 << 4);
 VAR_9 |= VAR_10 << 4;
 FUNC_6(VAR_6, 0, 2, VAR_9);
 FUNC_5(VAR_6, 0);


 FUNC_3(VAR_15->ak4114);
}
