
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int gro_result_t ;
struct TYPE_2__ {int free; } ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static gro_result_t FUNC_5(gro_result_t VAR_1, struct sk_buff *VAR_2)
{
 switch (VAR_1) {
 case 128:
  if (FUNC_4(VAR_2))
   VAR_1 = 132;
  break;

 case 132:
  FUNC_2(VAR_2);
  break;

 case 129:
  if (FUNC_0(VAR_2)->free == VAR_0)
   FUNC_3(VAR_2);
  else
   FUNC_1(VAR_2);
  break;

 case 131:
 case 130:
 case 133:
  break;
 }

 return VAR_1;
}
