
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_12__ {scalar_t__ bottom; scalar_t__ left; scalar_t__ top; scalar_t__ right; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_10__ {int dwStyle; int wState; int visibleItems; void* hWndLBox; void* hWndEdit; TYPE_8__ textRect; TYPE_2__ droppedRect; int buttonRect; scalar_t__ owner; scalar_t__ editHeight; scalar_t__ droppedWidth; } ;
typedef int LRESULT ;
typedef int LPPOINT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,TYPE_1__*,TYPE_8__*,int *,TYPE_2__*) ;
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
 void* FUNC_5 (int,char const*,int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_9 (scalar_t__) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_10 (scalar_t__,int ,int ,int) ;
 int FUNC_11 (scalar_t__,int ) ;
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
 int VAR_43 ;

__attribute__((used)) static LRESULT FUNC_14( HWND VAR_44, LPHEADCOMBO VAR_45, HWND VAR_46, LONG VAR_47 )
{
  static const WCHAR VAR_48[] = {'C','o','m','b','o','L','B','o','x',0};
  static const WCHAR VAR_49[] = {'E','d','i','t',0};

  FUNC_11( VAR_44, VAR_34 );
  if( !FUNC_2(VAR_45) ) VAR_45->dwStyle |= VAR_12;
  if( FUNC_2(VAR_45) != VAR_5 ) VAR_45->wState |= VAR_0;

  VAR_45->owner = VAR_46;





  VAR_45->droppedWidth = VAR_45->editHeight = 0;




  VAR_45->wState |= VAR_1;




  VAR_45->visibleItems = 30;



  if( VAR_45->owner || !(VAR_47 & VAR_42) )
  {
      UINT VAR_50 = 0;
      UINT VAR_51 = 0;






      FUNC_7( VAR_44, &VAR_45->droppedRect );
      FUNC_0(VAR_44, VAR_45, &VAR_45->textRect, &VAR_45->buttonRect, &VAR_45->droppedRect );




      if ( FUNC_2(VAR_45) != VAR_12 )
      {
 VAR_45->droppedRect.top = VAR_45->textRect.bottom + FUNC_4();




 if( FUNC_2(VAR_45) == VAR_4 )
   VAR_45->droppedRect.left += FUNC_3();

        if (VAR_45->droppedRect.bottom < VAR_45->droppedRect.top)
            VAR_45->droppedRect.bottom = VAR_45->droppedRect.top;
        if (VAR_45->droppedRect.right < VAR_45->droppedRect.left)
            VAR_45->droppedRect.right = VAR_45->droppedRect.left;
        FUNC_10( VAR_44, 0, (LPPOINT)&VAR_45->droppedRect, 2 );
      }



      VAR_50 = (VAR_31 | VAR_27 | VAR_35 | VAR_37 | VAR_36) |
                 (VAR_47 & (VAR_43 | VAR_10 | VAR_11));

      if( VAR_45->dwStyle & VAR_13 )
 VAR_50 |= VAR_32;
      if( VAR_45->dwStyle & VAR_6 )
 VAR_50 |= VAR_29;
      if( VAR_45->dwStyle & VAR_8 )
 VAR_50 |= VAR_30;
      if( VAR_45->dwStyle & VAR_3 )
 VAR_50 |= VAR_28;

      if( FUNC_2(VAR_45) == VAR_12 )
      {
 VAR_50 |= VAR_42;





 VAR_50 &= ~VAR_35;
 VAR_51 |= VAR_39;
      }
      else
      {
        VAR_51 |= (VAR_41 | VAR_40);
      }

      VAR_45->hWndLBox = FUNC_5(VAR_51, VAR_48, ((void*)0), VAR_50,
              VAR_45->droppedRect.left, VAR_45->droppedRect.top, VAR_45->droppedRect.right - VAR_45->droppedRect.left,
              VAR_45->droppedRect.bottom - VAR_45->droppedRect.top, VAR_44, (HMENU)VAR_26,
              (HINSTANCE)FUNC_8( VAR_44, VAR_23 ), VAR_45 );
      if( VAR_45->hWndLBox )
      {
   BOOL VAR_52 = VAR_33;
   VAR_50 = VAR_36 | VAR_42 | VAR_19 | VAR_17 | VAR_16;

   if( VAR_45->wState & VAR_0 )
   {
       if( VAR_45->dwStyle & VAR_9 )
    VAR_50 |= VAR_20;
       if( VAR_45->dwStyle & VAR_2 )
    VAR_50 |= VAR_15;
       if( VAR_45->dwStyle & VAR_7 )
    VAR_50 |= VAR_18;
       else if( VAR_45->dwStyle & VAR_14 )
    VAR_50 |= VAR_21;

              if (!FUNC_9(VAR_44)) VAR_50 |= VAR_38;

              VAR_45->hWndEdit = FUNC_5(0, VAR_49, ((void*)0), VAR_50,
                                               VAR_45->textRect.left, VAR_45->textRect.top,
                                               VAR_45->textRect.right - VAR_45->textRect.left,
                                               VAR_45->textRect.bottom - VAR_45->textRect.top,
                                               VAR_44, (HMENU)VAR_25,
                                               (HINSTANCE)FUNC_8( VAR_44, VAR_23 ), ((void*)0) );
       if( !VAR_45->hWndEdit )
  VAR_52 = VAR_22;
   }

          if( VAR_52 )
   {
     if( FUNC_2(VAR_45) != VAR_12 )
     {

       FUNC_12(VAR_45->hWndLBox, VAR_24);






       FUNC_1(VAR_45);
     }

     FUNC_13("init done\n");
     return 0;
   }
   FUNC_6("edit control failure.\n");
      } else FUNC_6("listbox failure.\n");
  } else FUNC_6("no owner for visible combo.\n");



  return -1;
}
