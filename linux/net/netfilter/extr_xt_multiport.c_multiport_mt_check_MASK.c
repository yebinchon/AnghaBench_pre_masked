
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_multiport_v1 {int count; int flags; } ;
struct xt_mtchk_param {struct xt_multiport_v1* matchinfo; struct ipt_ip* entryinfo; } ;
struct ipt_ip {int invflags; int proto; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_1)
{
 const struct ipt_ip *VAR_2 = VAR_1->entryinfo;
 const struct xt_multiport_v1 *VAR_3 = VAR_1->matchinfo;

 return FUNC_0(VAR_2->proto, VAR_2->invflags, VAR_3->flags,
       VAR_3->count) ? 0 : -VAR_0;
}
