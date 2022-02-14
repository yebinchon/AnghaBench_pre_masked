
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int family; struct ipt_ip* entryinfo; struct xt_CHECKSUM_info* targinfo; } ;
struct xt_CHECKSUM_info {int operation; } ;
struct ipt_ip {int invflags; int flags; int proto; } ;
struct ip6t_ip6 {int invflags; int flags; int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_5)
{
 const struct xt_CHECKSUM_info *VAR_6 = VAR_5->targinfo;
 const struct ip6t_ip6 *VAR_7 = VAR_5->entryinfo;
 const struct ipt_ip *VAR_8 = VAR_5->entryinfo;

 if (VAR_6->operation & ~VAR_3) {
  FUNC_0("unsupported CHECKSUM operation %x\n",
        VAR_6->operation);
  return -VAR_0;
 }
 if (!VAR_6->operation)
  return -VAR_0;

 switch (VAR_5->family) {
 case 129:
  if (VAR_8->proto == VAR_2 &&
      (VAR_8->invflags & VAR_4) == 0)
   return 0;
  break;
 case 128:
  if ((VAR_7->flags & VAR_1) &&
      VAR_7->proto == VAR_2 &&
      (VAR_7->invflags & VAR_4) == 0)
   return 0;
  break;
 }

 FUNC_1("CHECKSUM should be avoided.  If really needed, restrict with \"-p udp\" and only use in OUTPUT\n");
 return 0;
}
