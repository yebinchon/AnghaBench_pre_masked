
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int type; int num_chips; int num_dacs; char* name; int total_regs; int volumes; int images; } ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_akm4xxx*,int,unsigned char,unsigned char) ;
 int FUNC_3 (int) ;

void FUNC_4(struct snd_akm4xxx *VAR_0)
{
 static const unsigned char VAR_1[] = {
  0x00, 0x07,
  0x01, 0x00,
  0x02, 0x60,
  0x03, 0x19,
  0x01, 0x03,
  0x04, 0x00,
  0x05, 0x00,
  0x06, 0x00,
  0x07, 0x00,
  0xff, 0xff
 };
 static const unsigned char VAR_2[] = {
  0x00, 0x07,
  0x01, 0x00,
  0x02, 0x60,
  0x03, 0x0d,
  0x01, 0x03,
  0x04, 0x00,
  0x05, 0x00,
  0xff, 0xff
 };
 static const unsigned char VAR_3[] = {
  0x09, 0x01,
  0x0a, 0x3f,
  0x00, 0x0c,
  0x01, 0x00,
  0x02, 0xff,
  0x03, 0xff,
  0x04, 0xff,
  0x05, 0xff,
  0x06, 0xff,
  0x07, 0xff,
  0x0b, 0xff,
  0x0c, 0xff,
  0x08, 0x55,
  0xff, 0xff
 };
 static const unsigned char VAR_4[] = {
  0x01, 0x02,
  0x00, 0x06,

  0x02, 0x0e,

  0x03, 0x01,
  0x04, 0x00,
  0x05, 0x00,
  0x06, 0x00,
  0x07, 0x00,
  0x08, 0x00,
  0x09, 0x00,
  0x0a, 0x00,
  0x01, 0x01,
  0xff, 0xff
 };
 static const unsigned char VAR_5[] = {
  0x01, 0x02,
  0x00, 0x06,

  0x02, 0x4e,

  0x03, 0x01,
  0x04, 0x00,
  0x05, 0x00,
  0x06, 0x00,
  0x07, 0x00,
  0x08, 0x00,
  0x09, 0x00,
  0x0b, 0x00,
  0x0c, 0x00,
  0x0a, 0x00,
  0x01, 0x01,
  0xff, 0xff
 };
 static const unsigned char VAR_6[] = {
  0x00, 0x0c,
  0x01, 0x02,


  0x02, 0x00,
  0x03, 0x00,
  0x04, 0x00,
  0x00, 0x0f,
  0xff, 0xff
 };
 static const unsigned char VAR_7[] = {
  0x00, 0x07,
  0x01, 0x00,
  0x01, 0x02,
  0x01, 0x03,
  0x01, 0x0f,
  0x02, 0x60,
  0x03, 0x01,
  0x04, 0x00,
  0x05, 0x00,
  0x06, 0x00,
  0x07, 0x00,
  0xff, 0xff
 };

 int VAR_8;
 const unsigned char *VAR_9, *VAR_10;
 unsigned char VAR_11, VAR_12;

 FUNC_0(VAR_0->images, 0, sizeof(VAR_0->images));
 FUNC_0(VAR_0->volumes, 0, sizeof(VAR_0->volumes));

 switch (VAR_0->type) {
 case 132:
  VAR_10 = VAR_1;
  VAR_0->num_chips = VAR_0->num_dacs / 2;
  VAR_0->name = "ak4524";
  VAR_0->total_regs = 0x08;
  break;
 case 131:
  VAR_10 = VAR_2;
  VAR_0->num_chips = VAR_0->num_dacs / 2;
  VAR_0->name = "ak4528";
  VAR_0->total_regs = 0x06;
  break;
 case 130:
  VAR_10 = VAR_3;
  VAR_0->num_chips = 1;
  VAR_0->name = "ak4529";
  VAR_0->total_regs = 0x0d;
  break;
 case 135:
  VAR_10 = VAR_4;
  VAR_0->num_chips = 1;
  VAR_0->name = "ak4355";
  VAR_0->total_regs = 0x0b;
  break;
 case 134:
  VAR_10 = VAR_5;
  VAR_0->num_chips = 1;
  VAR_0->name = "ak4358";
  VAR_0->total_regs = 0x10;
  break;
 case 133:
  VAR_10 = VAR_6;
  VAR_0->num_chips = VAR_0->num_dacs / 2;
  VAR_0->name = "ak4381";
  VAR_0->total_regs = 0x05;
  break;
 case 128:

  VAR_0->num_chips = 1;
  VAR_0->name = "ak5365";
  VAR_0->total_regs = 0x08;
  return;
 case 129:
  VAR_10 = VAR_7;
  VAR_0->num_chips = VAR_0->num_dacs / 2;
  VAR_0->name = "ak4620";
  VAR_0->total_regs = 0x08;
  break;
 default:
  FUNC_1();
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_0->num_chips; VAR_8++) {
  VAR_9 = VAR_10;
  while (*VAR_9 != 0xff) {
   VAR_11 = *VAR_9++;
   VAR_12 = *VAR_9++;
   FUNC_2(VAR_0, VAR_8, VAR_11, VAR_12);
   FUNC_3(10);
  }
 }
}
