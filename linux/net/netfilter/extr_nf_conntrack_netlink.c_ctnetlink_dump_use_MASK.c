
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int use; } ;
struct nf_conn {TYPE_1__ ct_general; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, const struct nf_conn *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_0, FUNC_1(FUNC_0(&VAR_2->ct_general.use))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
