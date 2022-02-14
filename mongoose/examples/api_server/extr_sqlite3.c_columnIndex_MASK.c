
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nCol; TYPE_1__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_4__ {int zName; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(Table *VAR_0, const char *VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nCol; VAR_2++){
    if( FUNC_0(VAR_0->aCol[VAR_2].zName, VAR_1)==0 ) return VAR_2;
  }
  return -1;
}
