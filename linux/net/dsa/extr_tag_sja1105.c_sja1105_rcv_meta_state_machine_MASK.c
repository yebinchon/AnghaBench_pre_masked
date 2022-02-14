
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; } ;
struct sja1105_port {TYPE_2__* data; } ;
struct sja1105_meta {int dummy; } ;
struct dsa_port {TYPE_1__* ds; struct sja1105_port* priv; } ;
struct TYPE_4__ {int meta_lock; struct sk_buff* stampable_skb; int state; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct dsa_port* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sja1105_meta*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static struct sk_buff
*FUNC_8(struct sk_buff *VAR_2,
    struct sja1105_meta *VAR_3,
    bool VAR_4,
    bool VAR_5)
{
 struct sja1105_port *VAR_6;
 struct dsa_port *VAR_7;

 VAR_7 = FUNC_1(VAR_2->dev);
 VAR_6 = VAR_7->priv;




 if (VAR_4) {
  if (!FUNC_7(VAR_0, &VAR_6->data->state))

   return VAR_2;

  FUNC_5(&VAR_6->data->meta_lock);



  if (VAR_6->data->stampable_skb) {
   FUNC_0(VAR_7->ds->dev,
         "Expected meta frame, is %12llx "
         "in the DSA master multicast filter?\n",
         VAR_1);
   FUNC_2(VAR_6->data->stampable_skb);
  }




  VAR_6->data->stampable_skb = FUNC_4(VAR_2);
  FUNC_6(&VAR_6->data->meta_lock);


  return ((void*)0);







 } else if (VAR_5) {
  struct sk_buff *VAR_8;




  if (!FUNC_7(VAR_0, &VAR_6->data->state))
   return ((void*)0);

  FUNC_5(&VAR_6->data->meta_lock);

  VAR_8 = VAR_6->data->stampable_skb;
  VAR_6->data->stampable_skb = ((void*)0);




  if (!VAR_8) {
   FUNC_0(VAR_7->ds->dev,
         "Unexpected meta frame\n");
   FUNC_6(&VAR_6->data->meta_lock);
   return ((void*)0);
  }

  if (VAR_8->dev != VAR_2->dev) {
   FUNC_0(VAR_7->ds->dev,
         "Meta frame on wrong port\n");
   FUNC_6(&VAR_6->data->meta_lock);
   return ((void*)0);
  }




  FUNC_2(VAR_2);
  VAR_2 = VAR_8;
  FUNC_3(VAR_2, VAR_3);

  FUNC_6(&VAR_6->data->meta_lock);
 }

 return VAR_2;
}
