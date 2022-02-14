
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 char* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const uint8 *VAR_1, unsigned VAR_2, uint8 *VAR_3)
{
 uint8 *VAR_4,
      *VAR_5 = VAR_3 + 76;
 const uint8 *VAR_6,
      *VAR_7 = VAR_1 + VAR_2;
 int VAR_8 = 2;
 unsigned long VAR_9 = 0;

 VAR_6 = VAR_1;
 VAR_4 = VAR_3;

 while (VAR_6 < VAR_7)
 {
  VAR_9 |= *VAR_6 << (VAR_8 << 3);
  VAR_8--;
  VAR_6++;




  if (VAR_8 < 0)
  {
   *VAR_4++ = VAR_0[(VAR_9 >> 18) & 0x3f];
   *VAR_4++ = VAR_0[(VAR_9 >> 12) & 0x3f];
   *VAR_4++ = VAR_0[(VAR_9 >> 6) & 0x3f];
   *VAR_4++ = VAR_0[VAR_9 & 0x3f];

   VAR_8 = 2;
   VAR_9 = 0;
  }
  if (VAR_4 >= VAR_5)
  {
   *VAR_4++ = '\n';
   VAR_5 = VAR_4 + 76;
  }
 }
 if (VAR_8 != 2)
 {
  *VAR_4++ = VAR_0[(VAR_9 >> 18) & 0x3f];
  *VAR_4++ = VAR_0[(VAR_9 >> 12) & 0x3f];
  *VAR_4++ = (VAR_8 == 0) ? VAR_0[(VAR_9 >> 6) & 0x3f] : '=';
  *VAR_4++ = '=';
 }

 return VAR_4 - VAR_3;
}
