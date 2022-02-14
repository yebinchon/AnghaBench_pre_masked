
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct sched_param {int sched_priority; } ;
typedef int count ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_15 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,unsigned char*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,struct sched_param*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (char*,struct stat*) ;
 int VAR_17 ;
 int FUNC_20 () ;

int FUNC_21(int VAR_18, char **VAR_19)
{
 int VAR_20, VAR_21;
 struct stat VAR_22;
 struct sched_param VAR_23;

 if (VAR_18 == 1)
  VAR_21 = FUNC_17("/dev/sda");
 else if (VAR_18 == 2)
  VAR_21 = FUNC_17(VAR_19[1]);
 else
  VAR_21 = -VAR_1;

 if (VAR_21 || !FUNC_20()) {
  FUNC_5(VAR_17, "usage: %s <device> (default: /dev/sda)\n",
    VAR_19[0]);
  FUNC_4(1);
 }

 VAR_20 = FUNC_9("/dev/freefall", VAR_10);
 if (VAR_20 < 0) {
  FUNC_11("/dev/freefall");
  return VAR_2;
 }

 if (FUNC_19("/sys/class/leds/hp::hddprotect/brightness", &VAR_22))
  VAR_16 = 1;

 if (FUNC_3(0, 0) != 0) {
  FUNC_11("daemon");
  return VAR_2;
 }

 FUNC_10(VAR_13, VAR_4 | VAR_7 | VAR_6, VAR_5);

 VAR_23.sched_priority = FUNC_14(VAR_11);
 FUNC_15(0, VAR_11, &VAR_23);
 FUNC_7(VAR_8|VAR_9);

 FUNC_18(VAR_12, VAR_15);

 for (;;) {
  unsigned char VAR_24;

  VAR_21 = FUNC_13(VAR_20, &VAR_24, sizeof(VAR_24));
  FUNC_0(0);
  if ((VAR_21 == -1) && (VAR_14 == VAR_0)) {

   continue;
  }

  if (VAR_21 != sizeof(VAR_24)) {
   FUNC_11("read");
   break;
  }

  FUNC_12(21);
  FUNC_16(1);
  if (1 || FUNC_8() || FUNC_6())
   FUNC_0(2);
  else
   FUNC_0(20);
 }

 FUNC_2();
 FUNC_1(VAR_20);
 return VAR_3;
}
