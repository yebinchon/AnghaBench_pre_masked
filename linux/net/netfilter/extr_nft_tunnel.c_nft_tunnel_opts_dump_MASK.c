
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_10__ {int dir; } ;
struct TYPE_7__ {TYPE_5__ md2; int index; } ;
struct TYPE_8__ {int version; TYPE_2__ u; } ;
struct TYPE_6__ {int gbp; } ;
struct TYPE_9__ {TYPE_3__ erspan; TYPE_1__ vxlan; } ;
struct nft_tunnel_opts {int flags; TYPE_4__ u; } ;
struct nft_tunnel_obj {struct nft_tunnel_opts opts; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7,
    struct nft_tunnel_obj *VAR_8)
{
 struct nft_tunnel_opts *VAR_9 = &VAR_8->opts;
 struct nlattr *VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_3);
 if (!VAR_10)
  return -1;

 if (VAR_9->flags & VAR_6) {
  if (FUNC_4(VAR_7, VAR_4,
     FUNC_1(VAR_9->u.vxlan.gbp)))
   return -1;
 } else if (VAR_9->flags & VAR_5) {
  switch (VAR_9->u.erspan.version) {
  case 129:
   if (FUNC_4(VAR_7, VAR_0,
      VAR_9->u.erspan.u.index))
    return -1;
   break;
  case 128:
   if (FUNC_5(VAR_7, VAR_2,
           FUNC_0(&VAR_9->u.erspan.u.md2)) ||
       FUNC_5(VAR_7, VAR_1,
           VAR_9->u.erspan.u.md2.dir))
    return -1;
   break;
  }
 }
 FUNC_2(VAR_7, VAR_10);

 return 0;
}
