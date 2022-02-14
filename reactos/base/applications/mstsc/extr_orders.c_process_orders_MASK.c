
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_26__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_25__ {int order_type; int text2; int ellipse2; int ellipse; int polyline; int polygon2; int polygon; int triblt; int memblt; int desksave; int rect; int line; int screenblt; int patblt; int destblt; TYPE_4__ bounds; } ;
struct TYPE_24__ {scalar_t__ p; } ;
typedef TYPE_1__* STREAM ;
typedef int RD_BOOL ;
typedef TYPE_2__ RDP_ORDER_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int) ;
 int FUNC_8 (TYPE_1__*,int *,int ,int) ;
 int FUNC_9 (TYPE_1__*,int *,int ,int) ;
 int FUNC_10 (TYPE_1__*,int *,int ,int) ;
 int FUNC_11 (TYPE_1__*,int *,int ,int) ;
 int FUNC_12 (TYPE_1__*,int *,int ,int) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int *,int ,int) ;
 int FUNC_16 (TYPE_1__*,int *,int ,int) ;
 int FUNC_17 (TYPE_1__*,int *,int,int) ;
 int FUNC_18 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_19 () ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (char*,int) ;

void
FUNC_22(STREAM VAR_8, uint16 VAR_9)
{
 RDP_ORDER_STATE *VAR_10 = &VAR_7;
 uint32 VAR_11;
 uint8 VAR_12;
 int VAR_13, VAR_14 = 0;
 RD_BOOL VAR_15;

 while (VAR_14 < VAR_9)
 {
  FUNC_1(VAR_8, VAR_12);

  if (!(VAR_12 & VAR_5))
  {
   FUNC_0("order parsing failed\n");
   break;
  }

  if (VAR_12 & VAR_4)
  {
   FUNC_14(VAR_8);
  }
  else
  {
   if (VAR_12 & VAR_1)
   {
    FUNC_1(VAR_8, VAR_10->order_type);
   }

   switch (VAR_10->order_type)
   {
    case 128:
    case 129:
     VAR_13 = 3;
     break;

    case 135:
    case 136:
    case 137:
    case 133:
    case 138:
     VAR_13 = 2;
     break;

    default:
     VAR_13 = 1;
   }

   FUNC_17(VAR_8, &VAR_11, VAR_12, VAR_13);

   if (VAR_12 & VAR_0)
   {
    if (!(VAR_12 & VAR_3))
     FUNC_18(VAR_8, &VAR_10->bounds);

    FUNC_20(VAR_10->bounds.left,
         VAR_10->bounds.top,
         VAR_10->bounds.right -
         VAR_10->bounds.left + 1,
         VAR_10->bounds.bottom - VAR_10->bounds.top + 1);
   }

   VAR_15 = VAR_12 & VAR_2;

   switch (VAR_10->order_type)
   {
    case 140:
     FUNC_3(VAR_8, &VAR_10->destblt, VAR_11, VAR_15);
     break;

    case 135:
     FUNC_8(VAR_8, &VAR_10->patblt, VAR_11, VAR_15);
     break;

    case 130:
     FUNC_13(VAR_8, &VAR_10->screenblt, VAR_11, VAR_15);
     break;

    case 137:
     FUNC_6(VAR_8, &VAR_10->line, VAR_11, VAR_15);
     break;

    case 131:
     FUNC_12(VAR_8, &VAR_10->rect, VAR_11, VAR_15);
     break;

    case 141:
     FUNC_2(VAR_8, &VAR_10->desksave, VAR_11, VAR_15);
     break;

    case 136:
     FUNC_7(VAR_8, &VAR_10->memblt, VAR_11, VAR_15);
     break;

    case 128:
     FUNC_16(VAR_8, &VAR_10->triblt, VAR_11, VAR_15);
     break;

    case 134:
     FUNC_9(VAR_8, &VAR_10->polygon, VAR_11, VAR_15);
     break;

    case 133:
     FUNC_10(VAR_8, &VAR_10->polygon2, VAR_11, VAR_15);
     break;

    case 132:
     FUNC_11(VAR_8, &VAR_10->polyline, VAR_11, VAR_15);
     break;

    case 139:
     FUNC_4(VAR_8, &VAR_10->ellipse, VAR_11, VAR_15);
     break;

    case 138:
     FUNC_5(VAR_8, &VAR_10->ellipse2, VAR_11, VAR_15);
     break;

    case 129:
     FUNC_15(VAR_8, &VAR_10->text2, VAR_11, VAR_15);
     break;

    default:
     FUNC_21("order %d\n", VAR_10->order_type);
     return;
   }

   if (VAR_12 & VAR_0)
    FUNC_19();
  }

  VAR_14++;
 }






}
