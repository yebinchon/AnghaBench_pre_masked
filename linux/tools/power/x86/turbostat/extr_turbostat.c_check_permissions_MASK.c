
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __user_cap_header_struct {int version; int pid; } ;
struct __user_cap_data_struct {int effective; } ;
typedef struct __user_cap_header_struct* cap_user_header_t ;
typedef struct __user_cap_data_struct* cap_user_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;

void FUNC_8()
{
 struct __user_cap_header_struct VAR_5;
 cap_user_header_t VAR_6 = &VAR_5;
 struct __user_cap_data_struct VAR_7;
 cap_user_data_t VAR_8 = &VAR_7;
 extern int FUNC_9(cap_user_header_t VAR_9, cap_user_data_t VAR_10);
 int VAR_11 = 0;
 char VAR_12[32];


 VAR_6->pid = FUNC_3();
 VAR_6->version = VAR_2;
 if (FUNC_9(VAR_6, VAR_8) < 0)
  FUNC_0(-6, "capget(2) failed");

 if ((VAR_8->effective & (1 << VAR_0)) == 0) {
  VAR_11++;
  FUNC_7("capget(CAP_SYS_RAWIO) failed,"
   " try \"# setcap cap_sys_rawio=ep %s\"", VAR_4);
 }


 FUNC_5(VAR_12, "/dev/cpu/%d/msr", VAR_3);
 if (FUNC_1(VAR_12, VAR_1)) {
  VAR_11++;
  FUNC_6("/dev/cpu/0/msr open failed, try chown or chmod +r /dev/cpu/*/msr");
 }


 if (VAR_11)
  if (FUNC_4() != 0)
   FUNC_7("... or simply run as root");

 if (VAR_11)
  FUNC_2(-6);
}
