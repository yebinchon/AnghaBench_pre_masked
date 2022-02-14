
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long eip; } ;
struct vm86plus_struct {TYPE_1__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (long) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (long) ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 long FUNC_5 (int ,struct vm86plus_struct*) ;

__attribute__((used)) static bool FUNC_6(struct vm86plus_struct *VAR_10, unsigned long VAR_11,
      unsigned int VAR_12, unsigned int VAR_13,
      const char *VAR_14)
{
 long VAR_15;

 FUNC_2("[RUN]\t%s from vm86 mode\n", VAR_14);
 VAR_10->regs.eip = VAR_11;
 VAR_15 = FUNC_5(VAR_2, VAR_10);

 if (VAR_15 == -1 && (VAR_8 == VAR_0 || VAR_8 == VAR_1)) {
  FUNC_2("[SKIP]\tvm86 %s\n",
         VAR_8 == VAR_0 ? "not supported" : "not allowed");
  return 0;
 }

 if (FUNC_1(VAR_15) == VAR_3) {
  char VAR_16[32];
  int VAR_17 = FUNC_0(VAR_15);
  if (VAR_17 == 13)
   FUNC_4(VAR_16, "GP");
  else if (VAR_17 == 5)
   FUNC_4(VAR_16, "BR");
  else if (VAR_17 == 14)
   FUNC_4(VAR_16, "PF");
  else
   FUNC_3(VAR_16, "%d", VAR_17);

  FUNC_2("[INFO]\tExited vm86 mode due to #%s\n", VAR_16);
 } else if (FUNC_1(VAR_15) == VAR_7) {
  FUNC_2("[INFO]\tExited vm86 mode due to unhandled GP fault\n");
 } else if (FUNC_1(VAR_15) == VAR_6) {
  FUNC_2("[INFO]\tExited vm86 mode due to a trap (arg=%ld)\n",
         FUNC_0(VAR_15));
 } else if (FUNC_1(VAR_15) == VAR_4) {
  FUNC_2("[INFO]\tExited vm86 mode due to a signal\n");
 } else if (FUNC_1(VAR_15) == VAR_5) {
  FUNC_2("[INFO]\tExited vm86 mode due to STI\n");
 } else {
  FUNC_2("[INFO]\tExited vm86 mode due to type %ld, arg %ld\n",
         FUNC_1(VAR_15), FUNC_0(VAR_15));
 }

 if (VAR_12 == -1 ||
     (FUNC_1(VAR_15) == VAR_12 && FUNC_0(VAR_15) == VAR_13)) {
  FUNC_2("[OK]\tReturned correctly\n");
 } else {
  FUNC_2("[FAIL]\tIncorrect return reason (started at eip = 0x%lx, ended at eip = 0x%lx)\n", VAR_11, VAR_10->regs.eip);
  VAR_9++;
 }

 return 1;
}
