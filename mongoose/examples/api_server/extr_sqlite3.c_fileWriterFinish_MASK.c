
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
typedef size_t i64 ;
struct TYPE_4__ {int eFWErr; size_t iBufEnd; size_t iBufStart; size_t iWriteOff; int * aBuffer; int pFile; } ;
typedef TYPE_1__ FileWriter ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_0, FileWriter *VAR_1, i64 *VAR_2){
  int VAR_3;
  if( VAR_1->eFWErr==0 && FUNC_0(VAR_1->aBuffer) && VAR_1->iBufEnd>VAR_1->iBufStart ){
    VAR_1->eFWErr = FUNC_3(VAR_1->pFile,
        &VAR_1->aBuffer[VAR_1->iBufStart], VAR_1->iBufEnd - VAR_1->iBufStart,
        VAR_1->iWriteOff + VAR_1->iBufStart
    );
  }
  *VAR_2 = (VAR_1->iWriteOff + VAR_1->iBufEnd);
  FUNC_2(VAR_0, VAR_1->aBuffer);
  VAR_3 = VAR_1->eFWErr;
  FUNC_1(VAR_1, 0, sizeof(FileWriter));
  return VAR_3;
}
