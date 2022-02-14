
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int clrWindowText; } ;
struct TYPE_23__ {int todayrect; TYPE_1__* calendars; } ;
struct TYPE_22__ {int rcPaint; } ;
struct TYPE_21__ {int wdays; int title; } ;
typedef int RECT ;
typedef TYPE_2__ PAINTSTRUCT ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HFONT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 size_t FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__ const*,size_t) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__ const*) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_2__ const*) ;
 int FUNC_8 (TYPE_3__*,int ,TYPE_2__ const*,size_t) ;
 int FUNC_9 (TYPE_3__*,int ,TYPE_2__ const*) ;
 int FUNC_10 (TYPE_3__*,int ,TYPE_2__ const*,size_t) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int *,int *) ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void FUNC_15(MONTHCAL_INFO *VAR_4, HDC VAR_5, const PAINTSTRUCT *VAR_6)
{
  COLORREF VAR_7, VAR_8;
  HFONT VAR_9;
  INT VAR_10;

  VAR_7 = FUNC_13(VAR_5, VAR_3.clrWindowText);
  VAR_8 = FUNC_0(VAR_5);
  VAR_9 = FUNC_1(VAR_5, VAR_2);

  for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_4); VAR_10++)
  {
    RECT *VAR_11 = &VAR_4->calendars[VAR_10].title;
    RECT VAR_12;


    if (FUNC_2(&VAR_12, &(VAR_6->rcPaint), VAR_11))
        FUNC_8(VAR_4, VAR_5, VAR_6, VAR_10);


    FUNC_14(&VAR_12, &VAR_4->calendars[VAR_10].wdays, &VAR_4->todayrect);
    if (FUNC_2(&VAR_12, &(VAR_6->rcPaint), &VAR_12))
        FUNC_5(VAR_4, VAR_5, VAR_6, VAR_10);


    FUNC_10(VAR_4, VAR_5, VAR_6, VAR_10);
  }


  FUNC_7(VAR_4, VAR_5, VAR_6);


  FUNC_6(VAR_4, VAR_5, VAR_6);


  FUNC_9(VAR_4, VAR_5, VAR_6);


  FUNC_4(VAR_4, VAR_5, VAR_0);
  FUNC_4(VAR_4, VAR_5, VAR_1);


  FUNC_12(VAR_5, VAR_8);
  FUNC_11(VAR_5, VAR_9);
  FUNC_13(VAR_5, VAR_7);
}
