
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int flags; int qthreshold; int copy_len; int group; } ;
struct TYPE_4__ {int logflags; int level; } ;
struct TYPE_6__ {TYPE_2__ ulog; TYPE_1__ log; } ;
struct nf_loginfo {int type; TYPE_3__ u; } ;
struct nft_log {scalar_t__ prefix; struct nf_loginfo loginfo; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nft_log* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, const struct nft_expr *VAR_9)
{
 const struct nft_log *VAR_10 = FUNC_2(VAR_9);
 const struct nf_loginfo *VAR_11 = &VAR_10->loginfo;

 if (VAR_10->prefix != VAR_7)
  if (FUNC_5(VAR_8, VAR_3, VAR_10->prefix))
   goto nla_put_failure;
 switch (VAR_11->type) {
 case 129:
  if (FUNC_4(VAR_8, VAR_2, FUNC_0(VAR_11->u.log.level)))
   goto nla_put_failure;

  if (VAR_11->u.log.logflags) {
   if (FUNC_4(VAR_8, VAR_0,
      FUNC_0(VAR_11->u.log.logflags)))
    goto nla_put_failure;
  }
  break;
 case 128:
  if (FUNC_3(VAR_8, VAR_1, FUNC_1(VAR_11->u.ulog.group)))
   goto nla_put_failure;

  if (VAR_11->u.ulog.flags & VAR_6) {
   if (FUNC_4(VAR_8, VAR_5,
      FUNC_0(VAR_11->u.ulog.copy_len)))
    goto nla_put_failure;
  }
  if (VAR_11->u.ulog.qthreshold) {
   if (FUNC_3(VAR_8, VAR_4,
      FUNC_1(VAR_11->u.ulog.qthreshold)))
    goto nla_put_failure;
  }
  break;
 }
 return 0;

nla_put_failure:
 return -1;
}
