
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_6__ {scalar_t__ bRev; } ;
typedef TYPE_1__ Fts5Iter ;
typedef int Fts5Index ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(
  Fts5Index *VAR_0,
  Fts5Iter *VAR_1,
  i64 VAR_2
){
  while( 1 ){
    i64 VAR_3;
    FUNC_1(VAR_0, VAR_1, 1, VAR_2);
    if( FUNC_0(VAR_0, VAR_1) ) break;
    VAR_3 = FUNC_2(VAR_1);
    if( VAR_1->bRev==0 && VAR_3>=VAR_2 ) break;
    if( VAR_1->bRev!=0 && VAR_3<=VAR_2 ) break;
  }
}
