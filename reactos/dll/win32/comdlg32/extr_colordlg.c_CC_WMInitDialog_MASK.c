
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WNDPROC ;
struct TYPE_16__ {int bottom; int top; } ;
struct TYPE_19__ {int h; int s; int l; TYPE_3__* lpcc; TYPE_1__ fullsize; int msetrgb; int hwndSelf; } ;
struct TYPE_18__ {int lStructSize; int Flags; scalar_t__ rgbResult; scalar_t__ lpfnHook; } ;
struct TYPE_17__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef TYPE_3__ CHOOSECOLORW ;
typedef TYPE_4__ CCPRIV ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 void* FUNC_4 (char,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_19 (int ,TYPE_2__*) ;
 int FUNC_20 (int ,int ,int,int ) ;
 int FUNC_21 (int ,int,int,int) ;
 int FUNC_22 (int ,int ,TYPE_4__*) ;
 int FUNC_23 (int ,int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (char*,scalar_t__) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_4__* FUNC_26 (int) ;
 int VAR_27 ;
 scalar_t__** VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static LRESULT FUNC_27( HWND VAR_31, WPARAM VAR_32, LPARAM VAR_33 )
{
   CHOOSECOLORW *VAR_34 = (CHOOSECOLORW*)VAR_33;
   int VAR_35, VAR_36;
   int VAR_37, VAR_38, VAR_39;
   HWND VAR_40;
   RECT VAR_41;
   POINT VAR_42;
   CCPRIV *VAR_43;

   FUNC_25("WM_INITDIALOG lParam=%08lX\n", VAR_33);

   if (VAR_34->lStructSize != sizeof(CHOOSECOLORW))
   {
       FUNC_9(VAR_31, 0);
       return VAR_5;
   }

   VAR_43 = FUNC_26(sizeof(*VAR_43));
   VAR_43->lpcc = VAR_34;
   VAR_43->hwndSelf = VAR_31;

   FUNC_22( VAR_31, VAR_30, VAR_43 );

   if (!(VAR_43->lpcc->Flags & VAR_3))
      FUNC_24(FUNC_12(VAR_31, VAR_29), VAR_23);
   VAR_43->msetrgb = FUNC_18(VAR_19);
   FUNC_16(VAR_31, &VAR_43->fullsize);
   if (VAR_43->lpcc->Flags & VAR_0 || VAR_43->lpcc->Flags & VAR_1)
   {
      VAR_40 = FUNC_12(VAR_31, VAR_8);
      FUNC_8(VAR_40, VAR_5);
   }
   if (!(VAR_43->lpcc->Flags & VAR_0 ) || VAR_43->lpcc->Flags & VAR_1)
   {
      VAR_41 = VAR_43->fullsize;
      VAR_36 = VAR_41.bottom - VAR_41.top;
      VAR_40 = FUNC_12(VAR_31, VAR_15);
      VAR_42.x = VAR_42.y = 0;
      FUNC_7(VAR_40, &VAR_42);
      FUNC_19(VAR_31,&VAR_42);
      FUNC_11(VAR_31, &VAR_41);
      VAR_42.x += FUNC_15(VAR_20);
      FUNC_23(VAR_31, 0, 0, 0, VAR_42.x, VAR_36, VAR_21|VAR_22);

      for (VAR_35 = VAR_11; VAR_35 <= VAR_9; VAR_35++)
         FUNC_24( FUNC_12(VAR_31, VAR_35), VAR_23);
      for (VAR_35 = VAR_16; VAR_35 <= VAR_7; VAR_35++)
         FUNC_24( FUNC_12(VAR_31, VAR_35), VAR_23);
      FUNC_24( FUNC_12(VAR_31, VAR_17), VAR_23);
      FUNC_24( FUNC_12(VAR_31, VAR_6), VAR_23);
      FUNC_24( FUNC_12(VAR_31, VAR_15), VAR_23);
      FUNC_24( FUNC_12(VAR_31, VAR_18), VAR_23);
      FUNC_24( FUNC_12(VAR_31, 1090 ), VAR_23);
   }
   else
      FUNC_5(VAR_43, ((void*)0));
   VAR_36 = VAR_24;
   for (VAR_35 = VAR_11; VAR_35 <= VAR_9; VAR_35++)
     FUNC_20( FUNC_12(VAR_31, VAR_35), VAR_4, 3, 0);
   if (FUNC_0(VAR_43->lpcc))
   {
          VAR_36 = FUNC_6( (WNDPROC)VAR_43->lpcc->lpfnHook, VAR_31, VAR_25, VAR_32, VAR_33);
   }


   VAR_37 = FUNC_14(VAR_43->lpcc->rgbResult);
   VAR_38 = FUNC_13(VAR_43->lpcc->rgbResult);
   VAR_39 = FUNC_10(VAR_43->lpcc->rgbResult);

   FUNC_2(VAR_43);
   VAR_43->h = FUNC_4('H', VAR_43->lpcc->rgbResult);
   VAR_43->s = FUNC_4('S', VAR_43->lpcc->rgbResult);
   VAR_43->l = FUNC_4('L', VAR_43->lpcc->rgbResult);


   FUNC_21(VAR_31, VAR_11, VAR_43->h, VAR_24);
   FUNC_21(VAR_31, VAR_14, VAR_43->s, VAR_24);
   FUNC_21(VAR_31, VAR_12, VAR_43->l, VAR_24);
   FUNC_21(VAR_31, VAR_13, VAR_37, VAR_24);
   FUNC_21(VAR_31, VAR_10, VAR_38, VAR_24);
   FUNC_21(VAR_31, VAR_9, VAR_39, VAR_24);

   FUNC_1(VAR_43);
   FUNC_3(VAR_43);

   return VAR_36;
}
