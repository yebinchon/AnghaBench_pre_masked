
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int is_hot; int is_active; int obj; } ;
typedef TYPE_1__ pdf_widget ;
typedef int fz_rect ;
struct TYPE_25__ {scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_26__ {int dialog; scalar_t__ down; TYPE_1__* active; TYPE_1__* hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;

 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,TYPE_1__*) ;
 int FUNC_14 (int ,TYPE_1__*) ;
 int FUNC_15 (int ,TYPE_1__*) ;
 int FUNC_16 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 (int ,int ) ;
 TYPE_1__* FUNC_20 (int ,int ) ;
 TYPE_1__* FUNC_21 (int ,TYPE_1__*) ;
 int FUNC_22 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,TYPE_1__*) ;
 int FUNC_25 () ;
 TYPE_1__* VAR_15 ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 scalar_t__ VAR_16 ;
 TYPE_4__ VAR_17 ;
 scalar_t__ FUNC_28 (TYPE_2__) ;
 int VAR_18 ;

void FUNC_29(fz_irect VAR_19)
{
 pdf_widget *VAR_20;
 fz_rect VAR_21;
 fz_irect VAR_22;

 if (!VAR_14)
  return;

 for (VAR_20 = FUNC_20(VAR_12, VAR_13); VAR_20; VAR_20 = FUNC_21(VAR_12, VAR_20))
 {
  VAR_21 = FUNC_18(VAR_12, VAR_20);
  VAR_21 = FUNC_1(VAR_21, VAR_18);
  VAR_22 = FUNC_0(VAR_21);

  if (FUNC_28(VAR_19) && FUNC_28(VAR_22))
  {
   if (!VAR_20->is_hot)
    FUNC_13(VAR_12, VAR_20);
   VAR_20->is_hot = 1;

   VAR_17.hot = VAR_20;
   if (!VAR_17.active && VAR_17.down)
   {
    VAR_17.active = VAR_20;
    FUNC_12(VAR_12, VAR_20);
    if (VAR_15 != VAR_20)
    {
     if (VAR_15 && FUNC_17(VAR_12, VAR_15) == VAR_7)
      FUNC_11(VAR_12, VAR_15);
     VAR_15 = VAR_20;
     FUNC_15(VAR_12, VAR_20);
    }
   }
  }
  else
  {
   if (VAR_20->is_hot)
    FUNC_14(VAR_12, VAR_20);
   VAR_20->is_hot = 0;
  }


  VAR_20->is_active = (VAR_17.active == VAR_20 && VAR_17.down);

  if (VAR_16)
  {
   FUNC_3(VAR_3, VAR_5);
   FUNC_6(VAR_0);
   FUNC_4(0, 0, 1, 0.1f);
   FUNC_9(VAR_22.x0, VAR_22.y0, VAR_22.x1, VAR_22.y1);
   FUNC_5(VAR_0);
  }

  if (VAR_17.active == VAR_20 || (!VAR_17.active && VAR_17.hot == VAR_20))
  {
   FUNC_8(1, 0xAAAA);
   FUNC_6(VAR_2);
   FUNC_3(VAR_4, VAR_6);
   FUNC_6(VAR_0);
   FUNC_4(1, 1, 1, 1);
   FUNC_2(VAR_1);
   FUNC_10(VAR_22.x0-0.5f, VAR_22.y0-0.5f);
   FUNC_10(VAR_22.x1+0.5f, VAR_22.y0-0.5f);
   FUNC_10(VAR_22.x1+0.5f, VAR_22.y1+0.5f);
   FUNC_10(VAR_22.x0-0.5f, VAR_22.y1+0.5f);
   FUNC_7();
   FUNC_5(VAR_0);
   FUNC_5(VAR_2);
  }

  if (VAR_17.hot == VAR_20 && VAR_17.active == VAR_20 && !VAR_17.down)
  {
   FUNC_16(VAR_12, VAR_20);

   if (FUNC_24(VAR_12, VAR_20) == VAR_9)
   {
    FUNC_26(VAR_20);
   }
   else
   {
    if (FUNC_19(VAR_12, VAR_20->obj) & VAR_8)
     continue;

    switch (FUNC_24(VAR_12, VAR_20))
    {
    default:
     break;
    case 132:
    case 129:
     FUNC_22(VAR_12, VAR_20);
     break;
    case 128:
     FUNC_27(VAR_20);
     break;
    case 131:
    case 130:
     VAR_17.dialog = VAR_10;
     VAR_11 = VAR_20;
     break;
    }
   }

  }
 }

 if (FUNC_23(VAR_12, VAR_13))
  FUNC_25();
}
