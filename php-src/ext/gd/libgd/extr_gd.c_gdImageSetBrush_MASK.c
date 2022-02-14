
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_10__ {int* brushColorMap; int trueColor; struct TYPE_10__* brush; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6 (gdImagePtr VAR_0, gdImagePtr VAR_1)
{
 int VAR_2;
 VAR_0->brush = VAR_1;
 if (!VAR_0->trueColor && !VAR_0->brush->trueColor) {
  for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++) {
   int VAR_3;
   VAR_3 = FUNC_2(VAR_0, FUNC_5(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2), FUNC_1(VAR_1, VAR_2), FUNC_0(VAR_1, VAR_2));
   VAR_0->brushColorMap[VAR_2] = VAR_3;
  }
 }
}
