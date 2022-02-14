
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isst_if_msr_cmds {int cmd_count; TYPE_1__* msr_cmd; } ;
struct TYPE_2__ {unsigned int logical_cpu; unsigned int msr; int read_write; unsigned long long data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,int,unsigned long long,unsigned long long) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,int) ;
 int FUNC_4 (int,int ,struct isst_if_msr_cmds*) ;
 int FUNC_5 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

int FUNC_7(unsigned int VAR_3, unsigned int VAR_4, int VAR_5,
     unsigned long long *VAR_6)
{
 struct isst_if_msr_cmds VAR_7;
 const char *VAR_8 = "/dev/isst_interface";
 int VAR_9;

 VAR_9 = FUNC_5(VAR_8, VAR_1);
 if (VAR_9 < 0)
  FUNC_2(-1, "%s open failed", VAR_8);

 VAR_7.cmd_count = 1;
 VAR_7.msr_cmd[0].logical_cpu = VAR_3;
 VAR_7.msr_cmd[0].msr = VAR_4;
 VAR_7.msr_cmd[0].read_write = VAR_5;
 if (VAR_5)
  VAR_7.msr_cmd[0].data = *VAR_6;

 if (FUNC_4(VAR_9, VAR_0, &VAR_7) == -1) {
  FUNC_6("ISST_IF_MSR_COMMAD");
  FUNC_3(VAR_2, "Error: msr_cmd cpu:%d msr:%x read_write:%d\n",
   VAR_3, VAR_4, VAR_5);
 } else {
  if (!VAR_5)
   *VAR_6 = VAR_7.msr_cmd[0].data;

  FUNC_1(
   "msr_cmd response: cpu:%d msr:%x rd_write:%x resp:%llx %llx\n",
   VAR_3, VAR_4, VAR_5, *VAR_6, VAR_7.msr_cmd[0].data);
 }

 FUNC_0(VAR_9);

 return 0;
}
