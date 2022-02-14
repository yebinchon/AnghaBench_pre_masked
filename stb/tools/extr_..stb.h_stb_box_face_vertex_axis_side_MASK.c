
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_2; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (int) ;

int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
   static int VAR_3[6][4][3] =
   {
      { { 1,1,1 }, { 1,0,1 }, { 1,0,0 }, { 1,1,0 } },
      { { 0,0,0 }, { 0,0,1 }, { 0,1,1 }, { 0,1,0 } },
      { { 0,0,0 }, { 0,1,0 }, { 1,1,0 }, { 1,0,0 } },
      { { 0,0,0 }, { 1,0,0 }, { 1,0,1 }, { 0,0,1 } },
      { { 1,1,1 }, { 0,1,1 }, { 0,0,1 }, { 1,0,1 } },
      { { 1,1,1 }, { 1,1,0 }, { 0,1,0 }, { 0,1,1 } },
   };
   FUNC_0(VAR_0 >= 0 && VAR_0 < 6);
   FUNC_0(VAR_1 >= 0 && VAR_1 < 4);
   FUNC_0(VAR_2 >= 0 && VAR_2 < 3);
   return VAR_3[VAR_0][VAR_1][VAR_2];
}
