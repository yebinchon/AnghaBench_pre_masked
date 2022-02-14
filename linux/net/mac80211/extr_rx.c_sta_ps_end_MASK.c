
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aid; int addr; } ;
struct sta_info {TYPE_1__ sta; int sdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sta_info*,int ) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct sta_info*,int ) ;
 scalar_t__ FUNC_4 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_5(struct sta_info *VAR_3)
{
 FUNC_2(VAR_3->sdata, "STA %pM aid %d exits power save mode\n",
        VAR_3->sta.addr, VAR_3->sta.aid);

 if (FUNC_4(VAR_3, VAR_1)) {






  FUNC_0(VAR_3, VAR_2);
  FUNC_2(VAR_3->sdata, "STA %pM aid %d driver-ps-blocked\n",
         VAR_3->sta.addr, VAR_3->sta.aid);
  return;
 }

 FUNC_3(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_3);
}
