
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(u64 VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3;
 static const u8 VAR_4[] = {
                0, 54, 54, 54, 118, 118, 118, 118,
              123, 129, 134, 138, 143, 147, 151, 156,
              157, 161, 164, 168, 170, 173, 176, 179,
              181, 185, 187, 190, 192, 194, 197, 199,
              200, 202, 204, 206, 209, 211, 213, 215,
              217, 219, 221, 222, 224, 225, 227, 229,
              231, 232, 234, 236, 237, 239, 240, 242,
              244, 245, 246, 248, 250, 251, 252, 254,
 };

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 7) {

  return ((u32)VAR_4[(u32)VAR_0] + 35) >> 6;
 }

 VAR_2 = ((VAR_2 * 84) >> 8) - 1;
 VAR_3 = (VAR_0 >> (VAR_2 * 3));

 VAR_1 = ((u32)(((u32)VAR_4[VAR_3] + 10) << VAR_2)) >> 6;







 VAR_1 = (2 * VAR_1 + (u32)FUNC_0(VAR_0, (u64)VAR_1 * (u64)(VAR_1 - 1)));
 VAR_1 = ((VAR_1 * 341) >> 10);
 return VAR_1;
}
