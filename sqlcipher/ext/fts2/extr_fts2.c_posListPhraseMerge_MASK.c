
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iType; } ;
typedef int PLWriter ;
typedef int PLReader ;
typedef TYPE_1__ DLWriter ;
typedef int DLReader ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(DLReader *VAR_1, DLReader *VAR_2,
                               DLWriter *VAR_3){
  PLReader VAR_4, VAR_5;
  PLWriter VAR_6;
  int VAR_7 = 0;

  FUNC_0( FUNC_1(VAR_1)==FUNC_1(VAR_2) );
  FUNC_0( VAR_3->iType!=VAR_0 );

  FUNC_5(&VAR_4, VAR_1);
  FUNC_5(&VAR_5, VAR_2);

  while( !FUNC_2(&VAR_4) && !FUNC_2(&VAR_5) ){
    if( FUNC_3(&VAR_4)<FUNC_3(&VAR_5) ){
      FUNC_7(&VAR_4);
    }else if( FUNC_3(&VAR_4)>FUNC_3(&VAR_5) ){
      FUNC_7(&VAR_5);
    }else if( FUNC_6(&VAR_4)+1<FUNC_6(&VAR_5) ){
      FUNC_7(&VAR_4);
    }else if( FUNC_6(&VAR_4)+1>FUNC_6(&VAR_5) ){
      FUNC_7(&VAR_5);
    }else{
      if( !VAR_7 ){
        FUNC_10(&VAR_6, VAR_3, FUNC_1(VAR_1));
        VAR_7 = 1;
      }
      FUNC_8(&VAR_6, FUNC_3(&VAR_5), FUNC_6(&VAR_5), 0, 0);
      FUNC_7(&VAR_4);
      FUNC_7(&VAR_5);
    }
  }

  if( VAR_7 ){
    FUNC_11(&VAR_6);
    FUNC_9(&VAR_6);
  }

  FUNC_4(&VAR_4);
  FUNC_4(&VAR_5);
}
