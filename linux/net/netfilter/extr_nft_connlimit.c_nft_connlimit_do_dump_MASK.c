
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_connlimit {scalar_t__ invert; int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3,
     struct nft_connlimit *VAR_4)
{
 if (FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_4->limit)))
  goto nla_put_failure;
 if (VAR_4->invert &&
     FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_2)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
