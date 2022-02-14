
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int ext_id; int subsystem_vendor; int subsystem_device; scalar_t__ pci; scalar_t__* rates; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_12)
{
 unsigned short VAR_13;

 VAR_12->build_ops = &VAR_11;


 VAR_12->flags |= VAR_5 | VAR_6;
 FUNC_1(VAR_12, VAR_7, 0x8000);
 FUNC_1(VAR_12, VAR_8, 0x8000);


 VAR_13 = FUNC_0(VAR_12, VAR_4);
 if (VAR_13 & VAR_2) {

  FUNC_1(VAR_12, VAR_1,
         FUNC_0(VAR_12, VAR_1) | 0x01);
  VAR_12->rates[VAR_9] = VAR_10;
 } else {
  VAR_12->ext_id &= ~VAR_3;
  VAR_12->rates[VAR_9] = 0;
 }
 VAR_13 = FUNC_0(VAR_12, VAR_0) & (1 << 4);
 VAR_13 |= (1 << 3);
 VAR_13 |= (1 << 13);
 if (! (VAR_12->ext_id & VAR_3))
  VAR_13 |= (1 << 14);
 FUNC_1(VAR_12, VAR_0, VAR_13);


 FUNC_1(VAR_12, 0x70, 0x0100);
 FUNC_1(VAR_12, 0x72, 0x0020);

 if (VAR_12->pci &&
      VAR_12->subsystem_vendor == 0x1043 &&
      VAR_12->subsystem_device == 0x1843) {
  FUNC_1(VAR_12, VAR_1,
   FUNC_0(VAR_12, VAR_1) & ~0x01);
  FUNC_1(VAR_12, VAR_0,
   FUNC_0(VAR_12, VAR_0) | (1 << 14));
 }

 return 0;
}
