
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; } ;
typedef int rx_handler_result_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static rx_handler_result_t FUNC_2(struct sk_buff **VAR_3)
{
 struct sk_buff *VAR_4 = *VAR_3;

 if (FUNC_1(VAR_4->pkt_type == VAR_0))
  return VAR_2;

 FUNC_0(VAR_4);
 return VAR_1;
}
