
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bm ;
struct TYPE_3__ {int bmWidth; int bmHeight; } ;
typedef int RECT ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;
typedef TYPE_1__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOL FUNC_9(void)
{
  HDC VAR_6;

  if( VAR_5 ) return VAR_4;
  if( (VAR_6 = FUNC_0(0)) )
  {
    BOOL VAR_7 = VAR_2;
    if( (VAR_5 = FUNC_4(0, FUNC_5(VAR_3))) )
    {
      BITMAP VAR_8;
      HBITMAP VAR_9;
      RECT VAR_10;

      FUNC_2( VAR_5, sizeof(VAR_8), &VAR_8 );
      VAR_0 = VAR_8.bmHeight;
      VAR_1 = VAR_8.bmWidth;

      FUNC_8("combo bitmap [%i,%i]\n", VAR_1, VAR_0 );

      VAR_9 = FUNC_6( VAR_6, VAR_5);
      FUNC_7( &VAR_10, 0, 0, VAR_1, VAR_0 );
      FUNC_3( VAR_6, &VAR_10 );
      FUNC_6( VAR_6, VAR_9 );
      VAR_7 = VAR_4;
    }
    FUNC_1( VAR_6 );
    return VAR_7;
  }
  return VAR_2;
}
