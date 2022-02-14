
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct wireless_dev {int iftype; int mesh_id_len; int ssid_len; int beacon_interval; TYPE_1__ chandef; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct wireless_dev *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_0(VAR_0);

 if (!VAR_0->chandef.chan)
  return 0;

 switch (VAR_0->iftype) {
 case 140:
 case 132:
  VAR_1 = VAR_0->beacon_interval != 0;
  break;
 case 141:
  VAR_1 = VAR_0->ssid_len != 0;
  break;
 case 138:
  VAR_1 = VAR_0->mesh_id_len != 0;
  break;
 case 131:
 case 135:
 case 134:
 case 137:
 case 139:
 case 129:
 case 133:

 case 136:
  break;
 case 130:
 case 128:
  FUNC_1(1);
 }

 return VAR_1;
}
