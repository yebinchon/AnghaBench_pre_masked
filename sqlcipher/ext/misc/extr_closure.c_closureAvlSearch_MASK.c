
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {scalar_t__ id; struct TYPE_4__* pAfter; struct TYPE_4__* pBefore; } ;
typedef TYPE_1__ closure_avl ;



__attribute__((used)) static closure_avl *FUNC_0(closure_avl *VAR_0, sqlite3_int64 VAR_1){
  while( VAR_0 && VAR_1!=VAR_0->id ){
    VAR_0 = (VAR_1<VAR_0->id) ? VAR_0->pBefore : VAR_0->pAfter;
  }
  return VAR_0;
}
