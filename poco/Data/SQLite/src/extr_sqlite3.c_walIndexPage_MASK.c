
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nWiData; int ** apWiData; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int volatile**) ;

__attribute__((used)) static int FUNC_1(
  Wal *VAR_1,
  int VAR_2,
  volatile u32 **VAR_3
){
  if( VAR_1->nWiData<=VAR_2 || (*VAR_3 = VAR_1->apWiData[VAR_2])==0 ){
    return FUNC_0(VAR_1, VAR_2, VAR_3);
  }
  return VAR_0;
}
