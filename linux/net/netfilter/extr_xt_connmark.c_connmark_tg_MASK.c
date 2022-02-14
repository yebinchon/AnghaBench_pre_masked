
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_connmark_tginfo2 {int mode; int nfmask; int ctmask; int ctmark; } ;
struct xt_connmark_tginfo1 {int mode; int nfmask; int ctmask; int ctmark; } ;
struct xt_action_param {struct xt_connmark_tginfo1* targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,struct xt_connmark_tginfo2 const*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_0, const struct xt_action_param *VAR_1)
{
 const struct xt_connmark_tginfo1 *VAR_2 = VAR_1->targinfo;
 const struct xt_connmark_tginfo2 VAR_3 = {
  .ctmark = VAR_2->ctmark,
  .ctmask = VAR_2->ctmask,
  .nfmask = VAR_2->nfmask,
  .mode = VAR_2->mode,
 };

 return FUNC_0(VAR_0, &VAR_3);
}
