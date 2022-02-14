
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_frame {int type; int pf; } ;
struct lapb_cb {int mode; int condition; int dev; int va; int vr; int vs; int n2count; void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct lapb_cb*,int ) ;
 int FUNC_2 (int,char*,int ,...) ;
 int FUNC_3 (struct lapb_cb*,int ,int ,int ) ;
 int FUNC_4 (struct lapb_cb*) ;
 int FUNC_5 (struct lapb_cb*) ;

__attribute__((used)) static void FUNC_6(struct lapb_cb *VAR_6, struct sk_buff *VAR_7,
    struct lapb_frame *VAR_8)
{
 switch (VAR_8->type) {
 case 129:
  FUNC_2(1, "(%p) S4 RX SABM(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_6->mode & VAR_1) {
   FUNC_2(1, "(%p) S4 TX DM(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_3(VAR_6, VAR_0, VAR_8->pf,
       VAR_3);
  } else {
   FUNC_2(1, "(%p) S4 TX UA(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_2(0, "(%p) S4 -> S3\n", VAR_6->dev);
   FUNC_3(VAR_6, VAR_5, VAR_8->pf,
       VAR_3);
   FUNC_4(VAR_6);
   FUNC_5(VAR_6);
   VAR_6->state = VAR_4;
   VAR_6->condition = 0x00;
   VAR_6->n2count = 0;
   VAR_6->vs = 0;
   VAR_6->vr = 0;
   VAR_6->va = 0;
   FUNC_1(VAR_6, VAR_2);
  }
  break;

 case 128:
  FUNC_2(1, "(%p) S4 RX SABME(%d)\n", VAR_6->dev, VAR_8->pf);
  if (VAR_6->mode & VAR_1) {
   FUNC_2(1, "(%p) S4 TX UA(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_2(0, "(%p) S4 -> S3\n", VAR_6->dev);
   FUNC_3(VAR_6, VAR_5, VAR_8->pf,
       VAR_3);
   FUNC_4(VAR_6);
   FUNC_5(VAR_6);
   VAR_6->state = VAR_4;
   VAR_6->condition = 0x00;
   VAR_6->n2count = 0;
   VAR_6->vs = 0;
   VAR_6->vr = 0;
   VAR_6->va = 0;
   FUNC_1(VAR_6, VAR_2);
  } else {
   FUNC_2(1, "(%p) S4 TX DM(%d)\n",
     VAR_6->dev, VAR_8->pf);
   FUNC_3(VAR_6, VAR_0, VAR_8->pf,
       VAR_3);
  }
  break;
 }

 FUNC_0(VAR_7);
}
