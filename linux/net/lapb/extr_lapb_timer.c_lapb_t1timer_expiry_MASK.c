
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lapb_cb {int state; int mode; int n2count; int dev; int n2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int VAR_10 ;
 struct lapb_cb* FUNC_0 (int ,struct timer_list*,int ) ;
 struct lapb_cb* VAR_11 ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (struct lapb_cb*,int ) ;
 int FUNC_4 (struct lapb_cb*,int ) ;
 int FUNC_5 (struct lapb_cb*) ;
 int FUNC_6 (struct lapb_cb*) ;
 int FUNC_7 (struct lapb_cb*,int ,int ,int ) ;
 int FUNC_8 (struct lapb_cb*) ;
 int FUNC_9 (struct lapb_cb*) ;
 int FUNC_10 (struct lapb_cb*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_13)
{
 struct lapb_cb *VAR_14 = FUNC_0(VAR_14, VAR_13, VAR_12);

 switch (VAR_14->state) {




  case 132:
   if (VAR_14->mode & VAR_1)
    FUNC_7(VAR_14, VAR_3, VAR_5, VAR_7);
   break;




  case 131:
   if (VAR_14->n2count == VAR_14->n2) {
    FUNC_1(VAR_14);
    VAR_14->state = 132;
    FUNC_4(VAR_14, VAR_10);
    FUNC_2(0, "(%p) S1 -> S0\n", VAR_14->dev);
    return;
   } else {
    VAR_14->n2count++;
    if (VAR_14->mode & VAR_4) {
     FUNC_2(1, "(%p) S1 TX SABME(1)\n",
       VAR_14->dev);
     FUNC_7(VAR_14, VAR_9, VAR_6, VAR_0);
    } else {
     FUNC_2(1, "(%p) S1 TX SABM(1)\n",
       VAR_14->dev);
     FUNC_7(VAR_14, VAR_8, VAR_6, VAR_0);
    }
   }
   break;




  case 130:
   if (VAR_14->n2count == VAR_14->n2) {
    FUNC_1(VAR_14);
    VAR_14->state = 132;
    FUNC_3(VAR_14, VAR_10);
    FUNC_2(0, "(%p) S2 -> S0\n", VAR_14->dev);
    return;
   } else {
    VAR_14->n2count++;
    FUNC_2(1, "(%p) S2 TX DISC(1)\n", VAR_14->dev);
    FUNC_7(VAR_14, VAR_2, VAR_6, VAR_0);
   }
   break;




  case 129:
   if (VAR_14->n2count == VAR_14->n2) {
    FUNC_1(VAR_14);
    VAR_14->state = 132;
    FUNC_9(VAR_14);
    FUNC_4(VAR_14, VAR_10);
    FUNC_2(0, "(%p) S3 -> S0\n", VAR_14->dev);
    return;
   } else {
    VAR_14->n2count++;
    FUNC_6(VAR_14);
    FUNC_5(VAR_14);
   }
   break;




  case 128:
   if (VAR_14->n2count == VAR_14->n2) {
    FUNC_1(VAR_14);
    VAR_14->state = 132;
    FUNC_4(VAR_14, VAR_10);
    FUNC_2(0, "(%p) S4 -> S0\n", VAR_14->dev);
    return;
   } else {
    VAR_14->n2count++;
    FUNC_10(VAR_14);
   }
   break;
 }

 FUNC_8(VAR_14);
}
