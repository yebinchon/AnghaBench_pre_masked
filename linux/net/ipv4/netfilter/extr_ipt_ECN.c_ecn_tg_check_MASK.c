
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct ipt_entry* entryinfo; struct ipt_ECN_info* targinfo; } ;
struct TYPE_2__ {scalar_t__ proto; int invflags; } ;
struct ipt_entry {TYPE_1__ ip; } ;
struct ipt_ECN_info {int operation; int ip_ect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_7)
{
 const struct ipt_ECN_info *VAR_8 = VAR_7->targinfo;
 const struct ipt_entry *VAR_9 = VAR_7->entryinfo;

 if (VAR_8->operation & VAR_3)
  return -VAR_0;

 if (VAR_8->ip_ect & ~VAR_2)
  return -VAR_0;

 if ((VAR_8->operation & (VAR_5|VAR_4)) &&
     (VAR_9->ip.proto != VAR_1 || (VAR_9->ip.invflags & VAR_6))) {
  FUNC_0("cannot use operation on non-tcp rule\n");
  return -VAR_0;
 }
 return 0;
}
