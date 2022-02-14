
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_frame {int type; int pf; } ;
struct lapb_cb {int mode; int condition; int state; int dev; int va; int vr; int vs; int n2count; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (struct lapb_cb*,int ) ;
 int FUNC_3 (int,char*,int ,...) ;
 int FUNC_4 (struct lapb_cb*,int ) ;
 int FUNC_5 (struct lapb_cb*,int,int ,int ) ;
 int FUNC_6 (struct lapb_cb*) ;
 int FUNC_7 (struct lapb_cb*) ;
 int FUNC_8 (struct lapb_cb*) ;

__attribute__((used)) static void FUNC_9(struct lapb_cb *VAR_6, struct sk_buff *VAR_7,
    struct lapb_frame *VAR_8)
{
 switch (VAR_8->type) {
 case 130:
  FUNC_3(1, "(%p) S1 RX SABM(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_6->mode & VAR_0) {
   FUNC_3(1, "(%p) S1 TX DM(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_5(VAR_6, 131, VAR_8->pf,
       VAR_3);
  } else {
   FUNC_3(1, "(%p) S1 TX UA(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_5(VAR_6, 128, VAR_8->pf,
       VAR_3);
  }
  break;

 case 129:
  FUNC_3(1, "(%p) S1 RX SABME(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_6->mode & VAR_0) {
   FUNC_3(1, "(%p) S1 TX UA(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_5(VAR_6, 128, VAR_8->pf,
       VAR_3);
  } else {
   FUNC_3(1, "(%p) S1 TX DM(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_5(VAR_6, 131, VAR_8->pf,
       VAR_3);
  }
  break;

 case 132:
  FUNC_3(1, "(%p) S1 RX DISC(%d)\n", VAR_6->dev, VAR_8->pf);
  FUNC_3(1, "(%p) S1 TX DM(%d)\n", VAR_6->dev, VAR_8->pf);
  FUNC_5(VAR_6, 131, VAR_8->pf, VAR_3);
  break;

 case 128:
  FUNC_3(1, "(%p) S1 RX UA(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_8->pf) {
   FUNC_3(0, "(%p) S1 -> S3\n", VAR_6->dev);
   FUNC_7(VAR_6);
   FUNC_8(VAR_6);
   VAR_6->state = VAR_5;
   VAR_6->condition = 0x00;
   VAR_6->n2count = 0;
   VAR_6->vs = 0;
   VAR_6->vr = 0;
   VAR_6->va = 0;
   FUNC_2(VAR_6, VAR_1);
  }
  break;

 case 131:
  FUNC_3(1, "(%p) S1 RX DM(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_8->pf) {
   FUNC_3(0, "(%p) S1 -> S0\n", VAR_6->dev);
   FUNC_1(VAR_6);
   VAR_6->state = VAR_4;
   FUNC_6(VAR_6);
   FUNC_8(VAR_6);
   FUNC_4(VAR_6, VAR_2);
  }
  break;
 }

 FUNC_0(VAR_7);
}
