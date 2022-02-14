
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; int eStage; } ;
typedef TYPE_1__ sqlite3rbu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;

int FUNC_1(sqlite3rbu *VAR_11){
  int VAR_12[] = {
    0, VAR_10, VAR_9,
    0, VAR_6, VAR_7
  };

  FUNC_0( VAR_3==1 );
  FUNC_0( VAR_2==2 );
  FUNC_0( VAR_0==4 );
  FUNC_0( VAR_1==5 );
  FUNC_0( VAR_12[VAR_3]==VAR_10 );
  FUNC_0( VAR_12[VAR_2]==VAR_9 );
  FUNC_0( VAR_12[VAR_0]==VAR_6 );
  FUNC_0( VAR_12[VAR_1]==VAR_7 );

  if( VAR_11->rc!=VAR_5 && VAR_11->rc!=VAR_4 ){
    return VAR_8;
  }else{
    FUNC_0( VAR_11->rc!=VAR_4 || VAR_11->eStage==VAR_1 );
    FUNC_0( VAR_11->eStage==VAR_3
         || VAR_11->eStage==VAR_2
         || VAR_11->eStage==VAR_0
         || VAR_11->eStage==VAR_1
    );
    return VAR_12[VAR_11->eStage];
  }
}
