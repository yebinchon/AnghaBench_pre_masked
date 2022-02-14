
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_cursor ;
typedef int TestDb ;
struct TYPE_2__ {int nBuf; int * pCsr; void* pBuf; int db; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,void*,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int*) ;
 int FUNC_5 (void*,void const*,int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(
  TestDb *VAR_2,
  void *VAR_3,
  int VAR_4,
  void **VAR_5,
  int *VAR_6
){
  int VAR_7;
  LsmDb *VAR_8 = (LsmDb *)VAR_2;
  lsm_cursor *VAR_9;

  if( VAR_3==0 ) return VAR_0;

  if( VAR_8->pCsr==0 ){
    VAR_7 = FUNC_1(VAR_8->db, &VAR_9);
    if( VAR_7!=VAR_0 ) return VAR_7;
  }else{
    VAR_9 = VAR_8->pCsr;
  }

  VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_1);
  if( VAR_7==VAR_0 ){
    if( FUNC_3(VAR_9) ){
      const void *VAR_10; int VAR_11;
      VAR_7 = FUNC_4(VAR_9, &VAR_10, &VAR_11);
      if( VAR_11>VAR_8->nBuf ){
        FUNC_6(VAR_8->pBuf);
        VAR_8->pBuf = FUNC_7(VAR_11*2);
        VAR_8->nBuf = VAR_11*2;
      }
      FUNC_5(VAR_8->pBuf, VAR_10, VAR_11);
      *VAR_5 = VAR_8->pBuf;
      *VAR_6 = VAR_11;
    }else{
      *VAR_5 = 0;
      *VAR_6 = -1;
    }
  }
  if( VAR_8->pCsr==0 ){
    FUNC_0(VAR_9);
  }
  return VAR_7;
}
