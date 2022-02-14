
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsr_priv {int dummy; } ;
struct hsr_port {int dev; int port_list; struct hsr_priv* hsr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct hsr_priv*) ;
 struct hsr_port* FUNC_4 (struct hsr_priv*,int ) ;
 int FUNC_5 (struct hsr_port*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

void FUNC_10(struct hsr_port *VAR_1)
{
 struct hsr_priv *VAR_2;
 struct hsr_port *VAR_3;

 VAR_2 = VAR_1->hsr;
 VAR_3 = FUNC_4(VAR_2, VAR_0);
 FUNC_6(&VAR_1->port_list);

 if (VAR_1 != VAR_3) {
  if (VAR_3) {
   FUNC_8(VAR_3->dev);
   FUNC_1(VAR_3->dev, FUNC_3(VAR_2));
  }
  FUNC_7(VAR_1->dev);
  FUNC_2(VAR_1->dev, -1);
 }





 FUNC_9();

 if (VAR_1 != VAR_3)
  FUNC_0(VAR_1->dev);
 FUNC_5(VAR_1);
}
