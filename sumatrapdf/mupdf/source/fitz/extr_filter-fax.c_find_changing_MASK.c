
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(const unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if (!VAR_2)
  return VAR_4;


 if (VAR_3 < 0)
 {
  VAR_3 = 0;
  VAR_7 = 0xFF;
 }
 else
 {


  VAR_7 = VAR_1[VAR_3 & 7];
 }




 VAR_8 = VAR_4>>3;
 VAR_3 >>= 3;
 VAR_5 = VAR_2[VAR_3];
 VAR_6 = VAR_5 ^ (VAR_5>>1);
 VAR_6 &= VAR_7;
 if (VAR_3 >= VAR_8)
 {

  VAR_3 = (VAR_3<<3) + VAR_0[VAR_6];
  if (VAR_3 > VAR_4)
   VAR_3 = VAR_4;
  return VAR_3;
 }
 while (VAR_6 == 0)
 {
  if (++VAR_3 >= VAR_8)
   goto nearend;
  VAR_6 = VAR_5 & 1;
  VAR_5 = VAR_2[VAR_3];
  VAR_6 = (VAR_6<<7) ^ VAR_5 ^ (VAR_5>>1);
 }
 return (VAR_3<<3) + VAR_0[VAR_6];
nearend:

 if ((VAR_3<<3) == VAR_4)
  return VAR_4;
 VAR_6 = VAR_5&1;
 VAR_5 = VAR_2[VAR_3];
 VAR_6 = (VAR_6<<7) ^ VAR_5 ^ (VAR_5>>1);
 VAR_3 = (VAR_3<<3) + VAR_0[VAR_6];
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;
 return VAR_3;
}
