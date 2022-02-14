
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int leafReader; } ;
typedef TYPE_1__ LeavesReader ;


 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(LeavesReader *VAR_0, LeavesReader *VAR_1){
  if( FUNC_1(VAR_0) ){
    if( FUNC_1(VAR_1) ) return 0;
    return 1;
  }
  if( FUNC_1(VAR_1) ) return -1;

  return FUNC_0(&VAR_0->leafReader,
                           FUNC_2(VAR_1), FUNC_3(VAR_1),
                           0);
}
