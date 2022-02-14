
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int*) ;
 unsigned int* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,unsigned int*,unsigned int) ;

int FUNC_3(u32 VAR_5, const u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8 = VAR_3;
 u8 *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12 = 0;

 VAR_9 = FUNC_1(VAR_2 + 6, VAR_1);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 while (VAR_12 < VAR_7) {
  if (VAR_12 + VAR_2 <= VAR_7)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_7 % VAR_2;

  VAR_9[0] = VAR_8;
  VAR_9[1] = ((VAR_5 + VAR_12) & 0xff000000) >> 24;
  VAR_9[2] = ((VAR_5 + VAR_12) & 0x00ff0000) >> 16;
  VAR_9[3] = ((VAR_5 + VAR_12) & 0x0000ff00) >> 8;
  VAR_9[4] = ((VAR_5 + VAR_12) & 0x000000ff) >> 0;

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10 += 8) {
   VAR_9[VAR_10 + 12] = VAR_6[VAR_12 + VAR_10 + 0];
   VAR_9[VAR_10 + 11] = VAR_6[VAR_12 + VAR_10 + 1];
   VAR_9[VAR_10 + 10] = VAR_6[VAR_12 + VAR_10 + 2];
   VAR_9[VAR_10 + 9] = VAR_6[VAR_12 + VAR_10 + 3];
   VAR_9[VAR_10 + 8] = VAR_6[VAR_12 + VAR_10 + 4];
   VAR_9[VAR_10 + 7] = VAR_6[VAR_12 + VAR_10 + 5];
   VAR_9[VAR_10 + 6] = VAR_6[VAR_12 + VAR_10 + 6];
   VAR_9[VAR_10 + 5] = VAR_6[VAR_12 + VAR_10 + 7];
  }

  VAR_9[VAR_11 + 5] = VAR_8;

  FUNC_2(VAR_4, VAR_9, VAR_11 + 6);

  VAR_12 += VAR_2;
 }

 FUNC_0(VAR_9);

 return 0;
}
