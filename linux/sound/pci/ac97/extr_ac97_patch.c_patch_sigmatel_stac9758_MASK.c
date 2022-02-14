
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int subsystem_vendor; int subsystem_device; int flags; int * build_ops; scalar_t__ pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ac97*,int ,int ,int ) ;
 int FUNC_1 (struct snd_ac97*,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_5)
{
 static unsigned short VAR_6[4] = {
  129,
  130,
  131,
  128
 };
 static unsigned short VAR_7[4] = {
               0xd794,
               0x2001,
              0x0201,
                0x0040
 };
 static unsigned short VAR_8[4] = {
               0xfc70,
               0x2102,
              0x0203,
                0x0041
 };
 unsigned short *VAR_9 = VAR_7;
 int VAR_10;


 if (VAR_5->pci &&
     VAR_5->subsystem_vendor == 0x107b &&
     VAR_5->subsystem_device == 0x0601)
      VAR_9 = VAR_8;


 VAR_5->build_ops = &VAR_4;

 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2);
 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_1(VAR_5, VAR_6[VAR_10], VAR_9[VAR_10]);

 VAR_5->flags |= VAR_3;
 return 0;
}
