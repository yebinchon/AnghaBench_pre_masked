
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int max_sp; int uapsd_queues; } ;
struct sta_info {TYPE_1__ sta; } ;


 int VAR_0 ;
 int FUNC_0 (struct sta_info*,int,int ,int ) ;

void FUNC_1(struct sta_info *VAR_1)
{
 int VAR_2 = VAR_1->sta.max_sp;
 u8 VAR_3 = VAR_1->sta.uapsd_queues;







 if (!VAR_3)
  return;

 switch (VAR_1->sta.max_sp) {
 case 1:
  VAR_2 = 2;
  break;
 case 2:
  VAR_2 = 4;
  break;
 case 3:
  VAR_2 = 6;
  break;
 case 0:

  VAR_2 = 128;
  break;
 }

 FUNC_0(VAR_1, VAR_2, ~VAR_3,
       VAR_0);
}
