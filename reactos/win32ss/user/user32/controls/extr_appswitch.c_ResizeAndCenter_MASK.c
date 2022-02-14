
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;

void FUNC_4(HWND VAR_6, int VAR_7, int VAR_8)
{
   int VAR_9, VAR_10;
   RECT VAR_11;

   int VAR_12 = FUNC_1(VAR_2);
   int VAR_13 = FUNC_1(VAR_3);

   VAR_9 = (VAR_12 - VAR_7) / 2;
   VAR_10 = (VAR_13 - VAR_8) / 2;

   FUNC_3(&VAR_11, VAR_9, VAR_10, VAR_9 + VAR_7, VAR_10 + VAR_8);
   FUNC_0(&VAR_11, VAR_4, VAR_1, VAR_0);

   VAR_9 = VAR_11.left;
   VAR_10 = VAR_11.top;
   VAR_7 = VAR_11.right - VAR_11.left;
   VAR_8 = VAR_11.bottom - VAR_11.top;
   FUNC_2(VAR_6, VAR_9, VAR_10, VAR_7, VAR_8, VAR_1);

   VAR_5.x = VAR_9;
   VAR_5.y = VAR_10;
}
