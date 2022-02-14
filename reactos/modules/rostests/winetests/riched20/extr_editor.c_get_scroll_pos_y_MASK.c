
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; int member_1; int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static int FUNC_2(HWND VAR_1)
{
  POINT VAR_2 = {-1, -1};
  FUNC_0(VAR_1, VAR_0, 0, (LPARAM)&VAR_2);
  FUNC_1(VAR_2.x != -1 && VAR_2.y != -1, "p.x:%d p.y:%d\n", VAR_2.x, VAR_2.y);
  return VAR_2.y;
}
