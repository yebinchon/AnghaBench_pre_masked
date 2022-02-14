
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int userPtr; int (* renderFlush ) (int ,int ) ;} ;
struct TYPE_11__ {size_t fontImageIdx; int* fontImages; TYPE_1__ params; } ;
struct TYPE_10__ {int compositeOperation; } ;
typedef TYPE_2__ NVGstate ;
typedef TYPE_3__ NVGcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int*,int*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(NVGcontext* VAR_1)
{
 NVGstate* VAR_2 = FUNC_2(VAR_1);
 VAR_1->params.renderFlush(VAR_1->params.userPtr, VAR_2->compositeOperation);
 if (VAR_1->fontImageIdx != 0) {
  int VAR_3 = VAR_1->fontImages[VAR_1->fontImageIdx];
  int VAR_4, VAR_5, VAR_6, VAR_7;

  if (VAR_3 == 0)
   return;
  FUNC_1(VAR_1, VAR_3, &VAR_6, &VAR_7);
  for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_1->fontImageIdx; VAR_4++) {
   if (VAR_1->fontImages[VAR_4] != 0) {
    int VAR_8, VAR_9;
    FUNC_1(VAR_1, VAR_1->fontImages[VAR_4], &VAR_8, &VAR_9);
    if (VAR_8 < VAR_6 || VAR_9 < VAR_7)
     FUNC_0(VAR_1, VAR_1->fontImages[VAR_4]);
    else
     VAR_1->fontImages[VAR_5++] = VAR_1->fontImages[VAR_4];
   }
  }

  VAR_1->fontImages[VAR_5++] = VAR_1->fontImages[0];
  VAR_1->fontImages[0] = VAR_3;
  VAR_1->fontImageIdx = 0;

  for (VAR_4 = VAR_5; VAR_4 < VAR_0; VAR_4++)
   VAR_1->fontImages[VAR_4] = 0;
 }
}
