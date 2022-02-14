
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int y; int x; } ;
struct TYPE_9__ {int dwFlags; } ;
struct TYPE_11__ {TYPE_1__ ppshheader; scalar_t__ hasHelp; scalar_t__ hasFinish; } ;
struct TYPE_10__ {int right; int bottom; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ PropSheetInfo ;
typedef TYPE_4__ PADDING_INFO ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ FUNC_2 (int ,TYPE_3__ const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int ,int,int,int,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_15 ;

__attribute__((used)) static BOOL FUNC_5(HWND VAR_16,
                                          const PropSheetInfo* VAR_17)
{
  HWND VAR_18 = FUNC_1(VAR_16, VAR_0);
  HWND VAR_19 = FUNC_1(VAR_16, VAR_4);
  HWND VAR_20 = FUNC_1(VAR_16, VAR_5);
  RECT VAR_21;
  int VAR_22, VAR_23;
  int VAR_24 = 3;
  int VAR_25, VAR_26, VAR_27, VAR_28;
  PADDING_INFO VAR_29 = FUNC_2(VAR_16, VAR_17);

  if (VAR_17->hasHelp)
    VAR_24++;
  if (VAR_17->hasFinish)
    VAR_24++;




  FUNC_0(VAR_18, &VAR_21);
  VAR_25 = VAR_21.right;
  VAR_26 = VAR_21.bottom;

  FUNC_0(VAR_19, &VAR_21);
  VAR_27 = VAR_21.bottom;




  FUNC_0(VAR_16, &VAR_21);




  VAR_23 = VAR_21.bottom - (VAR_29.y + VAR_26);




  VAR_18 = FUNC_1(VAR_16, VAR_1);

  VAR_22 = VAR_21.right - ((VAR_29.x + VAR_25) * (VAR_24 - 1)) - VAR_25;

  FUNC_3(VAR_18, 0, VAR_22, VAR_23, 0, 0,
               VAR_12 | VAR_13 | VAR_10);




  VAR_18 = FUNC_1(VAR_16, VAR_3);

  VAR_22 += VAR_25;

  FUNC_3(VAR_18, 0, VAR_22, VAR_23, 0, 0,
               VAR_12 | VAR_13 | VAR_10);




  VAR_18 = FUNC_1(VAR_16, VAR_2);

  if (VAR_17->hasFinish)
    VAR_22 += VAR_29.x + VAR_25;

  FUNC_3(VAR_18, 0, VAR_22, VAR_23, 0, 0,
               VAR_12 | VAR_13 | VAR_10);

  if (!VAR_17->hasFinish)
    FUNC_4(VAR_18, VAR_14);




  VAR_18 = FUNC_1(VAR_16, VAR_0);

  VAR_22 += VAR_29.x + VAR_25;

  FUNC_3(VAR_18, 0, VAR_22, VAR_23, 0, 0,
               VAR_12 | VAR_13 | VAR_10);




  VAR_18 = FUNC_1(VAR_16, VAR_6);

  if (VAR_17->hasHelp)
  {
    VAR_22 += VAR_29.x + VAR_25;

    FUNC_3(VAR_18, 0, VAR_22, VAR_23, 0, 0,
                 VAR_12 | VAR_13 | VAR_10);
  }
  else
    FUNC_4(VAR_18, VAR_14);

  if (VAR_17->ppshheader.dwFlags &
      (VAR_8 | VAR_7 | VAR_9))
      VAR_29.x = 0;




  VAR_22 = VAR_29.x;
  VAR_23 = VAR_21.bottom - ((VAR_29.y * 2) + VAR_26 + VAR_27);

  VAR_28 = VAR_21.right - (VAR_29.x * 2);
  FUNC_3(VAR_19, 0, VAR_22, VAR_23, VAR_28, 2,
               VAR_13 | VAR_10);





  FUNC_3(VAR_20, 0, 0, 0, VAR_21.right, 2,
        VAR_13 | VAR_11 | VAR_10);
  if (!(VAR_17->ppshheader.dwFlags & (VAR_8 | VAR_7)))
      FUNC_4(VAR_20, VAR_14);

  return VAR_15;
}
