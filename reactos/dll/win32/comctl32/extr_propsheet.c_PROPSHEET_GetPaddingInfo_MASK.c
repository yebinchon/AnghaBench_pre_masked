
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef TYPE_2__ PADDING_INFO ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static PADDING_INFO FUNC_3(HWND VAR_1)
{
  HWND VAR_2 = FUNC_0(VAR_1, VAR_0);
  RECT VAR_3;
  PADDING_INFO VAR_4;

  FUNC_1(VAR_2, &VAR_3);
  FUNC_2( 0, VAR_1, (POINT *)&VAR_3, 2 );

  VAR_4.x = VAR_3.left;
  VAR_4.y = VAR_3.top;

  return VAR_4;
}
