
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_17__ {int left; int right; } ;
struct TYPE_16__ {TYPE_1__* calendars; int hBoldFont; int * colors; int * brushes; } ;
struct TYPE_15__ {int right; int left; } ;
struct TYPE_14__ {int cx; } ;
struct TYPE_13__ {scalar_t__ wMonth; scalar_t__ wYear; } ;
struct TYPE_12__ {TYPE_6__ titlemonth; TYPE_6__ titleyear; TYPE_2__ month; TYPE_4__ title; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__ RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_5__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HDC ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,TYPE_4__*,int) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_2__ const*,int *,char*,int ) ;
 int FUNC_4 (int ,scalar_t__,char*,int ) ;
 int FUNC_5 (int ,char*,int,TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_6 (TYPE_6__*,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_14(MONTHCAL_INFO *VAR_11, HDC VAR_12, const PAINTSTRUCT *VAR_13, INT VAR_14)
{
  static const WCHAR VAR_15[] = {'M','M','M','M',0};
  static const WCHAR VAR_16[] = {'M','M','M',0};
  static const WCHAR VAR_17[] = {'M','M',0};
  static const WCHAR VAR_18[] = {'%','l','d',0};
  static const WCHAR VAR_19[] = {'%','0','2','d',0};
  static const WCHAR VAR_20[] = {'%','d',0};
  RECT *VAR_21 = &VAR_11->calendars[VAR_14].title;
  const SYSTEMTIME *VAR_22 = &VAR_11->calendars[VAR_14].month;
  WCHAR VAR_23[80], VAR_24[80], VAR_25[80], VAR_26[6] ;
  int VAR_27, VAR_28, VAR_29;
  SIZE VAR_30;


  FUNC_2(VAR_12, VAR_21, VAR_11->brushes[VAR_0]);


  FUNC_8(VAR_12, VAR_11->colors[VAR_9]);
  FUNC_9(VAR_12, VAR_11->colors[VAR_10]);
  FUNC_7(VAR_12, VAR_11->hBoldFont);


  FUNC_3(VAR_8, VAR_1, VAR_22, ((void*)0), VAR_24, FUNC_0(VAR_24));
  FUNC_1(VAR_12, VAR_24, FUNC_10(VAR_24), VAR_21, VAR_2 | VAR_4 | VAR_3);

  FUNC_4(VAR_8, VAR_7, VAR_25, FUNC_0(VAR_25));
  FUNC_13(VAR_26, VAR_18, VAR_22->wYear);



  if (FUNC_12(VAR_25, VAR_15))
    FUNC_4(VAR_8, VAR_6+VAR_22->wMonth-1, VAR_23, FUNC_0(VAR_23));
  else if (FUNC_12(VAR_25, VAR_16))
    FUNC_4(VAR_8, VAR_5+VAR_22->wMonth-1, VAR_23, FUNC_0(VAR_23));
  else if (FUNC_12(VAR_25, VAR_17))
    FUNC_13(VAR_23, VAR_19, VAR_22->wMonth);
  else
    FUNC_13(VAR_23, VAR_20, VAR_22->wMonth);


  VAR_27 = 0;
  while (VAR_24[VAR_27])
  {
    if (!FUNC_11(&VAR_24[VAR_27], VAR_26, FUNC_10(VAR_26)))
        break;
    VAR_27++;
  }

  VAR_28 = 0;
  while (VAR_24[VAR_28])
  {
    if (!FUNC_11(&VAR_24[VAR_28], VAR_23, FUNC_10(VAR_23)))
        break;
    VAR_28++;
  }


  VAR_30.cx = 0;
  if (VAR_27)
    FUNC_5(VAR_12, VAR_24, VAR_27, &VAR_30);
  VAR_11->calendars[VAR_14].titleyear.left = VAR_30.cx;

  VAR_30.cx = 0;
  if (VAR_28)
    FUNC_5(VAR_12, VAR_24, VAR_28, &VAR_30);
  VAR_11->calendars[VAR_14].titlemonth.left = VAR_30.cx;


  FUNC_5(VAR_12, &VAR_24[VAR_27], FUNC_10(VAR_26), &VAR_30);
  VAR_11->calendars[VAR_14].titleyear.right = VAR_11->calendars[VAR_14].titleyear.left + VAR_30.cx;

  FUNC_5(VAR_12, VAR_23, FUNC_10(VAR_23), &VAR_30);
  VAR_11->calendars[VAR_14].titlemonth.right = VAR_11->calendars[VAR_14].titlemonth.left + VAR_30.cx;



  FUNC_5(VAR_12, VAR_24, FUNC_10(VAR_24), &VAR_30);
  VAR_29 = (VAR_21->right - VAR_21->left - VAR_30.cx) / 2 + VAR_21->left;
  FUNC_6(&VAR_11->calendars[VAR_14].titleyear, VAR_29, 0);
  FUNC_6(&VAR_11->calendars[VAR_14].titlemonth, VAR_29, 0);
}
