
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int logBrush ;
typedef int buffer ;
typedef int WCHAR ;
struct TYPE_3__ {int lbColor; } ;
typedef int RECT ;
typedef int LPPOINT ;
typedef TYPE_1__ LOGBRUSH ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int,int *,int) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *,int) ;
 int FUNC_14 (int,int,int) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static BOOL FUNC_18( HWND VAR_14, HWND VAR_15, HDC VAR_16, BOOL VAR_17 )
{
    RECT VAR_18;
    HFONT VAR_19;
    HBRUSH VAR_20;
    COLORREF VAR_21 = 0;

    if( VAR_17 )
    {
 VAR_20 = FUNC_11(VAR_1);
 VAR_21 = FUNC_10(VAR_2);
    }
    else
    {
        if( FUNC_12( VAR_14, VAR_8 ) & VAR_11 )
 {
     VAR_20 = (HBRUSH) FUNC_4(VAR_14, VAR_7);
     if( VAR_20 )
     {
  INT VAR_22;
  LOGBRUSH VAR_23;
  FUNC_7( VAR_20, sizeof(VAR_23), &VAR_23 );
  VAR_22 = FUNC_8(VAR_23.lbColor) +
      FUNC_6(VAR_23.lbColor) +
         FUNC_3(VAR_23.lbColor);
  if( VAR_22 < (0x7F * 3) )
      VAR_21 = FUNC_14( 0xFF, 0xFF, 0xFF );
     }
     else
  VAR_20 = FUNC_9( VAR_10 );
 }
 else
 {
     VAR_20 = FUNC_9( VAR_0 );
     VAR_21 = FUNC_14( 0xFF, 0xFF, 0xFF );
 }
    }

    FUNC_5( VAR_14, &VAR_18 );
    FUNC_0( VAR_16, (LPPOINT)&VAR_18, 2 );
    FUNC_2( VAR_16, &VAR_18, VAR_20 );

    VAR_19 = FUNC_15( VAR_16, VAR_13 );
    if( VAR_19 )
    {
 WCHAR VAR_24[80];

        INT VAR_25 = FUNC_13( VAR_15, VAR_24, sizeof(VAR_24)/sizeof(VAR_24[0]) );
        FUNC_17( VAR_16, VAR_21 );
        FUNC_16( VAR_16, VAR_9 );

        FUNC_1( VAR_16, VAR_24, VAR_25, &VAR_18, VAR_3 | VAR_4 |
                   VAR_6 | ((VAR_12) ? 0 : VAR_5) );

 FUNC_15( VAR_16, VAR_19 );
    }
    return (VAR_19 != 0);
}
