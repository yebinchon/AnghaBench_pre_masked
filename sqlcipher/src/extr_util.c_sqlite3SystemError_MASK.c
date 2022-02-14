
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pVfs; int iSysErrno; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(sqlite3 *VAR_3, int VAR_4){
  if( VAR_4==VAR_2 ) return;
  VAR_4 &= 0xff;
  if( VAR_4==VAR_0 || VAR_4==VAR_1 ){
    VAR_3->iSysErrno = FUNC_0(VAR_3->pVfs);
  }
}
