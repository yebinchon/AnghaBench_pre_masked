
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {int condition; int mode; int state; int dev; scalar_t__ n2count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct lapb_cb*,int ,int ,int ) ;
 int FUNC_2 (struct lapb_cb*) ;
 int FUNC_3 (struct lapb_cb*) ;

void FUNC_4(struct lapb_cb *VAR_5)
{
 VAR_5->condition = 0x00;
 VAR_5->n2count = 0;

 if (VAR_5->mode & VAR_1) {
  FUNC_0(1, "(%p) S%d TX SABME(1)\n", VAR_5->dev, VAR_5->state);
  FUNC_1(VAR_5, VAR_4, VAR_2, VAR_0);
 } else {
  FUNC_0(1, "(%p) S%d TX SABM(1)\n", VAR_5->dev, VAR_5->state);
  FUNC_1(VAR_5, VAR_3, VAR_2, VAR_0);
 }

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
}
