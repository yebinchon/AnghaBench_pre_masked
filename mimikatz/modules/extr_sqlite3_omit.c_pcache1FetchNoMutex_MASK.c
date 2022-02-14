
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_10__ {unsigned int nHash; TYPE_1__** apHash; } ;
struct TYPE_9__ {unsigned int iKey; struct TYPE_9__* pNext; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PCache1 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static PgHdr1 *FUNC_3(
  sqlite3_pcache *VAR_0,
  unsigned int VAR_1,
  int VAR_2
){
  PCache1 *VAR_3 = (PCache1 *)VAR_0;
  PgHdr1 *VAR_4 = 0;


  VAR_4 = VAR_3->apHash[VAR_1 % VAR_3->nHash];
  while( VAR_4 && VAR_4->iKey!=VAR_1 ){ VAR_4 = VAR_4->pNext; }





  if( VAR_4 ){
    if( FUNC_0(VAR_4) ){
      return FUNC_2(VAR_4);
    }else{
      return VAR_4;
    }
  }else if( VAR_2 ){

    return FUNC_1(VAR_3, VAR_1, VAR_2);
  }else{
    return 0;
  }
}
