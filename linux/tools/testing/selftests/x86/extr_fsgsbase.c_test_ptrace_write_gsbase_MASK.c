
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 () ;
 unsigned long VAR_5 ;
 unsigned long FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 (char*,...) ;
 unsigned long FUNC_7 (int ,scalar_t__,unsigned long,int) ;
 int FUNC_8 (scalar_t__) ;
 unsigned long* VAR_7 ;
 int FUNC_9 (int*) ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_8;
 pid_t VAR_9 = FUNC_4();

 if (VAR_9 < 0)
  FUNC_3(1, "fork");

 if (VAR_9 == 0) {
  FUNC_6("[RUN]\tPTRACE_POKE(), write GSBASE from ptracer\n");

  *VAR_7 = FUNC_5();

  if (FUNC_7(VAR_3, 0, ((void*)0), ((void*)0)) != 0)
   FUNC_3(1, "PTRACE_TRACEME");

  FUNC_8(VAR_4);
  FUNC_2(0);
 }

 FUNC_9(&VAR_8);

 if (FUNC_1(VAR_8) == VAR_4) {
  unsigned long VAR_10, VAR_11;
  unsigned long VAR_12 = FUNC_0(VAR_10);
  unsigned long VAR_13 = FUNC_0(VAR_5);

  VAR_10 = FUNC_7(VAR_1, VAR_9, VAR_12, ((void*)0));

  if (VAR_10 != *VAR_7) {
   VAR_6++;
   FUNC_6("[FAIL]\tGS is not prepared with nonzero\n");
   goto END;
  }

  if (FUNC_7(VAR_2, VAR_9, VAR_13, 0xFF) != 0)
   FUNC_3(1, "PTRACE_POKEUSER");

  VAR_10 = FUNC_7(VAR_1, VAR_9, VAR_12, ((void*)0));
  VAR_11 = FUNC_7(VAR_1, VAR_9, VAR_13, ((void*)0));







  if (VAR_10 == 0 && VAR_11 == 0xFF) {
   FUNC_6("[OK]\tGS was reset as expected\n");
  } else {
   VAR_6++;
   FUNC_6("[FAIL]\tGS=0x%lx, GSBASE=0x%lx (should be 0, 0xFF)\n", VAR_10, VAR_11);
  }
 }

END:
 FUNC_7(VAR_0, VAR_9, ((void*)0), ((void*)0));
}
