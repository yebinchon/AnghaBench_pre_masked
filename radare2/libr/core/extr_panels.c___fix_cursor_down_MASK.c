
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; int block; int assembler; TYPE_1__* print; } ;
struct TYPE_5__ {scalar_t__ cur; scalar_t__ screen_bounds; int ocur; } ;
typedef TYPE_1__ RPrint ;
typedef TYPE_2__ RCore ;
typedef int RAsmOp ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(RCore *VAR_0) {
 RPrint *VAR_1 = VAR_0->print;
 bool VAR_2 = VAR_0->offset + VAR_1->cur + 32 < VAR_1->screen_bounds;
 if (!VAR_2) {
  int VAR_3 = 0;

  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   RAsmOp VAR_4;
   int VAR_5 = FUNC_1 (VAR_0->assembler,
     &VAR_4, VAR_0->block, 32);
   if (VAR_5 < 1) {
    VAR_5 = 1;
   }
   FUNC_2 (VAR_0, VAR_5);
   VAR_1->cur = FUNC_0 (VAR_1->cur - VAR_5, 0);
   if (VAR_1->ocur != -1) {
    VAR_1->ocur = FUNC_0 (VAR_1->ocur - VAR_5, 0);
   }
  }
 }
}
