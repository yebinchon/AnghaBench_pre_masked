
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; TYPE_1__* dev; } ;
struct TYPE_2__ {int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,TYPE_1__*,int ,unsigned char const*,unsigned char const*,int ) ;

int FUNC_1(struct sk_buff *VAR_2,
       const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 int VAR_5 = -VAR_0;

 switch (VAR_2->dev->type) {
 case 129:
 case 128:
  VAR_5 = FUNC_0(VAR_2, VAR_2->dev, VAR_1, VAR_4, VAR_3,
         VAR_2->len);
  if (VAR_5 > 0)
   VAR_5 = 0;
  break;
 default:
  break;
 }
 return VAR_5;
}
