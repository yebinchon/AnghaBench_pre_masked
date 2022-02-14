
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sb*,unsigned char*,int) ;
 int FUNC_1 (struct snd_sb*,int) ;
 unsigned char FUNC_2 (struct snd_sb*) ;

__attribute__((used)) static int FUNC_3(struct snd_sb *VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4[3];

 VAR_4[0] = 0x05;
 VAR_4[1] = VAR_3;
 VAR_4[2] = VAR_2;
 FUNC_0(VAR_1, VAR_4, 3);
 FUNC_1(VAR_1, 0x03);
 if (FUNC_2(VAR_1) != VAR_2)
  return -VAR_0;
 return 0;
}
