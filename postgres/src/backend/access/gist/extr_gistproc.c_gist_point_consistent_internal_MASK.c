
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_10__ {TYPE_2__ low; TYPE_1__ high; } ;
struct TYPE_9__ {int y; int x; } ;
typedef int StrategyNumber ;
typedef TYPE_3__ Point ;
typedef TYPE_4__ BOX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;





 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_6(StrategyNumber VAR_1,
          bool VAR_2, BOX *VAR_3, Point *VAR_4)
{
 bool VAR_5 = 0;

 switch (VAR_1)
 {
  case 130:
   VAR_5 = FUNC_4(VAR_3->low.x, VAR_4->x);
   break;
  case 129:
   VAR_5 = FUNC_2(VAR_3->high.x, VAR_4->x);
   break;
  case 132:
   VAR_5 = FUNC_2(VAR_3->high.y, VAR_4->y);
   break;
  case 131:
   VAR_5 = FUNC_4(VAR_3->low.y, VAR_4->y);
   break;
  case 128:
   if (VAR_2)
   {

    VAR_5 = (FUNC_0(VAR_3->low.x, VAR_4->x) &&
        FUNC_0(VAR_3->low.y, VAR_4->y));
   }
   else
   {
    VAR_5 = (FUNC_3(VAR_4->x, VAR_3->high.x) &&
        FUNC_1(VAR_4->x, VAR_3->low.x) &&
        FUNC_3(VAR_4->y, VAR_3->high.y) &&
        FUNC_1(VAR_4->y, VAR_3->low.y));
   }
   break;
  default:
   FUNC_5(VAR_0, "unrecognized strategy number: %d", VAR_1);
   VAR_5 = 0;
   break;
 }

 return VAR_5;
}
