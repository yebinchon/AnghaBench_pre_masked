
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(unsigned char *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_9 = ((VAR_6 - VAR_3) * 77 + (VAR_7 - VAR_4) * 151 + (VAR_8 - VAR_5) * 28 + 0x80) >> 8;
 VAR_11 = VAR_3 + VAR_9;
 VAR_12 = VAR_4 + VAR_9;
 VAR_13 = VAR_5 + VAR_9;

 if ((VAR_11 | VAR_12 | VAR_13) & 0x100)
 {
  VAR_14 = (VAR_6 * 77 + VAR_7 * 151 + VAR_8 * 28 + 0x80) >> 8;
  if (VAR_9 > 0)
  {
   int VAR_15;
   VAR_15 = FUNC_1(VAR_11, FUNC_1(VAR_12, VAR_13));
   VAR_10 = (VAR_15 == VAR_14 ? 0 : ((255 - VAR_14) << 16) / (VAR_15 - VAR_14));
  }
  else
  {
   int VAR_16;
   VAR_16 = FUNC_2(VAR_11, FUNC_2(VAR_12, VAR_13));
   VAR_10 = (VAR_14 == VAR_16 ? 0 : (VAR_14 << 16) / (VAR_14 - VAR_16));
  }
  VAR_11 = VAR_14 + (((VAR_11 - VAR_14) * VAR_10 + 0x8000) >> 16);
  VAR_12 = VAR_14 + (((VAR_12 - VAR_14) * VAR_10 + 0x8000) >> 16);
  VAR_13 = VAR_14 + (((VAR_13 - VAR_14) * VAR_10 + 0x8000) >> 16);
 }

 *VAR_0 = FUNC_0(VAR_11, 0, 255);
 *VAR_1 = FUNC_0(VAR_12, 0, 255);
 *VAR_2 = FUNC_0(VAR_13, 0, 255);
}
