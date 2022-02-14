
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {scalar_t__ hasHelp; scalar_t__ hasApply; } ;
struct TYPE_7__ {int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PropSheetInfo ;
typedef TYPE_3__ PADDING_INFO ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int,int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static BOOL FUNC_7(HWND VAR_11, const PropSheetInfo* VAR_12)
{
  HWND VAR_13 = FUNC_2(VAR_11, VAR_5);
  RECT VAR_14;
  int VAR_15, VAR_16;
  int VAR_17 = 2;
  int VAR_18, VAR_19;
  PADDING_INFO VAR_20 = FUNC_3(VAR_11);

  if (VAR_12->hasApply)
    VAR_17++;

  if (VAR_12->hasHelp)
    VAR_17++;




  FUNC_1(VAR_13, &VAR_14);
  VAR_18 = VAR_14.right;
  VAR_19 = VAR_14.bottom;




  FUNC_1(VAR_11, &VAR_14);




  VAR_16 = VAR_14.bottom - (VAR_20.y + VAR_19);




  VAR_13 = FUNC_2(VAR_11, VAR_5);

  VAR_15 = VAR_14.right - ((VAR_20.x + VAR_18) * VAR_17);

  FUNC_5(VAR_13, 0, VAR_15, VAR_16, 0, 0,
               VAR_7 | VAR_8 | VAR_6);

  FUNC_4(VAR_11, VAR_0, VAR_5, 0);





  VAR_13 = FUNC_2(VAR_11, VAR_2);

  VAR_15 += VAR_20.x + VAR_18;

  FUNC_5(VAR_13, 0, VAR_15, VAR_16, 0, 0,
               VAR_7 | VAR_8 | VAR_6);




  VAR_13 = FUNC_2(VAR_11, VAR_3);

  if(VAR_12->hasApply)
    VAR_15 += VAR_20.x + VAR_18;
  else
    FUNC_6(VAR_13, VAR_9);

  FUNC_5(VAR_13, 0, VAR_15, VAR_16, 0, 0,
              VAR_7 | VAR_8 | VAR_6);
  FUNC_0(VAR_13, VAR_1);




  VAR_13 = FUNC_2(VAR_11, VAR_4);

  VAR_15 += VAR_20.x + VAR_18;
  FUNC_5(VAR_13, 0, VAR_15, VAR_16, 0, 0,
              VAR_7 | VAR_8 | VAR_6);

  if(!VAR_12->hasHelp)
    FUNC_6(VAR_13, VAR_9);

  return VAR_10;
}
