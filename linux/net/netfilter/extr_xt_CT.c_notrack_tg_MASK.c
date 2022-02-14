
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int dummy; } ;
struct sk_buff {scalar_t__ _nfct; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_2, const struct xt_action_param *VAR_3)
{

 if (VAR_2->_nfct != 0)
  return VAR_1;

 FUNC_0(VAR_2, ((void*)0), VAR_0);

 return VAR_1;
}
