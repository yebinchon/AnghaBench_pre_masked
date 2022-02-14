
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int entry_number; int base_addr; int limit; int seg_32bit; int contents; int read_exec_only; int limit_in_pages; int seg_not_present; int useable; int lm; } ;
typedef scalar_t__ pid_t ;
typedef int desc ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct user_desc*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct user_desc*,int) ;
 int FUNC_8 (struct user_desc*,int) ;
 int FUNC_9 (struct user_desc*,int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int,struct user_desc*,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_13(void)
{
 struct user_desc VAR_15 = {
  .entry_number = 0,
  .base_addr = 0,
  .limit = 10,
  .seg_32bit = 1,
  .contents = 2,
  .read_exec_only = 0,
  .limit_in_pages = 0,
  .seg_not_present = 0,
  .useable = 0
 };
 FUNC_8(&VAR_15, VAR_2 | VAR_12 | VAR_5 | VAR_4 | VAR_1);

 VAR_15.limit_in_pages = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_4 | VAR_1 | VAR_3);

 FUNC_2(1, 1);

 VAR_15.entry_number = 2;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_4 | VAR_1 | VAR_3);

 FUNC_2(1, 1);

 VAR_15.base_addr = 0xf0000000;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_4 | VAR_1 | VAR_3);

 VAR_15.useable = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_4 | VAR_1 | VAR_3 | VAR_0);

 VAR_15.seg_not_present = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_1 | VAR_3 | VAR_0);

 VAR_15.seg_32bit = 0;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_3 | VAR_0);

 VAR_15.seg_32bit = 1;
 VAR_15.contents = 0;
 FUNC_8(&VAR_15, VAR_2 | VAR_8 |
        VAR_5 | VAR_1 | VAR_3 | VAR_0);

 VAR_15.read_exec_only = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_6 |
        VAR_5 | VAR_1 | VAR_3 | VAR_0);

 VAR_15.contents = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_7 |
        VAR_5 | VAR_1 | VAR_3 | VAR_0);

 VAR_15.read_exec_only = 0;
 VAR_15.limit_in_pages = 0;
 FUNC_8(&VAR_15, VAR_2 | VAR_9 |
        VAR_5 | VAR_1 | VAR_0);

 VAR_15.contents = 3;
 FUNC_8(&VAR_15, VAR_2 | VAR_13 |
        VAR_5 | VAR_1 | VAR_0);

 VAR_15.read_exec_only = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_11 |
        VAR_5 | VAR_1 | VAR_0);

 VAR_15.read_exec_only = 0;
 VAR_15.contents = 2;
 FUNC_8(&VAR_15, VAR_2 | VAR_12 |
        VAR_5 | VAR_1 | VAR_0);

 VAR_15.read_exec_only = 1;


 VAR_15.lm = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_10 |
        VAR_5 | VAR_1 | VAR_0);
 VAR_15.lm = 0;


 bool VAR_16 = FUNC_8(&VAR_15, VAR_2 | VAR_10 |
      VAR_5 | VAR_1 | VAR_0);

 if (VAR_16) {
  FUNC_10("[RUN]\tTest fork\n");
  pid_t VAR_17 = FUNC_6();
  if (VAR_17 == 0) {
   VAR_14 = 0;
   FUNC_3(VAR_15.entry_number, 1,
         VAR_2 | VAR_10 |
         VAR_5 | VAR_1 | VAR_0, VAR_15.limit,
         1);
   FUNC_2(1, 1);
   FUNC_4(VAR_14 ? 1 : 0);
  } else {
   int VAR_18;
   if (FUNC_12(VAR_17, &VAR_18, 0) != VAR_17 ||
       !FUNC_1(VAR_18)) {
    FUNC_10("[FAIL]\tChild died\n");
    VAR_14++;
   } else if (FUNC_0(VAR_18) != 0) {
    FUNC_10("[FAIL]\tChild failed\n");
    VAR_14++;
   } else {
    FUNC_10("[OK]\tChild succeeded\n");
   }
  }

  FUNC_10("[RUN]\tTest size\n");
  int VAR_19;
  for (VAR_19 = 0; VAR_19 < 8192; VAR_19++) {
   VAR_15.entry_number = VAR_19;
   VAR_15.limit = VAR_19;
   if (FUNC_11(0x11, &VAR_15, sizeof(VAR_15)) != 0) {
    FUNC_10("[FAIL]\tFailed to install entry %d\n", VAR_19);
    VAR_14++;
    break;
   }
  }
  for (int VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
   FUNC_3(VAR_20, 1, VAR_2 | VAR_10 |
         VAR_5 | VAR_1 | VAR_0, VAR_20, 0);
  }
  FUNC_10("[DONE]\tSize test\n");
 } else {
  FUNC_10("[SKIP]\tSkipping fork and size tests because we have no LDT\n");
 }


 VAR_15.entry_number = 8192;
 FUNC_5(&VAR_15);


 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 FUNC_8(&VAR_15, VAR_2 | VAR_8 | VAR_5 | VAR_4);

 VAR_15.seg_not_present = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_8 | VAR_5);

 VAR_15.seg_not_present = 0;
 VAR_15.read_exec_only = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_6 | VAR_5 | VAR_4);

 VAR_15.read_exec_only = 0;
 VAR_15.seg_not_present = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_8 | VAR_5);

 VAR_15.read_exec_only = 1;
 VAR_15.limit = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_6 | VAR_5);

 VAR_15.limit = 0;
 VAR_15.base_addr = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_6 | VAR_5);

 VAR_15.base_addr = 0;
 FUNC_7(&VAR_15, 0);

 VAR_15.seg_not_present = 0;
 VAR_15.seg_32bit = 1;
 VAR_15.read_exec_only = 0;
 VAR_15.limit = 0xfffff;

 FUNC_8(&VAR_15, VAR_2 | VAR_8 | VAR_5 | VAR_4 | VAR_1);

 VAR_15.limit_in_pages = 1;

 FUNC_8(&VAR_15, VAR_2 | VAR_8 | VAR_5 | VAR_4 | VAR_1 | VAR_3);
 VAR_15.read_exec_only = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_6 | VAR_5 | VAR_4 | VAR_1 | VAR_3);
 VAR_15.contents = 1;
 VAR_15.read_exec_only = 0;
 FUNC_8(&VAR_15, VAR_2 | VAR_9 | VAR_5 | VAR_4 | VAR_1 | VAR_3);
 VAR_15.read_exec_only = 1;
 FUNC_8(&VAR_15, VAR_2 | VAR_7 | VAR_5 | VAR_4 | VAR_1 | VAR_3);

 VAR_15.limit = 0;
 FUNC_7(&VAR_15, 1);
}
