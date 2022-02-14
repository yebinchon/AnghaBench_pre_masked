
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int cx; int cy; } ;
struct TYPE_7__ {int dwStyle; int width_increment; int * colors; int hBoldFont; int todaysDate; TYPE_1__ dim; } ;
typedef int RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int *,int) ;
 int FUNC_2 (int ,int ,int *,int *,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,char*,int ) ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_2__ const*,int ,int *) ;
 int FUNC_5 (TYPE_2__ const*,int *,int,int,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char const*,char*,char*) ;

__attribute__((used)) static void FUNC_10(const MONTHCAL_INFO *VAR_12, HDC VAR_13, const PAINTSTRUCT *VAR_14)
{
  static const WCHAR VAR_15[] = { '%','s',' ','%','s',0 };
  WCHAR VAR_16[30], VAR_17[20], VAR_18[80];
  RECT VAR_19, VAR_20;
  HFONT VAR_21;
  INT VAR_22;

  if(VAR_12->dwStyle & VAR_9) return;

  FUNC_3(VAR_0, VAR_6, VAR_16, FUNC_0(VAR_16));
  VAR_22 = VAR_12->dwStyle & VAR_10 ? 0 : 1;
  if (VAR_12->dwStyle & VAR_11) VAR_22--;

  FUNC_5(VAR_12, &VAR_19, VAR_22, 6, VAR_12->dim.cx * VAR_12->dim.cy - VAR_12->dim.cx);
  VAR_20 = VAR_19;

  FUNC_2(VAR_7, VAR_1, &VAR_12->todaysDate, ((void*)0), VAR_17, FUNC_0(VAR_17));
  VAR_21 = FUNC_7(VAR_13, VAR_12->hBoldFont);
  FUNC_8(VAR_13, VAR_12->colors[VAR_8]);

  FUNC_9(VAR_18, VAR_15, VAR_16, VAR_17);
  FUNC_1(VAR_13, VAR_18, -1, &VAR_19, VAR_2 | VAR_3 | VAR_5 | VAR_4);
  FUNC_1(VAR_13, VAR_18, -1, &VAR_19, VAR_3 | VAR_5 | VAR_4);

  if(!(VAR_12->dwStyle & VAR_10)) {
    FUNC_6(&VAR_20, -VAR_12->width_increment, 0);
    FUNC_4(VAR_12, VAR_13, &VAR_20);
  }

  FUNC_7(VAR_13, VAR_21);
}
