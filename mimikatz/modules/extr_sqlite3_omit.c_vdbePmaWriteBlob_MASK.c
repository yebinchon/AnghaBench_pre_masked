
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ eFWErr; int nBuffer; int iBufEnd; size_t iBufStart; scalar_t__ iWriteOff; int * aBuffer; int pFd; } ;
typedef TYPE_1__ PmaWriter ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(PmaWriter *VAR_0, u8 *VAR_1, int VAR_2){
  int VAR_3 = VAR_2;
  while( VAR_3>0 && VAR_0->eFWErr==0 ){
    int VAR_4 = VAR_3;
    if( VAR_4>(VAR_0->nBuffer - VAR_0->iBufEnd) ){
      VAR_4 = VAR_0->nBuffer - VAR_0->iBufEnd;
    }

    FUNC_1(&VAR_0->aBuffer[VAR_0->iBufEnd], &VAR_1[VAR_2-VAR_3], VAR_4);
    VAR_0->iBufEnd += VAR_4;
    if( VAR_0->iBufEnd==VAR_0->nBuffer ){
      VAR_0->eFWErr = FUNC_2(VAR_0->pFd,
          &VAR_0->aBuffer[VAR_0->iBufStart], VAR_0->iBufEnd - VAR_0->iBufStart,
          VAR_0->iWriteOff + VAR_0->iBufStart
      );
      VAR_0->iBufStart = VAR_0->iBufEnd = 0;
      VAR_0->iWriteOff += VAR_0->nBuffer;
    }
    FUNC_0( VAR_0->iBufEnd<VAR_0->nBuffer );

    VAR_3 -= VAR_4;
  }
}
