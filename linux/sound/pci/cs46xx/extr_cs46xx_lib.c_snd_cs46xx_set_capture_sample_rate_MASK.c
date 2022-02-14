
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int reg_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct snd_cs46xx*,scalar_t__,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_cs46xx *VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;





 if ((VAR_11 * 9) < 48000)
  VAR_11 = 48000 / 9;





 if (VAR_11 > 48000)
  VAR_11 = 48000;
 VAR_15 = VAR_11 << 16;
 VAR_14 = VAR_15 / 48000;
 VAR_15 -= VAR_14 * 48000;
 VAR_15 <<= 7;
 VAR_14 <<= 7;
 VAR_14 += VAR_15 / 48000;
 VAR_14 ^= 0xFFFFFFFF;
 VAR_14++;
 VAR_15 = 48000 << 16;
 VAR_13 = VAR_15 / VAR_11;
 VAR_15 -= VAR_13 * VAR_11;
 VAR_15 <<= 10;
 VAR_13 <<= 10;
 VAR_16 = VAR_15 / VAR_11;
 VAR_13 += VAR_16;
 VAR_15 -= VAR_16 * VAR_11;
 VAR_17 = VAR_15 / VAR_9;
 VAR_15 -= VAR_17 * VAR_9;
 VAR_18 = VAR_15;
 VAR_19 = ((48000 * 24) + VAR_11 - 1) / VAR_11;




 FUNC_1(&VAR_10->reg_lock, VAR_12);
 FUNC_0(VAR_10, VAR_7,
  ((VAR_18 << 16) & 0xFFFF0000) | (VAR_17 & 0xFFFF));
 FUNC_0(VAR_10, VAR_0, VAR_14);
 FUNC_0(VAR_10, VAR_2,
  (((VAR_8 + (VAR_19 << 2)) << 16) & 0xFFFF0000) | 0x80);
 FUNC_0(VAR_10, VAR_5, VAR_13);
 FUNC_2(&VAR_10->reg_lock, VAR_12);






 VAR_20 = 1;
 for (VAR_21 = 2; VAR_21 <= 64; VAR_21 *= 2) {
  if (((VAR_11 / VAR_21) * VAR_21) != VAR_11)
   VAR_20 *= 2;
 }
 if (((VAR_11 / 3) * 3) != VAR_11) {
  VAR_20 *= 3;
 }
 for (VAR_21 = 5; VAR_21 <= 125; VAR_21 *= 5) {
  if (((VAR_11 / VAR_21) * VAR_21) != VAR_11)
   VAR_20 *= 5;
        }




 FUNC_1(&VAR_10->reg_lock, VAR_12);
 FUNC_0(VAR_10, VAR_3, VAR_20);
 FUNC_0(VAR_10, VAR_4, (0x00800000 | VAR_20));
 FUNC_0(VAR_10, VAR_1, 0x0000FFFF);
 FUNC_0(VAR_10, VAR_6, ((65536 * VAR_11) / 24000));
 FUNC_0(VAR_10, (VAR_6 + 4), 0x0000FFFF);
 FUNC_2(&VAR_10->reg_lock, VAR_12);
}
