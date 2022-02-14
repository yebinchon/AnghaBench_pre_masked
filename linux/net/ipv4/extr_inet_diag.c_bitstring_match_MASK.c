
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_2(const __be32 *VAR_0, const __be32 *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 >> 5;

 VAR_2 &= 0x1f;

 if (VAR_3) {
  if (FUNC_1(VAR_0, VAR_1, VAR_3 << 2))
   return 0;
 }
 if (VAR_2) {
  __be32 VAR_4, VAR_5;
  __be32 VAR_6;

  VAR_4 = VAR_0[VAR_3];
  VAR_5 = VAR_1[VAR_3];

  VAR_6 = FUNC_0((0xffffffff) << (32 - VAR_2));

  if ((VAR_4 ^ VAR_5) & VAR_6)
   return 0;
 }

 return 1;
}
