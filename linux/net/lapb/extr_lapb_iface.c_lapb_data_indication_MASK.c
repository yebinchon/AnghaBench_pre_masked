
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lapb_cb {int dev; TYPE_1__* callbacks; } ;
struct TYPE_2__ {int (* data_indication ) (int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

int FUNC_2(struct lapb_cb *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_1->callbacks->data_indication)
  return VAR_1->callbacks->data_indication(VAR_1->dev, VAR_2);

 FUNC_0(VAR_2);
 return VAR_0;
}
