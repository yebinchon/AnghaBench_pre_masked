
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int port; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;




 VAR_2 = VAR_1->port + 0x38;
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(0x00d00000, VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(0x00d00001, VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(0x00d0005f, VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(0x00d0007f, VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(0x0090007f, VAR_2);
 VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_1, VAR_0, 0, 0xfefefefe);

 FUNC_1(200);
 return 0;
}
