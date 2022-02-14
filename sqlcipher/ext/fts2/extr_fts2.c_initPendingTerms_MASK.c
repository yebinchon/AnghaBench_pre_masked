
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_4__ {scalar_t__ iPrevDocid; scalar_t__ nPendingData; int pendingTerms; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_3, sqlite_int64 VAR_4){






  if( VAR_4<=VAR_3->iPrevDocid || VAR_3->nPendingData>VAR_2 ){
    int VAR_5 = FUNC_0(VAR_3);
    if( VAR_5!=VAR_1 ) return VAR_5;
  }
  if( VAR_3->nPendingData<0 ){
    FUNC_1(&VAR_3->pendingTerms, VAR_0, 1);
    VAR_3->nPendingData = 0;
  }
  VAR_3->iPrevDocid = VAR_4;
  return VAR_1;
}
