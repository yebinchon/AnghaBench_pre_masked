
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sk_buff {int data; scalar_t__ transport_header; scalar_t__ network_header; scalar_t__ len; } ;
struct TYPE_2__ {int tot_len; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = VAR_1->data - FUNC_5(VAR_1);

 if (VAR_1->transport_header != VAR_1->network_header) {
  FUNC_2(FUNC_5(VAR_1),
   FUNC_3(VAR_1), VAR_2);
  VAR_1->network_header = VAR_1->transport_header;
 }
 FUNC_1(VAR_1)->tot_len = FUNC_0(VAR_1->len + VAR_2);
 FUNC_4(VAR_1);
 return 0;
}
