
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t i64 ;
struct TYPE_4__ {int eFWErr; size_t iBufEnd; size_t iBufStart; size_t iWriteOff; int * aBuffer; int pFd; } ;
typedef TYPE_1__ PmaWriter ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int *,size_t,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(PmaWriter *VAR_0, i64 *VAR_1){
  int VAR_2;
  if( VAR_0->eFWErr==0 && FUNC_0(VAR_0->aBuffer) && VAR_0->iBufEnd>VAR_0->iBufStart ){
    VAR_0->eFWErr = FUNC_2(VAR_0->pFd,
        &VAR_0->aBuffer[VAR_0->iBufStart], VAR_0->iBufEnd - VAR_0->iBufStart,
        VAR_0->iWriteOff + VAR_0->iBufStart
    );
  }
  *VAR_1 = (VAR_0->iWriteOff + VAR_0->iBufEnd);
  FUNC_3(VAR_0->aBuffer);
  VAR_2 = VAR_0->eFWErr;
  FUNC_1(VAR_0, 0, sizeof(PmaWriter));
  return VAR_2;
}
