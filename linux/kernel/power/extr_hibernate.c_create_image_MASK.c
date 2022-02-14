
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_12 ;
 int FUNC_20 (int ,int ,int) ;

__attribute__((used)) static int FUNC_21(int VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_4(VAR_0);
 if (VAR_14) {
  FUNC_12("Some devices failed to power down, aborting hibernation\n");
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14 || FUNC_5(VAR_9))
  goto Platform_finish;

 VAR_14 = FUNC_15();
 if (VAR_14 || FUNC_5(VAR_8))
  goto Enable_cpus;

 FUNC_6();

 VAR_12 = VAR_6;

 VAR_14 = FUNC_19();
 if (VAR_14) {
  FUNC_12("Some system devices failed to power down, aborting hibernation\n");
  goto Enable_irqs;
 }

 if (FUNC_5(VAR_7) || FUNC_11())
  goto Power_up;

 VAR_11 = 1;
 FUNC_14();
 FUNC_20(FUNC_0("machine_suspend"), VAR_4, 1);
 VAR_14 = FUNC_17();

 FUNC_13();
 FUNC_20(FUNC_0("machine_suspend"), VAR_4, 0);
 if (VAR_14)
  FUNC_12("Error %d creating hibernation image\n", VAR_14);

 if (!VAR_11) {
  VAR_10 = 0;
  FUNC_2();
 }

 FUNC_9(VAR_13);

 Power_up:
 FUNC_18();

 Enable_irqs:
 VAR_12 = VAR_5;
 FUNC_7();

 Enable_cpus:
 FUNC_16();


 if (!VAR_11)
  VAR_14 = FUNC_1();

 Platform_finish:
 FUNC_8(VAR_13);

 FUNC_3(VAR_11 ?
  (VAR_14 ? VAR_1 : VAR_3) : VAR_2);

 return VAR_14;
}
