
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int akm_codecs; struct snd_akm4xxx* akm; struct phase28_spec* spec; } ;
struct snd_akm4xxx {int dummy; } ;
struct phase28_spec {void** master; void** vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;
 int FUNC_5 (struct snd_ice1712*) ;
 int FUNC_6 (struct snd_ice1712*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct snd_ice1712*,unsigned short const,unsigned short const) ;
 int FUNC_9 (struct snd_ice1712*,int,void*,void*) ;

__attribute__((used)) static int FUNC_10(struct snd_ice1712 *VAR_6)
{
 static const unsigned short VAR_7[] = {

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

 unsigned int VAR_8;
 struct snd_akm4xxx *VAR_9;
 struct phase28_spec *VAR_10;
 const unsigned short *VAR_11;
 int VAR_12;

 VAR_6->num_total_dacs = 8;
 VAR_6->num_total_adcs = 2;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_6->spec = VAR_10;


 VAR_6->akm = FUNC_0(sizeof(struct snd_akm4xxx), VAR_1);
 VAR_9 = VAR_6->akm;
 if (!VAR_9)
  return -VAR_0;
 VAR_6->akm_codecs = 1;

 FUNC_2(VAR_6, 0x5fffff);


 FUNC_6(VAR_6);
 FUNC_3(VAR_6, ~(VAR_4|VAR_3|
     VAR_2));

 VAR_8 = FUNC_1(VAR_6);
 VAR_8 &= ~VAR_4;
 FUNC_4(VAR_6, VAR_8);
 FUNC_7(1);
 VAR_8 |= VAR_3;
 FUNC_4(VAR_6, VAR_8);
 FUNC_7(1);
 VAR_8 |= VAR_4;
 FUNC_4(VAR_6, VAR_8);
 FUNC_7(1);

 VAR_11 = VAR_7;
 for (; *VAR_11 != (unsigned short)-1; VAR_11 += 2)
  FUNC_8(VAR_6, VAR_11[0], VAR_11[1]);

 FUNC_5(VAR_6);

 VAR_10->master[0] = VAR_5;
 VAR_10->master[1] = VAR_5;
 for (VAR_12 = 0; VAR_12 < VAR_6->num_total_dacs; VAR_12++) {
  VAR_10->vol[VAR_12] = VAR_5;
  FUNC_9(VAR_6, VAR_12, VAR_10->vol[VAR_12], VAR_10->master[VAR_12 % 2]);
 }

 return 0;
}
