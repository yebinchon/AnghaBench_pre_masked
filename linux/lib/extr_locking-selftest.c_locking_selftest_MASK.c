
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
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_8 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_13 () ;

void FUNC_14(void)
{



 if (!VAR_12) {
  FUNC_12("----------------------------------\n");
  FUNC_12("| Locking API testsuite disabled |\n");
  FUNC_12("----------------------------------\n");
  return;
 }




 FUNC_12("------------------------\n");
 FUNC_12("| Locking API testsuite:\n");
 FUNC_12("----------------------------------------------------------------------------\n");
 FUNC_12("                                 | spin |wlock |rlock |mutex | wsem | rsem |\n");
 FUNC_12("  --------------------------------------------------------------------------\n");

 FUNC_8();
 VAR_13 = !VAR_14;
 FUNC_9(VAR_11);

 FUNC_3("A-A deadlock", VAR_0);
 FUNC_3("A-B-B-A deadlock", VAR_1);
 FUNC_3("A-B-B-C-C-A deadlock", VAR_2);
 FUNC_3("A-B-C-A-B-C deadlock", VAR_4);
 FUNC_3("A-B-B-C-C-D-D-A deadlock", VAR_3);
 FUNC_3("A-B-C-D-B-D-D-A deadlock", VAR_6);
 FUNC_3("A-B-C-D-B-C-D-A deadlock", VAR_5);
 FUNC_2("double unlock", VAR_15);
 FUNC_2("initialize held", VAR_17);

 FUNC_12("  --------------------------------------------------------------------------\n");
 FUNC_11("recursive read-lock");
 FUNC_10("             |");
 FUNC_7(VAR_25, VAR_10, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_32, VAR_7, VAR_9);
 FUNC_10("\n");

 FUNC_11("recursive read-lock #2");
 FUNC_10("             |");
 FUNC_7(VAR_26, VAR_10, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_33, VAR_7, VAR_9);
 FUNC_10("\n");

 FUNC_11("mixed read-write-lock");
 FUNC_10("             |");
 FUNC_7(VAR_27, VAR_7, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_34, VAR_7, VAR_9);
 FUNC_10("\n");

 FUNC_11("mixed write-read-lock");
 FUNC_10("             |");
 FUNC_7(VAR_28, VAR_7, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_35, VAR_7, VAR_9);
 FUNC_10("\n");

 FUNC_11("mixed read-lock/lock-write ABBA");
 FUNC_10("             |");
 FUNC_7(VAR_29, VAR_7, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_36, VAR_7, VAR_9);

 FUNC_11("mixed read-lock/lock-read ABBA");
 FUNC_10("             |");
 FUNC_7(VAR_30, VAR_10, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_37, VAR_7, VAR_9);

 FUNC_11("mixed write-lock/lock-write ABBA");
 FUNC_10("             |");
 FUNC_7(VAR_31, VAR_7, VAR_8);
 FUNC_10("             |");
 FUNC_7(VAR_38, VAR_7, VAR_9);

 FUNC_12("  --------------------------------------------------------------------------\n");




 FUNC_1("irqs-on + irq-safe-A", VAR_20);
 FUNC_0("sirq-safe-A => hirqs-on", VAR_21);
 FUNC_1("safe-A + irqs-on", VAR_22);
 FUNC_5("safe-A + unsafe-B #1", VAR_23);
 FUNC_5("safe-A + unsafe-B #2", VAR_24);
 FUNC_6("irq lock-inversion", VAR_18);

 FUNC_4("irq read-recursion", VAR_19);


 FUNC_13();

 if (VAR_41) {
  FUNC_12("-----------------------------------------------------------------\n");
  VAR_12 = 0;
  FUNC_12("BUG: %3d unexpected failures (out of %3d) - debugging disabled! |\n",
   VAR_41, VAR_40);
  FUNC_12("-----------------------------------------------------------------\n");
 } else if (VAR_16 && VAR_39) {
  FUNC_12("--------------------------------------------------------\n");
  FUNC_12("%3d out of %3d testcases failed, as expected. |\n",
   VAR_16, VAR_40);
  FUNC_12("----------------------------------------------------\n");
  VAR_12 = 1;
 } else if (VAR_16 && !VAR_39) {
  FUNC_12("--------------------------------------------------------\n");
  FUNC_12("All %3d testcases failed, as expected. |\n",
   VAR_16);
  FUNC_12("----------------------------------------\n");
  VAR_12 = 1;
 } else {
  FUNC_12("-------------------------------------------------------\n");
  FUNC_12("Good, all %3d testcases passed! |\n",
   VAR_39);
  FUNC_12("---------------------------------\n");
  VAR_12 = 1;
 }
 FUNC_9(((void*)0));
 VAR_13 = 0;
}
