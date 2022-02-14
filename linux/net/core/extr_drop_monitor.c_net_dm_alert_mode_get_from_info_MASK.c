
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct genl_info {int * attrs; } ;
typedef enum net_dm_alert_mode { ____Placeholder_net_dm_alert_mode } net_dm_alert_mode ;


 int VAR_0 ;


 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct genl_info *VAR_2,
        enum net_dm_alert_mode *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2->attrs[VAR_1]);

 switch (VAR_4) {
 case 128:
 case 129:
  *VAR_3 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
