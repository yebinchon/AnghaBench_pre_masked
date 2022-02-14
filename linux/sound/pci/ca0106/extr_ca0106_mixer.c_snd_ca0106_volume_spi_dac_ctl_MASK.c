
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {char* name; int private_value; int put; int get; int info; int access; int iface; int member_0; } ;
struct snd_ca0106_details {int spi_dac; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct snd_kcontrol_new
FUNC_0(struct snd_ca0106_details *VAR_8,
         int VAR_9)
{
 struct snd_kcontrol_new VAR_10 = {0};
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_10.iface = VAR_1;
 VAR_10.access = VAR_0;
 VAR_10.info = VAR_6;
 VAR_10.get = VAR_5;
 VAR_10.put = VAR_7;

 switch (VAR_9) {
 case 130:
  VAR_10.name = "Analog Front Playback Switch";
  VAR_13 = (VAR_8->spi_dac & 0xf000) >> (4 * 3);
  break;
 case 129:
  VAR_10.name = "Analog Rear Playback Switch";
  VAR_13 = (VAR_8->spi_dac & 0x0f00) >> (4 * 2);
  break;
 case 131:
  VAR_10.name = "Analog Center/LFE Playback Switch";
  VAR_13 = (VAR_8->spi_dac & 0x00f0) >> (4 * 1);
  break;
 case 128:
  VAR_10.name = "Analog Side Playback Switch";
  VAR_13 = (VAR_8->spi_dac & 0x000f) >> (4 * 0);
  break;
 default:

  VAR_10.name = ((void*)0);
  VAR_13 = 0;
 }
 VAR_11 = VAR_4[VAR_13];
 VAR_12 = VAR_3[VAR_13];

 VAR_10.private_value = (VAR_11 << VAR_2) | VAR_12;

 return VAR_10;
}
