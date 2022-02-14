
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_13__ {scalar_t__ bottom; scalar_t__ left; scalar_t__ top; scalar_t__ right; } ;
struct TYPE_12__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_11__ {int dwStyle; int wState; void* hWndLBox; void* hWndEdit; TYPE_9__ textRect; TYPE_2__ droppedRect; int buttonRect; scalar_t__ owner; scalar_t__ editHeight; scalar_t__ droppedWidth; } ;
typedef int LRESULT ;
typedef int LPPOINT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,TYPE_1__*,TYPE_9__*,int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int,char*,int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,TYPE_1__*) ;
 void* FUNC_6 (int,char const*,int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_11 (scalar_t__,int ,int ,int) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static LRESULT FUNC_14( HWND VAR_43, LPHEADCOMBO VAR_44, HWND VAR_45, LONG VAR_46,
                             BOOL VAR_47 )
{
  static const WCHAR VAR_48[] = {'C','o','m','b','o','L','B','o','x',0};
  static const WCHAR VAR_49[] = {'E','d','i','t',0};

  if( !FUNC_2(VAR_44) ) VAR_44->dwStyle |= VAR_12;
  if( FUNC_2(VAR_44) != VAR_5 ) VAR_44->wState |= VAR_0;

  VAR_44->owner = VAR_45;





  VAR_44->droppedWidth = VAR_44->editHeight = 0;




  VAR_44->wState |= VAR_1;



  if( VAR_44->owner || !(VAR_46 & VAR_41) )
  {
      UINT VAR_50 = 0;
      UINT VAR_51 = 0;






      FUNC_8( VAR_43, &VAR_44->droppedRect );
      FUNC_0(VAR_43, VAR_44, &VAR_44->textRect, &VAR_44->buttonRect, &VAR_44->droppedRect );




      if ( FUNC_2(VAR_44) != VAR_12 )
      {
 VAR_44->droppedRect.top = VAR_44->textRect.bottom + FUNC_4();




 if( FUNC_2(VAR_44) == VAR_4 )
   VAR_44->droppedRect.left += FUNC_3();

        if (VAR_44->droppedRect.bottom < VAR_44->droppedRect.top)
            VAR_44->droppedRect.bottom = VAR_44->droppedRect.top;
        if (VAR_44->droppedRect.right < VAR_44->droppedRect.left)
            VAR_44->droppedRect.right = VAR_44->droppedRect.left;
        FUNC_11( VAR_43, 0, (LPPOINT)&VAR_44->droppedRect, 2 );
      }



      VAR_50 = (VAR_31 | VAR_27 | VAR_34 | VAR_36 | VAR_35) |
                 (VAR_46 & (VAR_42 | VAR_10 | VAR_11));

      if( VAR_44->dwStyle & VAR_13 )
 VAR_50 |= VAR_32;
      if( VAR_44->dwStyle & VAR_6 )
 VAR_50 |= VAR_29;
      if( VAR_44->dwStyle & VAR_8 )
 VAR_50 |= VAR_30;
      if( VAR_44->dwStyle & VAR_3 )
 VAR_50 |= VAR_28;

      if( FUNC_2(VAR_44) == VAR_12 )
      {
 VAR_50 |= VAR_41;





 VAR_50 &= ~VAR_34;
 VAR_51 |= VAR_38;
      }
      else
      {
        VAR_51 |= (VAR_40 | VAR_39);
      }

      if (VAR_47)
          VAR_44->hWndLBox = FUNC_6(VAR_51, VAR_48, ((void*)0), VAR_50,
                                           VAR_44->droppedRect.left,
                                           VAR_44->droppedRect.top,
                                           VAR_44->droppedRect.right - VAR_44->droppedRect.left,
                                           VAR_44->droppedRect.bottom - VAR_44->droppedRect.top,
                                           VAR_43, (HMENU)VAR_26,
                                           (HINSTANCE)FUNC_9( VAR_43, VAR_23 ), VAR_44 );
      else
          VAR_44->hWndLBox = FUNC_5(VAR_51, "ComboLBox", ((void*)0), VAR_50,
                                           VAR_44->droppedRect.left,
                                           VAR_44->droppedRect.top,
                                           VAR_44->droppedRect.right - VAR_44->droppedRect.left,
                                           VAR_44->droppedRect.bottom - VAR_44->droppedRect.top,
                                           VAR_43, (HMENU)VAR_26,
                                           (HINSTANCE)FUNC_9( VAR_43, VAR_23 ), VAR_44 );

      if( VAR_44->hWndLBox )
      {
   BOOL VAR_52 = VAR_33;
   VAR_50 = VAR_35 | VAR_41 | VAR_19 | VAR_17 | VAR_16;

   if( VAR_44->wState & VAR_0 )
   {
       if( VAR_44->dwStyle & VAR_9 )
    VAR_50 |= VAR_20;
       if( VAR_44->dwStyle & VAR_2 )
    VAR_50 |= VAR_15;
       if( VAR_44->dwStyle & VAR_7 )
    VAR_50 |= VAR_18;
       else if( VAR_44->dwStyle & VAR_14 )
    VAR_50 |= VAR_21;

              if (!FUNC_10(VAR_43)) VAR_50 |= VAR_37;

              if (VAR_47)
                  VAR_44->hWndEdit = FUNC_6(0, VAR_49, ((void*)0), VAR_50,
                                                   VAR_44->textRect.left, VAR_44->textRect.top,
                                                   VAR_44->textRect.right - VAR_44->textRect.left,
                                                   VAR_44->textRect.bottom - VAR_44->textRect.top,
                                                   VAR_43, (HMENU)VAR_25,
                                                   (HINSTANCE)FUNC_9( VAR_43, VAR_23 ), ((void*)0) );
              else
                  VAR_44->hWndEdit = FUNC_5(0, "Edit", ((void*)0), VAR_50,
                                                   VAR_44->textRect.left, VAR_44->textRect.top,
                                                   VAR_44->textRect.right - VAR_44->textRect.left,
                                                   VAR_44->textRect.bottom - VAR_44->textRect.top,
                                                   VAR_43, (HMENU)VAR_25,
                                                   (HINSTANCE)FUNC_9( VAR_43, VAR_23 ), ((void*)0) );

       if( !VAR_44->hWndEdit )
  VAR_52 = VAR_22;
   }

          if( VAR_52 )
   {
     if( FUNC_2(VAR_44) != VAR_12 )
     {

       FUNC_12(VAR_44->hWndLBox, VAR_24);






       FUNC_1(VAR_44);
     }

     FUNC_13("init done\n");
     return 0;
   }
   FUNC_7("edit control failure.\n");
      } else FUNC_7("listbox failure.\n");
  } else FUNC_7("no owner for visible combo.\n");



  return -1;
}
