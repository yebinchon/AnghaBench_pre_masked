
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum sst_hsw_channel_config { ____Placeholder_sst_hsw_channel_config } sst_hsw_channel_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

u32 FUNC_0(enum sst_hsw_channel_config VAR_7)
{
 switch (VAR_7) {
 case 130:
  return (0xFFFFFFF0 | VAR_0);
 case 128:
  return (0xFFFFFF00 | VAR_2
   | (VAR_5 << 4));
 case 137:
  return (0xFFFFF000 | VAR_2
   | (VAR_5 << 4)
   | (VAR_4 << 8 ));
 case 136:
  return (0xFFFFF000 | VAR_2
   | (VAR_0 << 4)
   | (VAR_5 << 8));
 case 135:
  return (0xFFFF0000 | VAR_2
   | (VAR_0 << 4)
   | (VAR_5 << 8)
   | (VAR_4 << 12));
 case 129:
  return (0xFFFF0000 | VAR_2
   | (VAR_5 << 4)
   | (VAR_3 << 8)
   | (VAR_6 << 12));
 case 134:
  return (0xFFFF0000 | VAR_2
   | (VAR_0 << 4)
   | (VAR_5 << 8)
   | (VAR_1 << 12));
 case 133:
  return (0xFFF00000 | VAR_2
   | (VAR_0 << 4)
   | (VAR_5 << 8)
   | (VAR_3 << 12)
   | (VAR_6 << 16));
 case 132:
  return (0xFF000000 | VAR_0
   | (VAR_2 << 4)
   | (VAR_5 << 8)
   | (VAR_3 << 12)
   | (VAR_6 << 16)
   | (VAR_4 << 20));
 case 131:
  return (0xFFFFFF00 | VAR_2
   | (VAR_2 << 4));
 default:
  return 0xFFFFFFFF;
 }
}
