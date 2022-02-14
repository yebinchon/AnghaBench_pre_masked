
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WORD ;
typedef int WNDPROC ;
typedef int UINT ;
struct TYPE_12__ {int hwndOwner; int lpfnHook; int rgbResult; int * lpCustColors; } ;
struct TYPE_11__ {int h; int s; int l; int nextuserdef; int hwndSelf; TYPE_8__* lpcc; int fullsize; int updating; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HDC ;
typedef int COLORREF ;
typedef TYPE_1__ CCPRIV ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 void* FUNC_9 (char,int ) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_11 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_12 (int ,int) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int const) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int VAR_3 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


__attribute__((used)) static LRESULT FUNC_26(CCPRIV *VAR_7, WPARAM VAR_8, LPARAM VAR_9, WORD VAR_10, HWND VAR_11)
{
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    UINT VAR_17;
    HDC VAR_18;
    COLORREF *VAR_19;

    FUNC_25("CC_WMCommand wParam=%lx lParam=%lx\n", VAR_8, VAR_9);
    switch (FUNC_19(VAR_8))
    {
        case 132:
        case 135:
        case 136:
        if (VAR_10 == VAR_1 && !VAR_7->updating)
    {
      VAR_15 = FUNC_0(VAR_11, 255);
      VAR_12 = FUNC_18(VAR_7->lpcc->rgbResult);
      VAR_13 = FUNC_16(VAR_7->lpcc->rgbResult);
      VAR_14= FUNC_13(VAR_7->lpcc->rgbResult);
      VAR_16 = 0;
      switch (FUNC_19(VAR_8))
      {
       case 132: if ((VAR_16 = (VAR_15 != VAR_12))) VAR_12 = VAR_15; break;
       case 135: if ((VAR_16 = (VAR_15 != VAR_13))) VAR_13 = VAR_15; break;
       case 136: if ((VAR_16 = (VAR_15 != VAR_14))) VAR_14 = VAR_15; break;
      }
      if (VAR_16)
      {
       VAR_7->lpcc->rgbResult = FUNC_20(VAR_12, VAR_13, VAR_14);
       FUNC_6(VAR_7);
       VAR_7->h = FUNC_9('H', VAR_7->lpcc->rgbResult);
       VAR_7->s = FUNC_9('S', VAR_7->lpcc->rgbResult);
       VAR_7->l = FUNC_9('L', VAR_7->lpcc->rgbResult);
       FUNC_1(VAR_7);
       FUNC_5(VAR_7);
       FUNC_7(VAR_7);
      }
    }
   break;

        case 134:
        case 131:
        case 133:
        if (VAR_10 == VAR_1 && !VAR_7->updating)
    {
      VAR_15 = FUNC_0(VAR_11 , FUNC_19(VAR_8) == 134 ? 239 : 240);
      VAR_16 = 0;
      switch (FUNC_19(VAR_8))
      {
       case 134: if ((VAR_16 = ( VAR_15 != VAR_7->h))) VAR_7->h = VAR_15; break;
       case 131: if ((VAR_16 = ( VAR_15 != VAR_7->s))) VAR_7->s = VAR_15; break;
       case 133: if ((VAR_16 = ( VAR_15 != VAR_7->l))) VAR_7->l = VAR_15; break;
      }
      if (VAR_16)
      {
       VAR_7->lpcc->rgbResult = FUNC_3(VAR_7->h, VAR_7->s, VAR_7->l);
       FUNC_6(VAR_7);
       FUNC_2(VAR_7);
       FUNC_5(VAR_7);
       FUNC_7(VAR_7);
      }
    }
        break;

        case 137:
               FUNC_10(VAR_7, &VAR_7->fullsize);
        FUNC_24( FUNC_15(VAR_7->hwndSelf, 134));
        break;

        case 138:
               VAR_19 = VAR_7->lpcc->lpCustColors;
               VAR_19[(VAR_7->nextuserdef % 2) * 8 + VAR_7->nextuserdef / 2] = VAR_7->lpcc->rgbResult;
               if (++VAR_7->nextuserdef == 16)
     VAR_7->nextuserdef = 0;
        FUNC_8(VAR_7, 2, 8);
        break;

        case 130:
        VAR_18 = FUNC_14(VAR_7->hwndSelf);
        VAR_7->lpcc->rgbResult = FUNC_17(VAR_18, VAR_7->lpcc->rgbResult);
        FUNC_22(VAR_7->hwndSelf, VAR_18);
        FUNC_2(VAR_7);
        FUNC_6(VAR_7);
        VAR_7->h = FUNC_9('H', VAR_7->lpcc->rgbResult);
        VAR_7->s = FUNC_9('S', VAR_7->lpcc->rgbResult);
        VAR_7->l = FUNC_9('L', VAR_7->lpcc->rgbResult);
        FUNC_1(VAR_7);
        FUNC_5(VAR_7);
        FUNC_7(VAR_7);
        break;

   case 128:
        VAR_15 = FUNC_21(VAR_3);
                   if (VAR_7->lpcc->hwndOwner)
         FUNC_23(VAR_7->lpcc->hwndOwner, VAR_15, 0, (LPARAM)VAR_7->lpcc);
                   if ( FUNC_4(VAR_7->lpcc))
         FUNC_11( (WNDPROC) VAR_7->lpcc->lpfnHook, VAR_7->hwndSelf,
            VAR_5, VAR_6, (LPARAM)VAR_7->lpcc);
        break;

          case 129 :
  VAR_17 = FUNC_21(VAR_0);
      if (VAR_7->lpcc->hwndOwner)
   if (FUNC_23(VAR_7->lpcc->hwndOwner, VAR_17, 0, (LPARAM)VAR_7->lpcc))
   break;
  FUNC_12(VAR_7->hwndSelf, 1) ;
  return VAR_4 ;

   case 139 :
  FUNC_12(VAR_7->hwndSelf, 0) ;
  return VAR_4 ;

       }
       return VAR_2;
}
