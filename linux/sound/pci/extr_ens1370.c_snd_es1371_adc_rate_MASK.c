
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ensoniq {int src_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ensoniq*,scalar_t__) ;
 int FUNC_3 (struct ensoniq*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct ensoniq * VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_0(&VAR_5->src_mutex);
 VAR_7 = VAR_6 / 3000;
 if ((1 << VAR_7) & ((1 << 15) | (1 << 13) | (1 << 11) | (1 << 9)))
  VAR_7--;
 VAR_8 = (21 * VAR_7 - 1) | 1;
 VAR_9 = ((48000UL << 15) / VAR_6) * VAR_7;
 if (VAR_6 >= 24000) {
  if (VAR_8 > 239)
   VAR_8 = 239;
  FUNC_3(VAR_5, VAR_0 + VAR_2,
    (((239 - VAR_8) >> 1) << 9) | (VAR_7 << 4));
 } else {
  if (VAR_8 > 119)
   VAR_8 = 119;
  FUNC_3(VAR_5, VAR_0 + VAR_2,
    0x8000 | (((119 - VAR_8) >> 1) << 9) | (VAR_7 << 4));
 }
 FUNC_3(VAR_5, VAR_0 + VAR_1,
        (FUNC_2(VAR_5, VAR_0 +
        VAR_1) & 0x00ff) |
        ((VAR_9 >> 5) & 0xfc00));
 FUNC_3(VAR_5, VAR_0 + VAR_3, VAR_9 & 0x7fff);
 FUNC_3(VAR_5, VAR_4, VAR_7 << 8);
 FUNC_3(VAR_5, VAR_4 + 1, VAR_7 << 8);
 FUNC_1(&VAR_5->src_mutex);
}
