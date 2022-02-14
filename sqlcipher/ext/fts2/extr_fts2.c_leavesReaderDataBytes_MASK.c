
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int leafReader; int eof; } ;
typedef TYPE_1__ LeavesReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(LeavesReader *VAR_0){
  FUNC_0( !VAR_0->eof );
  return FUNC_1(&VAR_0->leafReader);
}
