
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int * pDfltColl; } ;
typedef TYPE_1__ sqlite3 ;
typedef int CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,char const*,int) ;

CollSeq *FUNC_2(
  sqlite3 *VAR_3,
  u8 VAR_4,
  const char *VAR_5,
  int VAR_6
){
  CollSeq *VAR_7;
  if( VAR_5 ){
    VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6);
  }else{
    VAR_7 = VAR_3->pDfltColl;
  }
  FUNC_0( VAR_2==1 && VAR_1==2 && VAR_0==3 );
  FUNC_0( VAR_4>=VAR_2 && VAR_4<=VAR_0 );
  if( VAR_7 ) VAR_7 += VAR_4-1;
  return VAR_7;
}
