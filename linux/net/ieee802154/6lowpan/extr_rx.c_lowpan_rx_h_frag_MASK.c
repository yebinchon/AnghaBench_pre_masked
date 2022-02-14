
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int lowpan_rx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static lowpan_rx_result FUNC_4(struct sk_buff *VAR_4)
{
 int VAR_5;

 if (!(FUNC_1(*FUNC_3(VAR_4)) ||
       FUNC_2(*FUNC_3(VAR_4))))
  return VAR_1;

 VAR_5 = FUNC_0(VAR_4, *FUNC_3(VAR_4) &
         VAR_0);
 if (VAR_5 == 1)
  return VAR_3;




 return VAR_2;
}
