
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eState; int journalMode; int jfd; int pWal; int tempFile; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(
  Pager *VAR_5,
  int *VAR_6
){
  int VAR_7 = VAR_4;

  FUNC_0( FUNC_1(VAR_5) );
  FUNC_0( VAR_5->eState==VAR_1 || VAR_6 );
  FUNC_0( VAR_5->eState==VAR_2 || !VAR_6 );
  FUNC_0( VAR_6==0 || *VAR_6==0 );
  FUNC_0( VAR_6!=0 || (!VAR_5->tempFile && !VAR_5->pWal) );

  if( !VAR_5->tempFile && !VAR_5->pWal ){
    if( !FUNC_4(VAR_5) ) return VAR_3;


    FUNC_3(VAR_5->jfd);

    VAR_7 = FUNC_2(VAR_5);
    if( VAR_7==VAR_4 ){
      VAR_5->journalMode = VAR_0;
      VAR_5->eState = VAR_1;
    }
  }else{
    *VAR_6 = 1;
  }

  return VAR_7;
}
