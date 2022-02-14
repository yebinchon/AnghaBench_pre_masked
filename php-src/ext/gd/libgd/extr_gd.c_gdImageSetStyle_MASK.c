
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int* style; int styleLength; scalar_t__ stylePos; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int,int) ;

void FUNC_4 (gdImagePtr VAR_0, int *VAR_1, int VAR_2)
{
 if (VAR_0->style) {
  FUNC_0(VAR_0->style);
 }
 if (FUNC_3(sizeof (int), VAR_2)) {
  return;
 }
 VAR_0->style = (int *) FUNC_1(sizeof(int) * VAR_2);
 FUNC_2(VAR_0->style, VAR_1, sizeof(int) * VAR_2);
 VAR_0->styleLength = VAR_2;
 VAR_0->stylePos = 0;
}
