
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int printidx; int inc; int blocksize; int block; int assembler; } ;
typedef TYPE_1__ RCore ;
typedef int RAsmOp ;


 int VAR_0 ;
 int FUNC_0 (int) ;



 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_1, int VAR_2) {
 RAsmOp VAR_3;

 if (VAR_2 > 0) {
  VAR_1->printidx = FUNC_0 ((VAR_1->printidx + 1) % VAR_0);
 } else {
  if (VAR_1->printidx) {
   VAR_1->printidx--;
  } else {
   VAR_1->printidx = VAR_0 - 1;
  }
 }
 switch (VAR_1->printidx) {
 case 128:
  VAR_1->inc = 16;
  break;
 case 129:
 case 130:
  FUNC_4 (&VAR_3);
  VAR_1->inc = FUNC_2 (VAR_1->assembler, &VAR_3, VAR_1->block, FUNC_1 (32, VAR_1->blocksize));
  FUNC_3 (&VAR_3);
  break;
 }
}
