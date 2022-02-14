
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_3__ {int* aPoslist; int nSize; int nPoslist; int* aEof; int iRowid; } ;
typedef TYPE_1__ Fts5DoclistIter ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static void FUNC_3(Fts5DoclistIter *VAR_0){
  u8 *VAR_1 = VAR_0->aPoslist + VAR_0->nSize + VAR_0->nPoslist;

  FUNC_0( VAR_0->aPoslist );
  if( VAR_1>=VAR_0->aEof ){
    VAR_0->aPoslist = 0;
  }else{
    i64 VAR_2;

    VAR_1 += FUNC_1(VAR_1, (u64*)&VAR_2);
    VAR_0->iRowid += VAR_2;


    if( VAR_1[0] & 0x80 ){
      int VAR_3;
      VAR_0->nSize = FUNC_2(VAR_1, VAR_3);
      VAR_0->nPoslist = (VAR_3>>1);
    }else{
      VAR_0->nPoslist = ((int)(VAR_1[0])) >> 1;
      VAR_0->nSize = 1;
    }

    VAR_0->aPoslist = VAR_1;
  }
}
