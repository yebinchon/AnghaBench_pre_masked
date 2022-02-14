
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (unsigned char) ;

__attribute__((used)) static u32 FUNC_1(const unsigned char *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2 = 0;
 unsigned int VAR_3 = 1;
 unsigned char VAR_4;

 while (VAR_1) {
  int VAR_5;

  VAR_4 = VAR_0[VAR_1 - 1];
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 >= 0)
   VAR_2 += VAR_3 * VAR_5;
  VAR_3 *= 16;
  --VAR_1;
 }
 return VAR_2;
}
