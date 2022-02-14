
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hsr_priv {int ports; } ;
struct hsr_port {int type; struct net_device* dev; int port_list; struct hsr_priv* hsr; } ;
typedef enum hsr_port_type { ____Placeholder_hsr_port_type } hsr_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hsr_priv*) ;
 struct hsr_port* FUNC_3 (struct hsr_priv*,int) ;
 int FUNC_4 (struct net_device*,struct hsr_port*) ;
 int FUNC_5 (struct hsr_port*) ;
 struct hsr_port* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;

int FUNC_10(struct hsr_priv *VAR_4, struct net_device *VAR_5,
   enum hsr_port_type VAR_6)
{
 struct hsr_port *VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_6 != VAR_3) {
  VAR_9 = FUNC_1(VAR_5);
  if (VAR_9)
   return VAR_9;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 if (VAR_6 != VAR_3) {
  VAR_9 = FUNC_4(VAR_5, VAR_7);
  if (VAR_9)
   goto fail_dev_setup;
 }

 VAR_7->hsr = VAR_4;
 VAR_7->dev = VAR_5;
 VAR_7->type = VAR_6;

 FUNC_7(&VAR_7->port_list, &VAR_4->ports);
 FUNC_9();

 VAR_8 = FUNC_3(VAR_4, VAR_3);
 FUNC_8(VAR_8->dev);
 FUNC_0(VAR_8->dev, FUNC_2(VAR_4));

 return 0;

fail_dev_setup:
 FUNC_5(VAR_7);
 return VAR_9;
}
