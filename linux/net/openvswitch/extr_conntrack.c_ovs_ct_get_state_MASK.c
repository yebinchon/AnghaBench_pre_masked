
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u8 FUNC_0(enum ip_conntrack_info VAR_5)
{
 u8 VAR_6 = VAR_4;

 switch (VAR_5) {
 case 131:
 case 128:
  VAR_6 |= VAR_3;
  break;
 default:
  break;
 }

 switch (VAR_5) {
 case 132:
 case 131:
  VAR_6 |= VAR_0;
  break;
 case 129:
 case 128:
  VAR_6 |= VAR_2;
  break;
 case 130:
  VAR_6 |= VAR_1;
  break;
 default:
  break;
 }

 return VAR_6;
}
