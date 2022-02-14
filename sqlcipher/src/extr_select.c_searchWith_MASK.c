
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct SrcList_item {scalar_t__ zDatabase; char* zName; } ;
struct Cte {int zName; } ;
struct TYPE_4__ {int nCte; struct Cte* a; struct TYPE_4__* pOuter; } ;
typedef TYPE_1__ With ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static struct Cte *FUNC_1(
  With *VAR_0,
  struct SrcList_item *VAR_1,
  With **VAR_2
){
  const char *VAR_3;
  if( VAR_1->zDatabase==0 && (VAR_3 = VAR_1->zName)!=0 ){
    With *VAR_4;
    for(VAR_4=VAR_0; VAR_4; VAR_4=VAR_4->pOuter){
      int VAR_5;
      for(VAR_5=0; VAR_5<VAR_4->nCte; VAR_5++){
        if( FUNC_0(VAR_3, VAR_4->a[VAR_5].zName)==0 ){
          *VAR_2 = VAR_4;
          return &VAR_4->a[VAR_5];
        }
      }
    }
  }
  return 0;
}
