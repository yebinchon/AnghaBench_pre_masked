
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int* FUNC_0 (int const*,int*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(const uint8 *VAR_0, uint32 VAR_1, uint8 VAR_2[16])
{
 register uint32 VAR_3,
    VAR_4,
    VAR_5,
    VAR_6;
 uint32 VAR_7;
 uint8 *VAR_8;
 register uint32 *VAR_9;
 uint32 VAR_10[16],
    VAR_11[4];

 VAR_7 = VAR_1;

 VAR_11[0] = 0x67452301;
 VAR_11[1] = 0xEFCDAB89;
 VAR_11[2] = 0x98BADCFE;
 VAR_11[3] = 0x10325476;

 if ((VAR_8 = FUNC_0(VAR_0, &VAR_7)) == ((void*)0))
  return 0;

 for (VAR_3 = 0;;)
 {
  if ((VAR_6 = VAR_3 + 16 * 4) > VAR_7)
   break;
  VAR_5 = VAR_3 + 3;
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  {
   VAR_9 = (VAR_10 + VAR_4);
   *VAR_9 = VAR_8[VAR_5--];
   *VAR_9 <<= 8;
   *VAR_9 |= VAR_8[VAR_5--];
   *VAR_9 <<= 8;
   *VAR_9 |= VAR_8[VAR_5--];
   *VAR_9 <<= 8;
   *VAR_9 |= VAR_8[VAR_5];
   VAR_5 += 7;
  }
  FUNC_1(VAR_10, VAR_11);
  VAR_3 = VAR_6;
 }
 FUNC_2(VAR_8);

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
 {
  VAR_5 = VAR_11[VAR_3];
  VAR_2[VAR_4++] = (VAR_5 & 0xff);
  VAR_5 >>= 8;
  VAR_2[VAR_4++] = (VAR_5 & 0xff);
  VAR_5 >>= 8;
  VAR_2[VAR_4++] = (VAR_5 & 0xff);
  VAR_5 >>= 8;
  VAR_2[VAR_4++] = (VAR_5 & 0xff);
 }
 return 1;
}
