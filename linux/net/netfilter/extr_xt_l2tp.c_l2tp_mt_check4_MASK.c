
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ipt_entry* entryinfo; struct xt_l2tp_info* matchinfo; } ;
struct xt_l2tp_info {int version; } ;
struct ipt_ip {scalar_t__ proto; } ;
struct ipt_entry {struct ipt_ip ip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xt_mtchk_param const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_3)
{
 const struct xt_l2tp_info *VAR_4 = VAR_3->matchinfo;
 const struct ipt_entry *VAR_5 = VAR_3->entryinfo;
 const struct ipt_ip *VAR_6 = &VAR_5->ip;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 != 0)
  return VAR_7;

 if ((VAR_6->proto != VAR_2) &&
     (VAR_6->proto != VAR_1)) {
  FUNC_1("missing protocol rule (udp|l2tpip)\n");
  return -VAR_0;
 }

 if ((VAR_6->proto == VAR_1) &&
     (VAR_4->version == 2)) {
  FUNC_1("v2 doesn't support IP mode\n");
  return -VAR_0;
 }

 return 0;
}
