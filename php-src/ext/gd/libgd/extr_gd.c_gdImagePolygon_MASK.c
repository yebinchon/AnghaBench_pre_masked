
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdPointPtr ;
typedef int gdImagePtr ;
struct TYPE_4__ {int y; int x; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*,int,int) ;

void FUNC_2 (gdImagePtr VAR_0, gdPointPtr VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 <= 0) {
  return;
 }


 FUNC_0 (VAR_0, VAR_1->x, VAR_1->y, VAR_1[VAR_2 - 1].x, VAR_1[VAR_2 - 1].y, VAR_3);
 FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
}
