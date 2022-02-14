
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fou {scalar_t__ family; } ;
struct TYPE_4__ {void* tot_len; } ;
struct TYPE_3__ {void* payload_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,size_t) ;
 void* FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct sk_buff*,int ,size_t) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct fou *VAR_2, size_t VAR_3)
{



 if (VAR_2->family == VAR_0)
  FUNC_2(VAR_1)->tot_len = FUNC_1(FUNC_5(FUNC_2(VAR_1)->tot_len) - VAR_3);
 else
  FUNC_4(VAR_1)->payload_len =
      FUNC_1(FUNC_5(FUNC_4(VAR_1)->payload_len) - VAR_3);

 FUNC_0(VAR_1, VAR_3);
 FUNC_6(VAR_1, FUNC_8(VAR_1), VAR_3);
 FUNC_7(VAR_1);
 return FUNC_3(VAR_1);
}
