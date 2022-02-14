
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ droppedWidth; } ;
struct TYPE_14__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__* LPRECT ;
typedef TYPE_2__* LPHEADCOMBO ;
typedef int HWND ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(
  HWND VAR_4,
  LPHEADCOMBO VAR_5,
  LPRECT VAR_6,
  LPRECT VAR_7,
  LPRECT VAR_8)
{



  FUNC_7(VAR_4, VAR_6);




  FUNC_9(VAR_6, -FUNC_3(), -FUNC_4());




  VAR_6->bottom = VAR_6->top + FUNC_0(VAR_4, VAR_5);




  FUNC_5(VAR_7, VAR_6);




  if( FUNC_1(VAR_5) == VAR_2 )
    VAR_7->left = VAR_7->right = VAR_7->bottom = 0;
  else
  {





    VAR_7->left = VAR_7->right - FUNC_8(VAR_3);
    VAR_6->right = VAR_7->left;
  }





  if( FUNC_1(VAR_5) == VAR_0 )
  {
    VAR_6->right -= FUNC_2();
  }




  if (FUNC_1(VAR_5) != VAR_1)
  {
    FUNC_9(VAR_6, -FUNC_6(), -FUNC_6());
  }




  if( FUNC_1(VAR_5) == VAR_2 )
  {



    FUNC_7(VAR_4, VAR_8);




    VAR_8->top = VAR_6->bottom + FUNC_4();
  }
  else
  {



    if (VAR_5->droppedWidth < (VAR_7->right + FUNC_3()))
    {
      VAR_8->right = VAR_8->left + (VAR_7->right + FUNC_3());






      if( FUNC_1(VAR_5) == VAR_0 )
 VAR_8->right -= FUNC_2();
    }
    else
       VAR_8->right = VAR_8->left + VAR_5->droppedWidth;
  }


  if (VAR_6->right < VAR_6->left)
    VAR_6->right = VAR_6->left;

  FUNC_10("\ttext\t= (%s)\n", FUNC_11(VAR_6));

  FUNC_10("\tbutton\t= (%s)\n", FUNC_11(VAR_7));

  FUNC_10("\tlbox\t= (%s)\n", FUNC_11(VAR_8));
}
