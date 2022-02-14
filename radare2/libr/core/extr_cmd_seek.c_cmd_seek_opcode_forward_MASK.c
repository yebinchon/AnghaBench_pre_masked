
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blocksize; int block; int offset; int anal; } ;
typedef TYPE_1__ RCore ;
typedef int RAnalOp ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3 (RCore *VAR_1, int VAR_2) {

 int VAR_3, VAR_4, VAR_5 = 0;
 for (VAR_5 = VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  RAnalOp VAR_6;
  VAR_4 = FUNC_0 (VAR_1->anal, &VAR_6, VAR_1->offset, VAR_1->block,
   VAR_1->blocksize, VAR_0);
  if (VAR_4 < 1) {
   VAR_4 = 1;
  }
  FUNC_2 (VAR_1, VAR_4);
  FUNC_1 (&VAR_6);
  VAR_5 += VAR_4;
 }
 return VAR_5;
}
