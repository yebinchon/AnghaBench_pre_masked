
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aic32x4_priv {void* supply_iov; void* supply_ldo; void* supply_dv; int power_cfg; void* supply_av; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2,
  struct aic32x4_priv *VAR_3)
{
 int VAR_4 = 0;

 VAR_3->supply_ldo = FUNC_4(VAR_2, "ldoin");
 VAR_3->supply_iov = FUNC_3(VAR_2, "iov");
 VAR_3->supply_dv = FUNC_4(VAR_2, "dv");
 VAR_3->supply_av = FUNC_4(VAR_2, "av");



 if (FUNC_0(VAR_3->supply_iov)) {
  FUNC_2(VAR_2, "Missing supply 'iov'\n");
  return FUNC_1(VAR_3->supply_iov);
 }

 if (FUNC_0(VAR_3->supply_ldo)) {
  if (FUNC_1(VAR_3->supply_ldo) == -VAR_1)
   return -VAR_1;

  if (FUNC_0(VAR_3->supply_dv)) {
   FUNC_2(VAR_2, "Missing supply 'dv' or 'ldoin'\n");
   return FUNC_1(VAR_3->supply_dv);
  }
  if (FUNC_0(VAR_3->supply_av)) {
   FUNC_2(VAR_2, "Missing supply 'av' or 'ldoin'\n");
   return FUNC_1(VAR_3->supply_av);
  }
 } else {
  if (FUNC_0(VAR_3->supply_dv) &&
    FUNC_1(VAR_3->supply_dv) == -VAR_1)
   return -VAR_1;
  if (FUNC_0(VAR_3->supply_av) &&
    FUNC_1(VAR_3->supply_av) == -VAR_1)
   return -VAR_1;
 }

 VAR_4 = FUNC_6(VAR_3->supply_iov);
 if (VAR_4) {
  FUNC_2(VAR_2, "Failed to enable regulator iov\n");
  return VAR_4;
 }

 if (!FUNC_0(VAR_3->supply_ldo)) {
  VAR_4 = FUNC_6(VAR_3->supply_ldo);
  if (VAR_4) {
   FUNC_2(VAR_2, "Failed to enable regulator ldo\n");
   goto error_ldo;
  }
 }

 if (!FUNC_0(VAR_3->supply_dv)) {
  VAR_4 = FUNC_6(VAR_3->supply_dv);
  if (VAR_4) {
   FUNC_2(VAR_2, "Failed to enable regulator dv\n");
   goto error_dv;
  }
 }

 if (!FUNC_0(VAR_3->supply_av)) {
  VAR_4 = FUNC_6(VAR_3->supply_av);
  if (VAR_4) {
   FUNC_2(VAR_2, "Failed to enable regulator av\n");
   goto error_av;
  }
 }

 if (!FUNC_0(VAR_3->supply_ldo) && FUNC_0(VAR_3->supply_av))
  VAR_3->power_cfg |= VAR_0;

 return 0;

error_av:
 if (!FUNC_0(VAR_3->supply_dv))
  FUNC_5(VAR_3->supply_dv);

error_dv:
 if (!FUNC_0(VAR_3->supply_ldo))
  FUNC_5(VAR_3->supply_ldo);

error_ldo:
 FUNC_5(VAR_3->supply_iov);
 return VAR_4;
}
