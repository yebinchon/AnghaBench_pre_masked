
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_4__ {scalar_t__ iPrevDocid; int bPrevDelete; int iPrevLangid; scalar_t__ nPendingData; scalar_t__ nMaxPendingData; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(
  Fts3Table *VAR_1,
  int VAR_2,
  int VAR_3,
  sqlite_int64 VAR_4
){
  FUNC_0( VAR_3>=0 );
  FUNC_0( VAR_2==1 || VAR_2==0 );







  if( VAR_4<VAR_1->iPrevDocid
   || (VAR_4==VAR_1->iPrevDocid && VAR_1->bPrevDelete==0)
   || VAR_1->iPrevLangid!=VAR_3
   || VAR_1->nPendingData>VAR_1->nMaxPendingData
  ){
    int VAR_5 = FUNC_1(VAR_1);
    if( VAR_5!=VAR_0 ) return VAR_5;
  }
  VAR_1->iPrevDocid = VAR_4;
  VAR_1->iPrevLangid = VAR_3;
  VAR_1->bPrevDelete = VAR_2;
  return VAR_0;
}
