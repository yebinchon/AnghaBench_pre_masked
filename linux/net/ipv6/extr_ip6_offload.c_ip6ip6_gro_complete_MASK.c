
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int encapsulation; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, int VAR_2)
{
 VAR_1->encapsulation = 1;
 FUNC_1(VAR_1)->gso_type |= VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
