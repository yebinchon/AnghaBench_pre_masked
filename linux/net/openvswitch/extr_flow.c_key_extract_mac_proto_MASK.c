
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; TYPE_1__* dev; } ;
struct TYPE_2__ {int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4)
{
 switch (VAR_4->dev->type) {
 case 129:
  return VAR_2;
 case 128:
  if (VAR_4->protocol == FUNC_1(VAR_1))
   return VAR_2;
  return VAR_3;
 }
 FUNC_0(1);
 return -VAR_0;
}
