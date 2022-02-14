
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uintmax_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (unsigned char*,int,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(FILE *VAR_3, unsigned long *VAR_4, int VAR_5)
{
 unsigned char VAR_6[VAR_0];
 unsigned long VAR_7 = 0;
 uintmax_t VAR_8 = 0;
 size_t VAR_9;

 FUNC_2(VAR_3, 0, VAR_1);

 while((VAR_9 = FUNC_1(VAR_6, 1, VAR_0, VAR_3)) > 0)
 {
  unsigned char *VAR_10 = VAR_6;

  if(VAR_8 + VAR_9 < VAR_8)
   return 0;

  if(VAR_9 != VAR_0 && VAR_5)
   VAR_9 -= 8;

  VAR_8 += VAR_9;
  while(VAR_9--)
   VAR_7 =(VAR_7 << 8) ^ VAR_2[((VAR_7 >> 24) ^ *VAR_10++) & 0xFF];
 }

 if(FUNC_0(VAR_3))
  return 0;

 for(; VAR_8; VAR_8 >>= 8)
  VAR_7 =(VAR_7 << 8) ^ VAR_2[((VAR_7 >> 24) ^ VAR_8) & 0xFF];

 VAR_7 = ~VAR_7 & 0xFFFFFFFF;

 *VAR_4 = VAR_7;

 return 1;
}
