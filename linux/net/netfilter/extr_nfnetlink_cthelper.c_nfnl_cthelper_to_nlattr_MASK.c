
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn_help {int data; TYPE_1__* helper; } ;
struct nf_conn {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conn_help* FUNC_0 (struct nf_conn const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_2, const struct nf_conn *VAR_3)
{
 const struct nf_conn_help *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->helper->data_len &&
     FUNC_1(VAR_2, VAR_0, VAR_4->helper->data_len, &VAR_4->data))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_1;
}
