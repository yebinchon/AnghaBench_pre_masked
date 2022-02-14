
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int hardware; int reg_lock; } ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 () ;
 unsigned long VAR_16 ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct snd_wss*,int,int) ;
 int FUNC_5 (struct snd_wss*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (struct snd_wss*,int ) ;
 int FUNC_10 (struct snd_wss*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_wss *VAR_17)
{
 unsigned long VAR_18 = VAR_16 + FUNC_3(1000);
 unsigned long VAR_19;
 unsigned char VAR_20;
 unsigned short VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;

 while (FUNC_9(VAR_17, FUNC_0(VAR_8)) & VAR_1) {
  if (FUNC_8(VAR_16, VAR_18))
   return -VAR_7;
  FUNC_1();
 }
 FUNC_6(&VAR_17->reg_lock, VAR_19);


 FUNC_4(VAR_17, VAR_3, 0);

 FUNC_4(VAR_17, VAR_5, 0x45);
 VAR_20 = FUNC_5(VAR_17, VAR_5);
 if (VAR_20 != 0x45) {

  if ((VAR_20 & ~VAR_0) != 0x45) {
   VAR_22 = -VAR_7;
   goto out;
  }
  VAR_21 = VAR_10;
 } else {
  FUNC_4(VAR_17, VAR_2, 0xaa);
  VAR_20 = FUNC_5(VAR_17, VAR_2);

  if ((VAR_20 | VAR_0) != 0xaa) {
   VAR_22 = -VAR_7;
   goto out;
  }
 }


 FUNC_9(VAR_17, FUNC_0(VAR_9));
 FUNC_10(VAR_17, FUNC_0(VAR_9), 0);
 FUNC_2();

 if ((VAR_17->hardware & VAR_15) != VAR_14)
  goto out;

 if (VAR_21) {
  VAR_17->hardware = VAR_21;
  goto out;
 }

 VAR_20 = FUNC_5(VAR_17, VAR_3);


 FUNC_4(VAR_17, VAR_3, VAR_4);
 for (VAR_23 = 0; VAR_23 < 16; VAR_23++) {
  if (FUNC_5(VAR_17, VAR_23) != FUNC_5(VAR_17, 16 + VAR_23)) {

   if ((VAR_20 & 0xf) != 0xa)
    goto out_mode;




   FUNC_4(VAR_17, VAR_6, 0);
   VAR_20 = FUNC_5(VAR_17, VAR_6) & 0xe7;
   if (!VAR_20)
    VAR_17->hardware = VAR_12;
   goto out_mode;
  }
 }
 if (VAR_20 & 0x80)
  VAR_17->hardware = VAR_13;
 else
  VAR_17->hardware = VAR_11;
out_mode:
 FUNC_4(VAR_17, VAR_3, 0);
out:
 FUNC_7(&VAR_17->reg_lock, VAR_19);
 return VAR_22;
}
