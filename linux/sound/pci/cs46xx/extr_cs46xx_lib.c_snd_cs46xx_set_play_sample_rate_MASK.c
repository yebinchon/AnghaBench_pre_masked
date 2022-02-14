
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_cs46xx*,int ,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_cs46xx *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;
 VAR_6 = VAR_4 << 16;
 VAR_8 = VAR_6 / 48000;
 VAR_6 -= VAR_8 * 48000;
 VAR_6 <<= 10;
 VAR_8 <<= 10;
 VAR_7 = VAR_6 / 48000;
 VAR_8 += VAR_7;
 VAR_6 -= VAR_7 * 48000;
 VAR_9 = VAR_6 / VAR_2;
 VAR_6 -= VAR_9 * VAR_2;
 VAR_10 = VAR_6;




 FUNC_1(&VAR_3->reg_lock, VAR_5);
 FUNC_0(VAR_3, VAR_1,
   ((VAR_10 << 16) & 0xFFFF0000) | (VAR_9 & 0xFFFF));
 FUNC_0(VAR_3, VAR_0, VAR_8);
 FUNC_2(&VAR_3->reg_lock, VAR_5);
}
