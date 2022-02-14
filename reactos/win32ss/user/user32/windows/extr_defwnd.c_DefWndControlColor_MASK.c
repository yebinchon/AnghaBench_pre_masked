
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int hbrGray; } ;
typedef int HDC ;
typedef int HBRUSH ;
typedef scalar_t__ COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_8 ;

HBRUSH
FUNC_5(HDC VAR_9, UINT VAR_10)
{
  if (VAR_10 == VAR_7)
  {
      HBRUSH VAR_11 = FUNC_1(VAR_2);
      COLORREF VAR_12 = FUNC_0(VAR_1);
      FUNC_3(VAR_9, FUNC_0(VAR_0));
      FUNC_2(VAR_9, VAR_12);





      if ( VAR_12 == FUNC_0(VAR_3))
          return VAR_8->hbrGray;

      FUNC_4( VAR_11 );
      return VAR_11;
  }

  FUNC_3(VAR_9, FUNC_0(VAR_4));

  if ((VAR_10 == VAR_5) || (VAR_10 == VAR_6))
  {
      FUNC_2(VAR_9, FUNC_0(VAR_3));
  }
  else
  {
      FUNC_2(VAR_9, FUNC_0(VAR_0));
      return FUNC_1(VAR_0);
  }

  return FUNC_1(VAR_3);
}
