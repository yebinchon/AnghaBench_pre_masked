
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_47__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_45__ {int order_type; int text2; int ellipse2; int ellipse; int polyline; int polygon2; int polygon; int triblt; int memblt; int desksave; int rect; int line; int screenblt; int patblt; int destblt; TYPE_8__ bounds; } ;
struct TYPE_43__ {TYPE_3__ order_state; } ;
struct TYPE_46__ {scalar_t__ next_packet; TYPE_1__ orders; } ;
struct TYPE_44__ {scalar_t__ p; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDP_ORDER_STATE ;
typedef TYPE_4__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_11 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_16 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_17 (TYPE_2__*,int *,int,int) ;
 int FUNC_18 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (char*,int) ;

void
FUNC_22(RDPCLIENT * VAR_6, STREAM VAR_7, uint16 VAR_8)
{
 RDP_ORDER_STATE *VAR_9 = &VAR_6->orders.order_state;
 uint32 VAR_10;
 uint8 VAR_11;
 int VAR_12, VAR_13 = 0;
 BOOL VAR_14;

 while (VAR_13 < VAR_8)
 {
  FUNC_1(VAR_7, VAR_11);

  if (!(VAR_11 & VAR_5))
  {
   FUNC_0("order parsing failed\n");
   break;
  }

  if (VAR_11 & VAR_4)
  {
   FUNC_14(VAR_6, VAR_7);
  }
  else
  {
   if (VAR_11 & VAR_1)
   {
    FUNC_1(VAR_7, VAR_9->order_type);
   }

   switch (VAR_9->order_type)
   {
    case 128:
    case 129:
     VAR_12 = 3;
     break;

    case 135:
    case 136:
    case 137:
    case 133:
    case 138:
     VAR_12 = 2;
     break;

    default:
     VAR_12 = 1;
   }

   FUNC_17(VAR_7, &VAR_10, VAR_11, VAR_12);

   if (VAR_11 & VAR_0)
   {
    if (!(VAR_11 & VAR_3))
     FUNC_18(VAR_7, &VAR_9->bounds);

    FUNC_20(VAR_6, VAR_9->bounds.left,
         VAR_9->bounds.top,
         VAR_9->bounds.right -
         VAR_9->bounds.left + 1,
         VAR_9->bounds.bottom - VAR_9->bounds.top + 1);
   }

   VAR_14 = VAR_11 & VAR_2;

   switch (VAR_9->order_type)
   {
    case 140:
     FUNC_3(VAR_6, VAR_7, &VAR_9->destblt, VAR_10, VAR_14);
     break;

    case 135:
     FUNC_8(VAR_6, VAR_7, &VAR_9->patblt, VAR_10, VAR_14);
     break;

    case 130:
     FUNC_13(VAR_6, VAR_7, &VAR_9->screenblt, VAR_10, VAR_14);
     break;

    case 137:
     FUNC_6(VAR_6, VAR_7, &VAR_9->line, VAR_10, VAR_14);
     break;

    case 131:
     FUNC_12(VAR_6, VAR_7, &VAR_9->rect, VAR_10, VAR_14);
     break;

    case 141:
     FUNC_2(VAR_6, VAR_7, &VAR_9->desksave, VAR_10, VAR_14);
     break;

    case 136:
     FUNC_7(VAR_6, VAR_7, &VAR_9->memblt, VAR_10, VAR_14);
     break;

    case 128:
     FUNC_16(VAR_6, VAR_7, &VAR_9->triblt, VAR_10, VAR_14);
     break;

    case 134:
     FUNC_9(VAR_6, VAR_7, &VAR_9->polygon, VAR_10, VAR_14);
     break;

    case 133:
     FUNC_10(VAR_6, VAR_7, &VAR_9->polygon2, VAR_10, VAR_14);
     break;

    case 132:
     FUNC_11(VAR_6, VAR_7, &VAR_9->polyline, VAR_10, VAR_14);
     break;

    case 139:
     FUNC_4(VAR_6, VAR_7, &VAR_9->ellipse, VAR_10, VAR_14);
     break;

    case 138:
     FUNC_5(VAR_6, VAR_7, &VAR_9->ellipse2, VAR_10, VAR_14);
     break;

    case 129:
     FUNC_15(VAR_6, VAR_7, &VAR_9->text2, VAR_10, VAR_14);
     break;

    default:
     FUNC_21("order %d\n", VAR_9->order_type);
     return;
   }

   if (VAR_11 & VAR_0)
    FUNC_19(VAR_6);
  }

  VAR_13++;
 }






}
