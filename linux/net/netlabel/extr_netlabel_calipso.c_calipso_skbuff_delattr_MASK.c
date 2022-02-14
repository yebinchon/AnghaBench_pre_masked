
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_calipso_ops {int (* skbuff_delattr ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct sk_buff*) ;

int FUNC_2(struct sk_buff *VAR_1)
{
 int VAR_2 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_3 = FUNC_0();

 if (VAR_3)
  VAR_2 = VAR_3->skbuff_delattr(VAR_1);
 return VAR_2;
}
