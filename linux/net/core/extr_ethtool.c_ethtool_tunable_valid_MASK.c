
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ethtool_tunable {int id; int len; int type_id; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int FUNC_0(const struct ethtool_tunable *VAR_3)
{
 switch (VAR_3->id) {
 case 129:
 case 128:
  if (VAR_3->len != sizeof(u32) ||
      VAR_3->type_id != VAR_2)
   return -VAR_0;
  break;
 case 130:
  if (VAR_3->len != sizeof(u16) ||
      VAR_3->type_id != VAR_1)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
