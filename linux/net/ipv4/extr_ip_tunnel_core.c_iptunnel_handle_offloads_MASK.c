
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int encapsulation; scalar_t__ ip_summed; } ;
struct TYPE_2__ {int gso_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sk_buff *VAR_3,
        int VAR_4)
{
 int VAR_5;

 if (FUNC_0(!VAR_3->encapsulation)) {
  FUNC_3(VAR_3);
  VAR_3->encapsulation = 1;
 }

 if (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (FUNC_5(VAR_5))
   return VAR_5;
  FUNC_4(VAR_3)->gso_type |= VAR_4;
  return 0;
 }

 if (VAR_3->ip_summed != VAR_1) {
  VAR_3->ip_summed = VAR_0;





  VAR_3->encapsulation = 0;
 }

 return 0;
}
