
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pBackup; int (* xReiniter ) (int *) ;} ;
typedef int Pgno ;
typedef int PgHdr ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_1, Pgno VAR_2){
  int VAR_3 = VAR_0;
  Pager *VAR_4 = (Pager *)VAR_1;
  PgHdr *VAR_5;

  FUNC_0( FUNC_1(VAR_4) );
  VAR_5 = FUNC_4(VAR_4, VAR_2);
  if( VAR_5 ){
    if( FUNC_7(VAR_5)==1 ){
      FUNC_6(VAR_5);
    }else{
      VAR_3 = FUNC_2(VAR_5);
      if( VAR_3==VAR_0 ){
        VAR_4->xReiniter(VAR_5);
      }
      FUNC_5(VAR_5);
    }
  }
  FUNC_3(VAR_4->pBackup);

  return VAR_3;
}
