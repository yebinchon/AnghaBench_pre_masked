
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(unsigned char *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_9 = FUNC_2(VAR_3, FUNC_2(VAR_4, VAR_5));
 VAR_10 = FUNC_1(VAR_3, FUNC_1(VAR_4, VAR_5));
 if (VAR_9 == VAR_10)
 {

  VAR_4 = FUNC_0(VAR_4, 0, 255);
  *VAR_0 = VAR_4;
  *VAR_1 = VAR_4;
  *VAR_2 = VAR_4;
  return;
 }

 VAR_11 = FUNC_2(VAR_6, FUNC_2(VAR_7, VAR_8));
 VAR_12 = FUNC_1(VAR_6, FUNC_1(VAR_7, VAR_8));

 VAR_14 = ((VAR_12 - VAR_11) << 16) / (VAR_10 - VAR_9);
 VAR_13 = (VAR_3 * 77 + VAR_4 * 151 + VAR_5 * 28 + 0x80) >> 8;
 VAR_15 = VAR_13 + ((((VAR_3 - VAR_13) * VAR_14) + 0x8000) >> 16);
 VAR_16 = VAR_13 + ((((VAR_4 - VAR_13) * VAR_14) + 0x8000) >> 16);
 VAR_17 = VAR_13 + ((((VAR_5 - VAR_13) * VAR_14) + 0x8000) >> 16);

 if ((VAR_15 | VAR_16 | VAR_17) & 0x100)
 {
  int VAR_18, VAR_19;
  int VAR_20, VAR_21;

  VAR_20 = FUNC_2(VAR_15, FUNC_2(VAR_16, VAR_17));
  VAR_21 = FUNC_1(VAR_15, FUNC_1(VAR_16, VAR_17));

  if (VAR_20 < 0)
   VAR_18 = (VAR_13 << 16) / (VAR_13 - VAR_20);
  else
   VAR_18 = 0x10000;

  if (VAR_21 > 255)
   VAR_19 = ((255 - VAR_13) << 16) / (VAR_21 - VAR_13);
  else
   VAR_19 = 0x10000;

  VAR_14 = FUNC_2(VAR_18, VAR_19);
  VAR_15 = VAR_13 + (((VAR_15 - VAR_13) * VAR_14 + 0x8000) >> 16);
  VAR_16 = VAR_13 + (((VAR_16 - VAR_13) * VAR_14 + 0x8000) >> 16);
  VAR_17 = VAR_13 + (((VAR_17 - VAR_13) * VAR_14 + 0x8000) >> 16);
 }

 *VAR_0 = FUNC_0(VAR_15, 0, 255);
 *VAR_1 = FUNC_0(VAR_16, 0, 255);
 *VAR_2 = FUNC_0(VAR_17, 0, 255);
}
