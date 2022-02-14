
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct panda_inf_priv {int netdev; } ;
struct panda_dev_priv {struct panda_inf_priv** interfaces; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct panda_dev_priv*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct panda_inf_priv*) ;
 int FUNC_4 (int ) ;
 struct panda_dev_priv* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
  struct panda_dev_priv *VAR_2 = FUNC_5(VAR_1);
  struct panda_inf_priv *VAR_3;
  int VAR_4;

  FUNC_6(VAR_1, ((void*)0));

  for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++){
    VAR_3 = VAR_2->interfaces[VAR_4];
    if(VAR_3){
      FUNC_2(VAR_3->netdev, "device disconnected\n");
      FUNC_4(VAR_3->netdev);
      FUNC_0(VAR_3->netdev);
    }else
      break;
  }

  FUNC_3(VAR_3);
  FUNC_1(VAR_2);
}
