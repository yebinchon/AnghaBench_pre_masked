
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idx; int pReader; } ;
typedef TYPE_1__ OrderedDLReader ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(OrderedDLReader *VAR_0, OrderedDLReader *VAR_1){
  if( FUNC_0(VAR_0->pReader) ){
    if( FUNC_0(VAR_1->pReader) ) return 0;
    return 1;
  }
  if( FUNC_0(VAR_1->pReader) ) return -1;

  if( FUNC_1(VAR_0->pReader)<FUNC_1(VAR_1->pReader) ) return -1;
  if( FUNC_1(VAR_0->pReader)>FUNC_1(VAR_1->pReader) ) return 1;


  return VAR_1->idx-VAR_0->idx;
}
