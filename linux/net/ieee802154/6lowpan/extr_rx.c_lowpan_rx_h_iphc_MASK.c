
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int lowpan_rx_result ;
struct TYPE_2__ {scalar_t__ d_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static lowpan_rx_result FUNC_4(struct sk_buff *VAR_3)
{
 int VAR_4;

 if (!FUNC_2(*FUNC_3(VAR_3)))
  return VAR_0;




 FUNC_0(VAR_3)->d_size = 0;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_1;

 return VAR_2;
}
