
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Table ;
struct TYPE_5__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_4__ {int iCursor; int * pTab; } ;
typedef TYPE_2__ SrcList ;



__attribute__((used)) static Table *FUNC_0(SrcList *VAR_0, int VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nSrc; VAR_2++){
    if( VAR_0->a[VAR_2].iCursor==VAR_1 ) return VAR_0->a[VAR_2].pTab;
  }
  return 0;
}
