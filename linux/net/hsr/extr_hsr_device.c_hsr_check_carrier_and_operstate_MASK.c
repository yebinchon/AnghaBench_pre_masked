
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsr_priv {int dummy; } ;
struct hsr_port {TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned char operstate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (struct hsr_port*) ;
 struct hsr_port* FUNC_2 (struct hsr_priv*,int ) ;
 int FUNC_3 (struct hsr_port*,int) ;

void FUNC_4(struct hsr_priv *VAR_1)
{
 struct hsr_port *VAR_2;
 unsigned char VAR_3;
 bool VAR_4;

 VAR_2 = FUNC_2(VAR_1, VAR_0);



 VAR_3 = VAR_2->dev->operstate;
 VAR_4 = FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_4);
 FUNC_0(VAR_2->dev, VAR_3);
}
