
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conntrack_zone {scalar_t__ id; int dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, int VAR_2,
      const struct nf_conntrack_zone *VAR_3, int VAR_4)
{
 if (VAR_3->id == VAR_0 || VAR_3->dir != VAR_4)
  return 0;
 if (FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_3->id)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
