
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {int journalSizeLimit; int pWal; } ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (int ,int) ;

i64 FUNC_1(Pager *VAR_0, i64 VAR_1){
  if( VAR_1>=-1 ){
    VAR_0->journalSizeLimit = VAR_1;
    FUNC_0(VAR_0->pWal, VAR_1);
  }
  return VAR_0->journalSizeLimit;
}
