
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int ecard_ctrl; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct snd_emu10k1*,int ) ;
 int FUNC_5 (struct snd_emu10k1*,int) ;
 int FUNC_6 (struct snd_emu10k1*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_emu10k1 *VAR_11)
{
 unsigned int VAR_12;


 VAR_11->ecard_ctrl = VAR_6 |
     FUNC_0(VAR_3) |
     FUNC_1(VAR_4);



 VAR_12 = FUNC_2(VAR_11->port + VAR_8);
 FUNC_3(VAR_12 | VAR_9 | VAR_10, VAR_11->port + VAR_8);
 FUNC_2(VAR_11->port + VAR_8);


 FUNC_5(VAR_11, VAR_0 | VAR_5 | VAR_7);


 FUNC_5(VAR_11, VAR_1 | VAR_5 | VAR_7);




 FUNC_6(VAR_11, 48000);




 FUNC_5(VAR_11, VAR_0 | VAR_5 | VAR_7);


 FUNC_5(VAR_11, VAR_11->ecard_ctrl);


 FUNC_4(VAR_11, VAR_2);

 return 0;
}
