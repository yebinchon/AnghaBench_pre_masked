
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_frame {int type; int pf; } ;
struct lapb_cb {int dev; void* state; } ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 void* VAR_3 ;

 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (struct lapb_cb*,int ) ;
 int FUNC_3 (struct lapb_cb*,int const,int ,int ) ;
 int FUNC_4 (struct lapb_cb*) ;
 int FUNC_5 (struct lapb_cb*) ;

__attribute__((used)) static void FUNC_6(struct lapb_cb *VAR_4, struct sk_buff *VAR_5,
    struct lapb_frame *VAR_6)
{
 switch (VAR_6->type) {
 case 130:
 case 129:
  FUNC_1(1, "(%p) S2 RX {SABM,SABME}(%d)\n",
    VAR_4->dev, VAR_6->pf);
  FUNC_1(1, "(%p) S2 TX DM(%d)\n", VAR_4->dev, VAR_6->pf);
  FUNC_3(VAR_4, 135, VAR_6->pf, VAR_2);
  break;

 case 136:
  FUNC_1(1, "(%p) S2 RX DISC(%d)\n", VAR_4->dev, VAR_6->pf);
  FUNC_1(1, "(%p) S2 TX UA(%d)\n", VAR_4->dev, VAR_6->pf);
  FUNC_3(VAR_4, 128, VAR_6->pf, VAR_2);
  break;

 case 128:
  FUNC_1(1, "(%p) S2 RX UA(%d)\n", VAR_4->dev, VAR_6->pf);
  if (VAR_6->pf) {
   FUNC_1(0, "(%p) S2 -> S0\n", VAR_4->dev);
   VAR_4->state = VAR_3;
   FUNC_4(VAR_4);
   FUNC_5(VAR_4);
   FUNC_2(VAR_4, VAR_1);
  }
  break;

 case 135:
  FUNC_1(1, "(%p) S2 RX DM(%d)\n", VAR_4->dev, VAR_6->pf);
  if (VAR_6->pf) {
   FUNC_1(0, "(%p) S2 -> S0\n", VAR_4->dev);
   VAR_4->state = VAR_3;
   FUNC_4(VAR_4);
   FUNC_5(VAR_4);
   FUNC_2(VAR_4, VAR_0);
  }
  break;

 case 134:
 case 133:
 case 132:
 case 131:
  FUNC_1(1, "(%p) S2 RX {I,REJ,RNR,RR}(%d)\n",
         VAR_4->dev, VAR_6->pf);
  FUNC_1(1, "(%p) S2 RX DM(%d)\n", VAR_4->dev, VAR_6->pf);
  if (VAR_6->pf)
   FUNC_3(VAR_4, 135, VAR_6->pf,
       VAR_2);
  break;
 }

 FUNC_0(VAR_5);
}
