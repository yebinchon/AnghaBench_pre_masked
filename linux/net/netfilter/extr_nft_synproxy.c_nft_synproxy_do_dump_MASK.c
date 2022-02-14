
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int options; int wscale; int mss; } ;
struct nft_synproxy {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct nft_synproxy *VAR_4)
{
 if (FUNC_2(VAR_3, VAR_1, FUNC_1(VAR_4->info.mss)) ||
     FUNC_4(VAR_3, VAR_2, VAR_4->info.wscale) ||
     FUNC_3(VAR_3, VAR_0, FUNC_0(VAR_4->info.options)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
