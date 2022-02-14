
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int trigger; } ;
struct hci_basic_led_trigger {TYPE_1__* hdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 struct hci_basic_led_trigger* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_3)
{
 struct hci_basic_led_trigger *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_2(VAR_3->trigger);
 VAR_5 = FUNC_1(VAR_0, &VAR_4->hdev->flags);

 FUNC_0(VAR_3->trigger, VAR_5 ? VAR_1 : VAR_2);

 return 0;
}
