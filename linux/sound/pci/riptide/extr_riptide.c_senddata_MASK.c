
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmdif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmdif*,int ,int) ;
 scalar_t__ FUNC_1 (struct cmdif*,int,int) ;
 int FUNC_2 (unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(struct cmdif *VAR_1, const unsigned char *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 const unsigned char *VAR_7;

 VAR_6 = FUNC_2(&VAR_2[1], 2);
 VAR_4 = VAR_3 + FUNC_2(&VAR_2[3], 4);
 if (FUNC_0(VAR_1, 0, VAR_4) != 0)
  return -VAR_0;
 VAR_7 = VAR_2 + 9;
 while (VAR_6) {
  VAR_5 = FUNC_2(VAR_7, 8);
  if (FUNC_1(VAR_1, 2,
         ((VAR_5 & 0x0f0f0f0f) << 4) | ((VAR_5 & 0xf0f0f0f0)
           >> 4)))
   return -VAR_0;
  VAR_6 -= 4;
  VAR_7 += 8;
 }
 return 0;
}
