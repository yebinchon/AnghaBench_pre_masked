
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, unsigned char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


 if (VAR_1 == VAR_0)
 {
  VAR_3 = VAR_2[0];
  VAR_4 = VAR_2[1];
  VAR_5 = VAR_2[2];
 }
 else
 {
  VAR_3 = VAR_2[2];
  VAR_4 = VAR_2[1];
  VAR_5 = VAR_2[0];
 }

 VAR_6 = ((66 * VAR_3 + 129 * VAR_4 + 25 * VAR_5 + 128) >> 8) + 16;
 VAR_7 = ((-38 * VAR_3 - 74 * VAR_4 + 112 * VAR_5 + 128) >> 8) + 128;
 VAR_8 = ((112 * VAR_3 - 94 * VAR_4 - 18 * VAR_5 + 128) >> 8) + 128;


 VAR_6 = 255 - VAR_6;


 VAR_9 = VAR_6 - 16;
 VAR_10 = VAR_7 - 128;
 VAR_11 = VAR_8 - 128;
 VAR_3 = (298 * VAR_9 + 409 * VAR_11 + 128) >> 8;
 VAR_4 = (298 * VAR_9 - 100 * VAR_10 - 208 * VAR_11 + 128) >> 8;
 VAR_5 = (298 * VAR_9 + 516 * VAR_10 + 128) >> 8;

 if (VAR_1 == VAR_0)
 {
  VAR_2[0] = VAR_3 > 255 ? 255 : VAR_3 < 0 ? 0 : VAR_3;
  VAR_2[1] = VAR_4 > 255 ? 255 : VAR_4 < 0 ? 0 : VAR_4;
  VAR_2[2] = VAR_5 > 255 ? 255 : VAR_5 < 0 ? 0 : VAR_5;
 }
 else
 {
  VAR_2[2] = VAR_3 > 255 ? 255 : VAR_3 < 0 ? 0 : VAR_3;
  VAR_2[1] = VAR_4 > 255 ? 255 : VAR_4 < 0 ? 0 : VAR_4;
  VAR_2[0] = VAR_5 > 255 ? 255 : VAR_5 < 0 ? 0 : VAR_5;
 }
}
