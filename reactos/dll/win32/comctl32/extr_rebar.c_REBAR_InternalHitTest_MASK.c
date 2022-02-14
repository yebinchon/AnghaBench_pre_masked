
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int rcChevron; int rcChild; int rcCapText; int rcCapImage; int rcGripper; int rcBand; } ;
struct TYPE_8__ {scalar_t__ uNumBands; int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int POINT ;
typedef int INT ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_3 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__ const*,int *,int *) ;

__attribute__((used)) static void
FUNC_6 (const REBAR_INFO *VAR_5, const POINT *VAR_6, UINT *VAR_7, INT *VAR_8)
{
    REBAR_BAND *VAR_9;
    RECT VAR_10;
    UINT VAR_11;

    FUNC_0 (VAR_5->hwndSelf, &VAR_10);

    *VAR_7 = VAR_4;
    if (FUNC_2 (&VAR_10, *VAR_6))
    {
 if (VAR_5->uNumBands == 0) {
     *VAR_7 = VAR_4;
     if (VAR_8)
  *VAR_8 = -1;
     FUNC_4("NOWHERE\n");
     return;
 }
 else {

     for (VAR_11 = 0; VAR_11 < VAR_5->uNumBands; VAR_11++) {
                RECT VAR_12;
  VAR_9 = FUNC_3(VAR_5, VAR_11);
                FUNC_5(VAR_5, &VAR_12, &VAR_9->rcBand);
                if (FUNC_1(VAR_9)) continue;
  if (FUNC_2 (&VAR_12, *VAR_6)) {
      if (VAR_8)
   *VAR_8 = VAR_11;
      if (FUNC_2 (&VAR_9->rcGripper, *VAR_6)) {
   *VAR_7 = VAR_3;
   FUNC_4("ON GRABBER %d\n", VAR_11);
   return;
      }
      else if (FUNC_2 (&VAR_9->rcCapImage, *VAR_6)) {
   *VAR_7 = VAR_0;
   FUNC_4("ON CAPTION %d\n", VAR_11);
   return;
      }
      else if (FUNC_2 (&VAR_9->rcCapText, *VAR_6)) {
   *VAR_7 = VAR_0;
   FUNC_4("ON CAPTION %d\n", VAR_11);
   return;
      }
      else if (FUNC_2 (&VAR_9->rcChild, *VAR_6)) {
   *VAR_7 = VAR_2;
   FUNC_4("ON CLIENT %d\n", VAR_11);
   return;
      }
      else if (FUNC_2 (&VAR_9->rcChevron, *VAR_6)) {
   *VAR_7 = VAR_1;
   FUNC_4("ON CHEVRON %d\n", VAR_11);
   return;
      }
      else {
   *VAR_7 = VAR_4;
   FUNC_4("NOWHERE %d\n", VAR_11);
   return;
      }
  }
     }

     *VAR_7 = VAR_4;
     if (VAR_8)
  *VAR_8 = -1;

     FUNC_4("NOWHERE\n");
     return;
 }
    }
    else {
 *VAR_7 = VAR_4;
 if (VAR_8)
     *VAR_8 = -1;
 FUNC_4("NOWHERE\n");
 return;
    }
}
