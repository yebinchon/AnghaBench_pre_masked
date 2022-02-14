
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {int family; int net; struct ipt_entry* entryinfo; } ;
struct synproxy_net {int dummy; } ;
struct TYPE_2__ {scalar_t__ proto; int invflags; } ;
struct ipt_entry {TYPE_1__ ip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct synproxy_net*,int ) ;
 struct synproxy_net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct xt_tgchk_param *VAR_3)
{
 struct synproxy_net *VAR_4 = FUNC_3(VAR_3->net);
 const struct ipt_entry *VAR_5 = VAR_3->entryinfo;
 int VAR_6;

 if (VAR_5->ip.proto != VAR_1 ||
     VAR_5->ip.invflags & VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3->net, VAR_3->family);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_3->net);
 if (VAR_6) {
  FUNC_1(VAR_3->net, VAR_3->family);
  return VAR_6;
 }

 return VAR_6;
}
