
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_8__ {scalar_t__ xyThumbBottom; scalar_t__ xyThumbTop; int* rgstate; scalar_t__ dxyLineButton; TYPE_1__ rcScrollBar; } ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PSCROLLBARINFO ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_6(HWND VAR_14, HDC VAR_15, INT VAR_16, BOOL VAR_17,
   PSCROLLBARINFO VAR_18)
{
   INT VAR_19 = VAR_18->xyThumbBottom - VAR_18->xyThumbTop;
   INT VAR_20 = VAR_18->xyThumbTop;
   RECT VAR_21;
   HBRUSH VAR_22, VAR_23;
   BOOL VAR_24 = VAR_6, VAR_25 = VAR_6;

   if (VAR_18->rgstate[VAR_10] & VAR_11)
      VAR_24 = VAR_12;
   if (VAR_18->rgstate[VAR_9] & VAR_11)
      VAR_25 = VAR_12;






   if (VAR_16 == VAR_8)
   {
      VAR_23 = FUNC_2( VAR_14, VAR_15, VAR_13);
      if (!VAR_23)
         VAR_23 = FUNC_3(VAR_3);
   }
   else
   {
      VAR_23 = FUNC_0(VAR_15, VAR_4);
   }

   VAR_22 = FUNC_5(VAR_15, VAR_23);


   if (VAR_17)
   {
      VAR_21.top = VAR_18->rcScrollBar.top + VAR_18->dxyLineButton;
      VAR_21.bottom = VAR_18->rcScrollBar.bottom - VAR_18->dxyLineButton;
      VAR_21.left = VAR_18->rcScrollBar.left;
      VAR_21.right = VAR_18->rcScrollBar.right;
   }
   else
   {
      VAR_21.top = VAR_18->rcScrollBar.top;
      VAR_21.bottom = VAR_18->rcScrollBar.bottom;
      VAR_21.left = VAR_18->rcScrollBar.left + VAR_18->dxyLineButton;
      VAR_21.right = VAR_18->rcScrollBar.right - VAR_18->dxyLineButton;
   }


   if (!VAR_18->xyThumbBottom)
   {
      FUNC_4(VAR_15, VAR_21.left, VAR_21.top, VAR_21.right - VAR_21.left,
         VAR_21.bottom - VAR_21.top, VAR_7);


      FUNC_5(VAR_15, VAR_22);
      return;
   }

   VAR_20 -= VAR_18->dxyLineButton;

   if (VAR_18->dxyLineButton)
   {
      if (VAR_17)
      {
         if (VAR_19)
         {
            FUNC_4(VAR_15, VAR_21.left, VAR_21.top, VAR_21.right - VAR_21.left,
                   VAR_20, VAR_24 ? VAR_2 : VAR_7);
            VAR_21.top += VAR_20;
            FUNC_4(VAR_15, VAR_21.left, VAR_21.top + VAR_19, VAR_21.right - VAR_21.left,
               VAR_21.bottom - VAR_21.top - VAR_19, VAR_25 ? VAR_2 : VAR_7);
            VAR_21.bottom = VAR_21.top + VAR_19;
         }
         else
         {
            if (VAR_20)
            {
               FUNC_4(VAR_15, VAR_21.left, VAR_18->dxyLineButton,
                  VAR_21.right - VAR_21.left, VAR_21.bottom - VAR_21.top, VAR_7);
            }
         }
      }
      else
      {
         if (VAR_19)
         {
            FUNC_4(VAR_15, VAR_21.left, VAR_21.top, VAR_20,
               VAR_21.bottom - VAR_21.top, VAR_24 ? VAR_2 : VAR_7);
            VAR_21.left += VAR_20;
            FUNC_4(VAR_15, VAR_21.left + VAR_19, VAR_21.top,
               VAR_21.right - VAR_21.left - VAR_19, VAR_21.bottom - VAR_21.top,
               VAR_25 ? VAR_2 : VAR_7);
            VAR_21.right = VAR_21.left + VAR_19;
         }
         else
         {
            if (VAR_20)
            {
               FUNC_4(VAR_15, VAR_18->dxyLineButton, VAR_21.top,
                  VAR_21.right - VAR_21.left, VAR_21.bottom - VAR_21.top, VAR_7);
            }
         }
      }
   }


   if (VAR_19)
      FUNC_1(VAR_15, &VAR_21, VAR_5, VAR_1 | VAR_0);


   FUNC_5(VAR_15, VAR_22);
}
