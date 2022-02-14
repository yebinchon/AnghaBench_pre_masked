
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VdbeSorter ;
struct TYPE_8__ {int * pSorter; } ;
struct TYPE_9__ {scalar_t__ eCurType; TYPE_1__ uc; } ;
typedef TYPE_2__ VdbeCursor ;
struct TYPE_10__ {int n; int z; } ;
typedef TYPE_3__ Mem ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 void* FUNC_4 (int *,int*) ;

int FUNC_5(const VdbeCursor *VAR_4, Mem *VAR_5){
  VdbeSorter *VAR_6;
  void *VAR_7; int VAR_8;

  FUNC_1( VAR_4->eCurType==VAR_0 );
  VAR_6 = VAR_4->uc.pSorter;
  VAR_7 = FUNC_4(VAR_6, &VAR_8);
  if( FUNC_3(VAR_5, VAR_8) ){
    return VAR_2;
  }
  VAR_5->n = VAR_8;
  FUNC_0(VAR_5, VAR_1);
  FUNC_2(VAR_5->z, VAR_7, VAR_8);

  return VAR_3;
}
