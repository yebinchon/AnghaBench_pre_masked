
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; int netdev; int wiphy; TYPE_2__* current_bss; } ;
struct TYPE_3__ {int bssid; } ;
struct TYPE_4__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ,int ,int const*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct wireless_dev *VAR_1, const u8 *VAR_2)
{
 FUNC_0(VAR_1);

 if (FUNC_1(VAR_1->iftype != VAR_0))
  return;

 if (FUNC_1(!VAR_1->current_bss) ||
     FUNC_1(!FUNC_2(VAR_1->current_bss->pub.bssid, VAR_2)))
  return;

 FUNC_3(FUNC_4(VAR_1->wiphy), VAR_1->netdev,
         VAR_2);
}
