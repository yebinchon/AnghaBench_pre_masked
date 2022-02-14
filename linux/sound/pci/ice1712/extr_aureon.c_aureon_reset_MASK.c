
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; struct aureon_spec* spec; } ;
struct aureon_spec {int cs8415_mux; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,int ,int) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int,unsigned short const,int) ;
 unsigned int FUNC_4 (struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,int) ;
 int FUNC_6 (struct snd_ice1712*,unsigned int) ;
 int FUNC_7 (struct snd_ice1712*,unsigned int) ;
 int FUNC_8 (struct snd_ice1712*) ;
 int FUNC_9 (struct snd_ice1712*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct snd_ice1712*,unsigned short const,unsigned short const) ;

__attribute__((used)) static int FUNC_12(struct snd_ice1712 *VAR_9)
{
 static const unsigned short VAR_10[] = {

  0x1b, 0x044,
  0x1c, 0x00B,
  0x1d, 0x009,

  0x18, 0x000,

  0x16, 0x122,
  0x17, 0x022,
  0x00, 0,
  0x01, 0,
  0x02, 0,
  0x03, 0,
  0x04, 0,
  0x05, 0,
  0x06, 0,
  0x07, 0,
  0x08, 0x100,
  0x09, 0xff,
  0x0a, 0xff,
  0x0b, 0xff,
  0x0c, 0xff,
  0x0d, 0xff,
  0x0e, 0xff,
  0x0f, 0xff,
  0x10, 0xff,
  0x11, 0x1ff,
  0x12, 0x000,
  0x13, 0x090,
  0x14, 0x000,
  0x15, 0x000,
  0x19, 0x000,
  0x1a, 0x000,
  (unsigned short)-1
 };
 static const unsigned short VAR_11[] = {


  0x1b, 0x000,
  0x1c, 0x009,
  0x1d, 0x009,

  0x18, 0x000,

  0x16, 0x022,
  0x17, 0x006,

  0x00, 0,
  0x01, 0,
  0x02, 0,
  0x03, 0,
  0x04, 0,
  0x05, 0,
  0x06, 0,
  0x07, 0,
  0x08, 0x100,

  0x09, 0x7f,
  0x0a, 0x7f,
  0x0b, 0x7f,
  0x0c, 0x7f,
  0x0d, 0x7f,
  0x0e, 0x7f,
  0x0f, 0x7f,
  0x10, 0x7f,
  0x11, 0x1FF,

  0x12, 0x000,
  0x13, 0x090,
  0x14, 0x000,
  0x15, 0x000,

  0x19, 0x000,
  0x1a, 0x000,
  (unsigned short)-1

 };
 static const unsigned short VAR_12[] = {
  0x0441,
  0x0180,
  0x0201,
  0x0605,
  (unsigned short)-1
 };
 unsigned int VAR_13;
 const unsigned short *VAR_14;
 int VAR_15;
 struct aureon_spec *VAR_16 = VAR_9->spec;

 VAR_15 = FUNC_0(VAR_9);
 if (VAR_15 != 0)
  return VAR_15;

 FUNC_5(VAR_9, 0x5fffff);


 FUNC_9(VAR_9);
 FUNC_6(VAR_9, ~(VAR_3|VAR_2|VAR_0|VAR_1));

 VAR_13 = FUNC_4(VAR_9);
 VAR_13 &= ~VAR_3;
 FUNC_7(VAR_9, VAR_13);
 FUNC_10(1);
 VAR_13 |= VAR_2 | VAR_0;
 FUNC_7(VAR_9, VAR_13);
 FUNC_10(1);
 VAR_13 |= VAR_3;
 FUNC_7(VAR_9, VAR_13);
 FUNC_10(1);


 if (VAR_9->eeprom.subvendor == VAR_6 ||
  VAR_9->eeprom.subvendor == VAR_7 ||
  VAR_9->eeprom.subvendor == VAR_8)
  VAR_14 = VAR_11;
 else
  VAR_14 = VAR_10;
 for (; *VAR_14 != (unsigned short)-1; VAR_14 += 2)
  FUNC_11(VAR_9, VAR_14[0], VAR_14[1]);


 if (VAR_9->eeprom.subvendor != VAR_7 &&
     VAR_9->eeprom.subvendor != VAR_8) {
  for (VAR_14 = VAR_12; *VAR_14 != (unsigned short)-1; VAR_14++)
   FUNC_3(VAR_9, VAR_0, *VAR_14 | 0x200000, 24);
  VAR_16->cs8415_mux = 1;

  FUNC_2(VAR_9, 1);
 }

 FUNC_8(VAR_9);


 FUNC_1(VAR_9, VAR_4, 0x00);
 FUNC_1(VAR_9, VAR_5, 0x00);
 return 0;
}
