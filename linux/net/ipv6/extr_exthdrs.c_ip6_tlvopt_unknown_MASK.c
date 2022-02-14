
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int daddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_5(struct sk_buff *VAR_1, int VAR_2,
          bool VAR_3)
{
 if (VAR_3) {







  goto drop;
 }

 switch ((FUNC_4(VAR_1)[VAR_2] & 0xC0) >> 6) {
 case 0:
  return 1;

 case 1:
  break;

 case 3:



  if (FUNC_1(&FUNC_2(VAR_1)->daddr))
   break;

 case 2:
  FUNC_0(VAR_1, VAR_0, VAR_2);
  return 0;
 }

drop:
 FUNC_3(VAR_1);
 return 0;
}
