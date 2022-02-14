
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdPointPtr ;
typedef int gdImagePtr ;
struct TYPE_3__ {int x; int y; } ;


 int FUNC_0 (int ,int,int,int,int,int) ;

void FUNC_1 (gdImagePtr VAR_0, gdPointPtr VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2 <= 0) {
  return;
 }

 VAR_5 = VAR_1->x;
 VAR_6 = VAR_1->y;
 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  VAR_1++;
  FUNC_0(VAR_0, VAR_5, VAR_6, VAR_1->x, VAR_1->y, VAR_3);
  VAR_5 = VAR_1->x;
  VAR_6 = VAR_1->y;
 }
}
