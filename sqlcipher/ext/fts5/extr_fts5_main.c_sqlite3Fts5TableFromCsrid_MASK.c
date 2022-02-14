
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int Fts5Table ;
typedef int Fts5Global ;
typedef TYPE_2__ Fts5Cursor ;


 TYPE_2__* FUNC_0 (int *,int ) ;

Fts5Table *FUNC_1(
  Fts5Global *VAR_0,
  i64 VAR_1
){
  Fts5Cursor *VAR_2;
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if( VAR_2 ){
    return (Fts5Table*)VAR_2->base.pVtab;
  }
  return 0;
}
