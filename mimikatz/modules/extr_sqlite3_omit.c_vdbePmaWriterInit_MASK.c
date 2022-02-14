
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_file ;
typedef int i64 ;
struct TYPE_4__ {int iBufEnd; int iBufStart; int iWriteOff; int nBuffer; int * pFd; int eFWErr; int * aBuffer; } ;
typedef TYPE_1__ PmaWriter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_file *VAR_1,
  PmaWriter *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  FUNC_0(VAR_2, 0, sizeof(PmaWriter));
  VAR_2->aBuffer = (u8*)FUNC_1(VAR_3);
  if( !VAR_2->aBuffer ){
    VAR_2->eFWErr = VAR_0;
  }else{
    VAR_2->iBufEnd = VAR_2->iBufStart = (VAR_4 % VAR_3);
    VAR_2->iWriteOff = VAR_4 - VAR_2->iBufStart;
    VAR_2->nBuffer = VAR_3;
    VAR_2->pFd = VAR_1;
  }
}
