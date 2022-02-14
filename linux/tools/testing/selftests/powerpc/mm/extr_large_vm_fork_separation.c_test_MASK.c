
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int* FUNC_8 (void*,unsigned long,int,int,int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int,int*,int) ;
 unsigned long FUNC_13 (int ) ;
 int FUNC_14 (int,int*,int ) ;
 int FUNC_15 (int,int*,int) ;

__attribute__((used)) static int FUNC_16(void)
{
 int VAR_7[2], VAR_8[2], VAR_9, VAR_10, VAR_11, *VAR_12;
 unsigned long VAR_13;
 pid_t VAR_14;

 VAR_13 = FUNC_13(VAR_6);
 FUNC_1(VAR_13 != 65536);


 VAR_12 = FUNC_8((void *)(512ul << 40), VAR_13, VAR_4 | VAR_5,
  VAR_3 | VAR_0 | VAR_2, -1, 0);
 if (VAR_12 == VAR_1) {
  FUNC_9("mmap");
  FUNC_11("Error: couldn't mmap(), confirm kernel has 4TB support?\n");
  return 1;
 }

 FUNC_11("parent writing %p = 1\n", VAR_12);
 *VAR_12 = 1;

 FUNC_0(FUNC_10(VAR_7) == -1 || FUNC_10(VAR_8) == -1);

 VAR_14 = FUNC_6();
 if (VAR_14 == 0) {
  FUNC_0(FUNC_12(VAR_7[0], &VAR_11, 1) != 1);

  VAR_14 = FUNC_7();
  FUNC_11("child writing  %p = %d\n", VAR_12, VAR_14);
  *VAR_12 = VAR_14;

  FUNC_0(FUNC_15(VAR_8[1], &VAR_11, 1) != 1);
  FUNC_0(FUNC_12(VAR_7[0], &VAR_11, 1) != 1);
  FUNC_5(0);
 }

 VAR_11 = 0;
 FUNC_0(FUNC_15(VAR_7[1], &VAR_11, 1) != 1);
 FUNC_0(FUNC_12(VAR_8[0], &VAR_11, 1) != 1);


 FUNC_4();

 VAR_9 = 0;
 FUNC_11("parent reading %p = %d\n", VAR_12, *VAR_12);
 if (*VAR_12 != 1) {
  FUNC_11("Error: BUG! parent saw child's write! *p = %d\n", *VAR_12);
  VAR_9 = 1;
 }

 FUNC_0(FUNC_15(VAR_7[1], &VAR_11, 1) != 1);
 FUNC_0(FUNC_14(VAR_14, &VAR_10, 0) == -1);
 FUNC_0(!FUNC_3(VAR_10) || FUNC_2(VAR_10));

 if (VAR_9 == 0)
  FUNC_11("success: test completed OK\n");

 return VAR_9;
}
