
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int down_x; int down_y; int down; int middle_x; int middle_y; int middle; int right_x; int right_y; int right; int mod; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 VAR_2.x = VAR_5;
 VAR_2.y = VAR_6;
 if (VAR_4 == VAR_0)
 {
  switch (VAR_3)
  {
  case 130:
   VAR_2.down_x = VAR_5;
   VAR_2.down_y = VAR_6;
   VAR_2.down = 1;
   break;
  case 129:
   VAR_2.middle_x = VAR_5;
   VAR_2.middle_y = VAR_6;
   VAR_2.middle = 1;
   break;
  case 128:
   VAR_2.right_x = VAR_5;
   VAR_2.right_y = VAR_6;
   VAR_2.right = 1;
   break;
  case 3: FUNC_1(0, 1, VAR_5, VAR_6); break;
  case 4: FUNC_1(0, -1, VAR_5, VAR_6); break;
  case 5: FUNC_1(1, 1, VAR_5, VAR_6); break;
  case 6: FUNC_1(1, -1, VAR_5, VAR_6); break;
  }
 }
 else if (VAR_4 == VAR_1)
 {
  switch (VAR_3)
  {
  case 130: VAR_2.down = 0; break;
  case 129: VAR_2.middle = 0; break;
  case 128: VAR_2.right = 0; break;
  }
 }
 VAR_2.mod = FUNC_0();
 FUNC_2();
 FUNC_3();
}
