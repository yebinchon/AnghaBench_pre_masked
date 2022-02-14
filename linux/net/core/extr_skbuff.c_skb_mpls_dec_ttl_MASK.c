
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int label_stack_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sk_buff *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;

 if (FUNC_5(!FUNC_2(VAR_3->protocol)))
  return -VAR_0;

 VAR_4 = FUNC_0(FUNC_3(VAR_3)->label_stack_entry);
 VAR_5 = (VAR_4 & VAR_1) >> VAR_2;
 if (!--VAR_5)
  return -VAR_0;

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_5 << VAR_2;

 return FUNC_4(VAR_3, FUNC_1(VAR_4));
}
