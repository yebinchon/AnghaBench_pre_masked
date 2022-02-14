
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct ipt_entry* entryinfo; struct ipt_reject_info* targinfo; } ;
struct ipt_reject_info {scalar_t__ with; } ;
struct TYPE_2__ {scalar_t__ proto; int invflags; } ;
struct ipt_entry {TYPE_1__ ip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_5)
{
 const struct ipt_reject_info *VAR_6 = VAR_5->targinfo;
 const struct ipt_entry *VAR_7 = VAR_5->entryinfo;

 if (VAR_6->with == VAR_2) {
  FUNC_0("ECHOREPLY no longer supported.\n");
  return -VAR_0;
 } else if (VAR_6->with == VAR_3) {

  if (VAR_7->ip.proto != VAR_1 ||
      (VAR_7->ip.invflags & VAR_4)) {
   FUNC_0("TCP_RESET invalid for non-tcp\n");
   return -VAR_0;
  }
 }
 return 0;
}
