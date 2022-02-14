
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpet_info {int hi_flags; } ;
typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (int,int ,...) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int VAR_13 ;

void
FUNC_9(int VAR_14, const char **VAR_15)
{
 unsigned long VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 sig_t VAR_21;
 struct hpet_info VAR_22;

 VAR_12 = 0;
 VAR_19 = -1;

 if ((VAR_21 = FUNC_8(VAR_9, VAR_11)) == VAR_10) {
  FUNC_3(VAR_13, "hpet_fasync: failed to set signal handler\n");
  return;
 }

 if (VAR_14 != 3) {
  FUNC_3(VAR_13, "hpet_fasync: device-name freq iterations\n");
  goto out;
 }

 VAR_19 = FUNC_6(VAR_15[0], VAR_8);

 if (VAR_19 < 0) {
  FUNC_3(VAR_13, "hpet_fasync: failed to open %s\n", VAR_15[0]);
  return;
 }


 if ((FUNC_2(VAR_19, VAR_2, FUNC_4()) == 1) ||
  ((VAR_20 = FUNC_2(VAR_19, VAR_0)) == 1) ||
  (FUNC_2(VAR_19, VAR_1, VAR_20 | VAR_7) == 1)) {
  FUNC_3(VAR_13, "hpet_fasync: fcntl failed\n");
  goto out;
 }

 VAR_16 = FUNC_0(VAR_15[1]);
 VAR_17 = FUNC_0(VAR_15[2]);

 if (FUNC_5(VAR_19, VAR_6, VAR_16) < 0) {
  FUNC_3(VAR_13, "hpet_fasync: HPET_IRQFREQ failed\n");
  goto out;
 }

 if (FUNC_5(VAR_19, VAR_5, &VAR_22) < 0) {
  FUNC_3(VAR_13, "hpet_fasync: failed to get info\n");
  goto out;
 }

 FUNC_3(VAR_13, "hpet_fasync: info.hi_flags 0x%x\n", VAR_22.hi_flags);

 if (VAR_22.hi_flags && (FUNC_5(VAR_19, VAR_3, 0) < 0)) {
  FUNC_3(VAR_13, "hpet_fasync: HPET_EPI failed\n");
  goto out;
 }

 if (FUNC_5(VAR_19, VAR_4, 0) < 0) {
  FUNC_3(VAR_13, "hpet_fasync, HPET_IE_ON failed\n");
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  (void) FUNC_7();
  FUNC_3(VAR_13, "hpet_fasync: count = %d\n", VAR_12);
 }

out:
 FUNC_8(VAR_9, VAR_21);

 if (VAR_19 >= 0)
  FUNC_1(VAR_19);

 return;
}
