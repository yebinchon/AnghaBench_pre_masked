
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static uint8 *
FUNC_2(const uint8 *VAR_0, uint32 *VAR_1)
{
 uint8 *VAR_2;
 uint32 VAR_3;
 uint32 VAR_4,
    VAR_5;
 uint32 VAR_6,
    VAR_7;

 VAR_4 = ((VAR_0 == ((void*)0)) ? 0 : *VAR_1);
 VAR_5 = VAR_4 + 64 - (VAR_4 % 64) - 8;
 if (VAR_5 <= VAR_4)
  VAR_5 += 64;

 *VAR_1 = VAR_5 + 8;
 if ((VAR_2 = (uint8 *) FUNC_0(sizeof(uint8) * *VAR_1)) == ((void*)0))
  return ((void*)0);

 if (VAR_0 != ((void*)0))
  FUNC_1(VAR_2, VAR_0, sizeof(uint8) * VAR_4);


 VAR_2[VAR_4] = 0x80;
 for (VAR_3 = VAR_4 + 1; VAR_3 < VAR_5; VAR_3++)
  VAR_2[VAR_3] = 0x00;


 VAR_7 = VAR_4;


 VAR_6 = VAR_4 >> 29;
 VAR_7 <<= 3;
 VAR_3 = VAR_5;
 VAR_2[VAR_3++] = (VAR_7 & 0xff);
 VAR_7 >>= 8;
 VAR_2[VAR_3++] = (VAR_7 & 0xff);
 VAR_7 >>= 8;
 VAR_2[VAR_3++] = (VAR_7 & 0xff);
 VAR_7 >>= 8;
 VAR_2[VAR_3++] = (VAR_7 & 0xff);
 VAR_2[VAR_3++] = (VAR_6 & 0xff);
 VAR_6 >>= 8;
 VAR_2[VAR_3++] = (VAR_6 & 0xff);
 VAR_6 >>= 8;
 VAR_2[VAR_3++] = (VAR_6 & 0xff);
 VAR_6 >>= 8;
 VAR_2[VAR_3] = (VAR_6 & 0xff);

 return VAR_2;
}
