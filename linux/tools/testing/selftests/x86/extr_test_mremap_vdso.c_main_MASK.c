
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*,unsigned long) ;
 int FUNC_7 (int,int*,int ) ;

int FUNC_8(int VAR_5, char **VAR_6, char **VAR_7)
{
 pid_t VAR_8;

 VAR_8 = FUNC_2();
 if (VAR_8 == -1) {
  FUNC_4("[WARN]\tfailed to fork (%d): %m\n", VAR_4);
  return 1;
 }

 if (VAR_8 == 0) {
  unsigned long VAR_9 = VAR_2;
  unsigned long VAR_10;
  int VAR_11 = -1;

  VAR_10 = FUNC_3(VAR_0);
  FUNC_4("\tAT_SYSINFO_EHDR is %#lx\n", VAR_10);
  if (!VAR_10 || VAR_10 == -VAR_1) {
   FUNC_4("[WARN]\tgetauxval failed\n");
   return 0;
  }


  while (VAR_11 < 0) {
   VAR_11 = FUNC_6((void *)VAR_10, VAR_9);
   VAR_9 += VAR_2;
  }





  FUNC_5(VAR_3, VAR_11);

 } else {
  int VAR_12;

  if (FUNC_7(VAR_8, &VAR_12, 0) != VAR_8 ||
   !FUNC_1(VAR_12)) {
   FUNC_4("[FAIL]\tmremap() of the vDSO does not work on this kernel!\n");
   return 1;
  } else if (FUNC_0(VAR_12) != 0) {
   FUNC_4("[FAIL]\tChild failed with %d\n",
     FUNC_0(VAR_12));
   return 1;
  }
  FUNC_4("[OK]\n");
 }

 return 0;
}
