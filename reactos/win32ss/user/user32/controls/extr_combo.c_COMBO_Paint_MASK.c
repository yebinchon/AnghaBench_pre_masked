
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wState; int self; int textRect; int buttonRect; } ;
typedef int RECT ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__,int *,scalar_t__) ;
 int FUNC_9 (scalar_t__,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (char*,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_15(LPHEADCOMBO VAR_4, HDC VAR_5)
{
  PAINTSTRUCT VAR_6;
  HDC VAR_7;

  VAR_7 = (VAR_5) ? VAR_5
     : FUNC_0( VAR_4->self, &VAR_6);

  FUNC_14("hdc=%p\n", VAR_7);

  if( VAR_7 && !(VAR_4->wState & VAR_1) )
  {
      HBRUSH VAR_8, VAR_9;





      VAR_9 = FUNC_5(VAR_4, VAR_7);

      VAR_8 = FUNC_13( VAR_7, VAR_9 );
      if (!(VAR_4->wState & VAR_0))
        FUNC_8(VAR_7, &VAR_4->textRect, VAR_9);




      FUNC_1(VAR_4->self, VAR_4, VAR_7);

      if( !FUNC_12(&VAR_4->buttonRect) )
      {
 FUNC_2(VAR_4, VAR_7, VAR_4->buttonRect);
      }


      if (FUNC_4(VAR_4) != VAR_2)
      {
          RECT VAR_10 = VAR_4->textRect;

          FUNC_11(&VAR_10, FUNC_6(), FUNC_6());

          FUNC_9( VAR_7, &VAR_10, FUNC_10(VAR_3) );
      }

      if( !(VAR_4->wState & VAR_0) )
 FUNC_3( VAR_4, VAR_7 );

      if( VAR_8 )
 FUNC_13( VAR_7, VAR_8 );
  }

  if( !VAR_5 )
    FUNC_7(VAR_4->self, &VAR_6);

  return 0;
}
