
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {scalar_t__ y; int x; } ;
struct TYPE_10__ {int dwFlags; } ;
struct TYPE_12__ {TYPE_1__ ppshheader; scalar_t__ hasHelp; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; int left; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ PropSheetInfo ;
typedef TYPE_4__ POINT ;
typedef TYPE_5__ PADDING_INFO ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,TYPE_4__*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static PADDING_INFO FUNC_5(HWND VAR_5, const PropSheetInfo*
 VAR_6)
{
  PADDING_INFO VAR_7;
  RECT VAR_8;
  HWND VAR_9;
  INT VAR_10;
  POINT VAR_11, VAR_12;

  FUNC_4("\n");
  if (VAR_6->hasHelp)
  {
 VAR_10 = VAR_3;
  }
  else
  {
    if (VAR_6->ppshheader.dwFlags & VAR_4)
    {
 VAR_10 = VAR_1;
    }
    else
    {

 VAR_10 = VAR_0;
    }
  }

  VAR_9 = FUNC_1(VAR_5, VAR_10);
  FUNC_2(VAR_9, &VAR_8);
  FUNC_3( 0, VAR_5, (POINT *)&VAR_8, 2 );
  VAR_11.x = VAR_8.left;
  VAR_11.y = VAR_8.top;


  VAR_9 = FUNC_1(VAR_5, VAR_2);
  FUNC_2(VAR_9, &VAR_8);
  FUNC_3( 0, VAR_5, (POINT *)&VAR_8, 2 );
  VAR_12.x = VAR_8.left;
  VAR_12.y = VAR_8.bottom;

  VAR_7.y = VAR_11.y - VAR_12.y;

  if (VAR_7.y < 0)
   FUNC_0("padding negative ! Please report this !\n");


  VAR_7.x = VAR_7.y;
  return VAR_7;
}
