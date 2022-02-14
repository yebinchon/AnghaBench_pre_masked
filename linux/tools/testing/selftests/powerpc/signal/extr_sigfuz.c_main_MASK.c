
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
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_10, char **VAR_11)
{
 int VAR_12;

 while ((VAR_12 = FUNC_1(VAR_10, VAR_11, "bamxt:fi:h")) != -1) {
  if (VAR_12 == 'b') {
   FUNC_2("Mess with TM before signal\n");
   VAR_5 |= VAR_4;
  } else if (VAR_12 == 'a') {
   FUNC_2("Mess with TM at signal handler\n");
   VAR_5 |= VAR_3;
  } else if (VAR_12 == 'm') {
   FUNC_2("Mess with MSR[TS] bits in mcontext\n");
   VAR_5 |= VAR_2;
  } else if (VAR_12 == 'x') {
   FUNC_2("Running with all options enabled\n");
   VAR_5 |= VAR_0;
  } else if (VAR_12 == 't') {
   VAR_7 = FUNC_0(VAR_8);
   FUNC_2("Threads = %d\n", VAR_7);
  } else if (VAR_12 == 'f') {
   VAR_5 |= VAR_1;
   FUNC_2("Press ^C to stop\n");
   FUNC_5(-1);
  } else if (VAR_12 == 'i') {
   VAR_6 = FUNC_0(VAR_8);
   FUNC_2("Running for %d interactions\n", VAR_6);
  } else if (VAR_12 == 'h') {
   FUNC_3(VAR_11[0]);
  }
 }


 if (!VAR_5)
  VAR_5 = VAR_0;

 FUNC_4(VAR_9, "signal_fuzzer");
}
