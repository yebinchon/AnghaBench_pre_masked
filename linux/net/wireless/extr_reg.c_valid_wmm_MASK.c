
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct fwdb_wmm_rule {int dummy; } ;
struct fwdb_wmm_ac {int ecw; int aifsn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct fwdb_wmm_rule *VAR_1)
{
 struct fwdb_wmm_ac *VAR_2 = (struct fwdb_wmm_ac *)VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 * 2; VAR_3++) {
  u16 VAR_4 = FUNC_0((VAR_2[VAR_3].ecw & 0xf0) >> 4);
  u16 VAR_5 = FUNC_0(VAR_2[VAR_3].ecw & 0x0f);
  u8 VAR_6 = VAR_2[VAR_3].aifsn;

  if (VAR_4 >= VAR_5)
   return 0;

  if (VAR_6 < 1)
   return 0;
 }

 return 1;
}
