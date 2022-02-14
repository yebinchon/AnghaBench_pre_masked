
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int top; scalar_t__ bottom; } ;
struct TYPE_12__ {TYPE_7__ droppedRect; int textRect; int buttonRect; int self; } ;
struct TYPE_11__ {int bottom; int top; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPHEADCOMBO ;


 int FUNC_0 (int ,TYPE_2__*,int *,int *,TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_7__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int ,int ,int,int,int) ;
 int FUNC_7 (char*,int,int,scalar_t__,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8( LPHEADCOMBO VAR_6 )
{




  if( FUNC_3(VAR_6) != VAR_0 )
  {
    int VAR_7, VAR_8, VAR_9;
    RECT VAR_10;

    FUNC_5(VAR_6->self, &VAR_10);
    VAR_8 = VAR_10.bottom - VAR_10.top;
    VAR_9 = VAR_10.right - VAR_10.left;
    VAR_7 = FUNC_1(VAR_6->self, VAR_6) + 2*FUNC_4();
    if( VAR_8 > VAR_7 )
    {
      FUNC_7("oldComboHeight=%d, newComboHeight=%d, oldDropBottom=%d, oldDropTop=%d\n",
            VAR_8, VAR_7, VAR_6->droppedRect.bottom,
            VAR_6->droppedRect.top);
      VAR_6->droppedRect.bottom = VAR_6->droppedRect.top + VAR_8 - VAR_7;
    }



    if( VAR_8 != VAR_7 )
      FUNC_6(VAR_6->self, 0, 0, 0, VAR_9, VAR_7,
            VAR_4|VAR_2|VAR_1|VAR_3);
  }

  FUNC_0(VAR_6->self,
    VAR_6,
    &VAR_6->textRect,
    &VAR_6->buttonRect,
    &VAR_6->droppedRect);

  FUNC_2( VAR_6, &VAR_6->textRect, &VAR_6->droppedRect, VAR_5 );
}
