
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sched_entry {scalar_t__ interval; void* gate_mask; int command; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_4, struct sched_entry *VAR_5,
       struct netlink_ext_ack *VAR_6)
{
 u32 VAR_7 = 0;

 if (VAR_4[VAR_1])
  VAR_5->command = FUNC_2(
   VAR_4[VAR_1]);

 if (VAR_4[VAR_2])
  VAR_5->gate_mask = FUNC_1(
   VAR_4[VAR_2]);

 if (VAR_4[VAR_3])
  VAR_7 = FUNC_1(
   VAR_4[VAR_3]);

 if (VAR_7 == 0) {
  FUNC_0(VAR_6, "Invalid interval for schedule entry");
  return -VAR_0;
 }

 VAR_5->interval = VAR_7;

 return 0;
}
