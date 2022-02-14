
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_opl4 {int hardware; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_opl4*) ;
 int FUNC_1 (struct snd_opl4*,int ) ;
 int FUNC_2 (struct snd_opl4*,int ,int) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct snd_opl4 *VAR_7)
{
 u8 VAR_8, VAR_9;

 FUNC_0(VAR_7);

 VAR_8 = FUNC_1(VAR_7, VAR_4);
 FUNC_3("OPL4[02]=%02x\n", VAR_8);
 switch (VAR_8 & VAR_3) {
 case 0x20:
  VAR_7->hardware = VAR_1;
  break;
 case 0x40:
  VAR_7->hardware = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_7, VAR_5, 0x00);
 FUNC_2(VAR_7, VAR_6, 0xff);
 VAR_8 = FUNC_1(VAR_7, VAR_5);
 VAR_9 = FUNC_1(VAR_7, VAR_6);
 FUNC_3("OPL4 id1=%02x id2=%02x\n", VAR_8, VAR_9);
        if (VAR_8 != 0x00 || VAR_9 != 0xff)
  return -VAR_0;

 FUNC_2(VAR_7, VAR_5, 0x3f);
 FUNC_2(VAR_7, VAR_6, 0x3f);
 FUNC_2(VAR_7, VAR_4, 0x00);
 return 0;
}
