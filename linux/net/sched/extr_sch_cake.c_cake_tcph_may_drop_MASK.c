
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tcphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct tcphdr const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct tcphdr const*) ;

__attribute__((used)) static bool FUNC_5(const struct tcphdr *VAR_4,
          u32 VAR_5, u32 VAR_6)
{

 int VAR_7 = FUNC_0(VAR_4) - sizeof(struct tcphdr);
 const u8 *VAR_8 = (const u8 *)(VAR_4 + 1);
 u32 VAR_9, VAR_10;
 if (((FUNC_4(VAR_4) &
       FUNC_2(0x0F3F0000)) != VAR_3))
  return 0;

 while (VAR_7 > 0) {
  int VAR_11 = *VAR_8++;
  int VAR_12;

  if (VAR_11 == VAR_1)
   break;
  if (VAR_11 == VAR_2) {
   VAR_7--;
   continue;
  }
  VAR_12 = *VAR_8++;
  if (VAR_12 < 2 || VAR_12 > VAR_7)
   break;

  switch (VAR_11) {
  case 133:
   break;

  case 131:
   if (VAR_12 % 8 != 2)
    return 0;
   break;

  case 129:

   if (VAR_12 != VAR_0)
    return 0;
   VAR_9 = FUNC_3(VAR_8);
   VAR_10 = FUNC_3(VAR_8 + 4);
   if (FUNC_1(VAR_9, VAR_5) ||
       FUNC_1(VAR_10, VAR_6))
    return 0;
   break;

  case 132:
  case 128:
  case 130:
  case 134:
  case 135:
  default:
   return 0;
  }

  VAR_8 += VAR_12 - 2;
  VAR_7 -= VAR_12;
 }

 return 1;
}
