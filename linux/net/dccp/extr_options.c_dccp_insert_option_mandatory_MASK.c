
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;

int FUNC_2(struct sk_buff *VAR_2)
{
 if (FUNC_0(VAR_2)->dccpd_opt_len >= VAR_1)
  return -1;

 FUNC_0(VAR_2)->dccpd_opt_len++;
 *(u8 *)FUNC_1(VAR_2, 1) = VAR_0;
 return 0;
}
