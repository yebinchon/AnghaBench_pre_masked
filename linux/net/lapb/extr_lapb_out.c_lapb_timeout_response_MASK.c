
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {int condition; int vr; int state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (struct lapb_cb*,int ,int ,int ) ;

void FUNC_2(struct lapb_cb *VAR_4)
{
 FUNC_0(1, "(%p) S%d TX RR(0) R%d\n",
   VAR_4->dev, VAR_4->state, VAR_4->vr);
 FUNC_1(VAR_4, VAR_3, VAR_1, VAR_2);

 VAR_4->condition &= ~VAR_0;
}
