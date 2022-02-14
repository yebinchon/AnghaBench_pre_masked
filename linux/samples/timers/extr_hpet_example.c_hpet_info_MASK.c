
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpet_info {int hi_ireqfreq; int hi_flags; int hi_hpet; int hi_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,struct hpet_info*) ;
 int FUNC_3 (char const*,int ) ;
 int VAR_2 ;

void
FUNC_4(int VAR_3, const char **VAR_4)
{
 struct hpet_info VAR_5;
 int VAR_6;

 if (VAR_3 != 1) {
  FUNC_1(VAR_2, "hpet_info: device-name\n");
  return;
 }

 VAR_6 = FUNC_3(VAR_4[0], VAR_1);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "hpet_info: open of %s failed\n", VAR_4[0]);
  return;
 }

 if (FUNC_2(VAR_6, VAR_0, &VAR_5) < 0) {
  FUNC_1(VAR_2, "hpet_info: failed to get info\n");
  goto out;
 }

 FUNC_1(VAR_2, "hpet_info: hi_irqfreq 0x%x hi_flags 0x%x ",
  VAR_5.hi_ireqfreq, VAR_5.hi_flags);
 FUNC_1(VAR_2, "hi_hpet %d hi_timer %d\n",
  VAR_5.hi_hpet, VAR_5.hi_timer);

out:
 FUNC_0(VAR_6);
 return;
}
