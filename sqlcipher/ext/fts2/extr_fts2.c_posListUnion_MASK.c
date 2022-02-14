
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ iType; } ;
struct TYPE_9__ {scalar_t__ iType; } ;
typedef int PLWriter ;
typedef int PLReader ;
typedef TYPE_1__ DLWriter ;
typedef TYPE_2__ DLReader ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static void FUNC_11(DLReader *VAR_0, DLReader *VAR_1, DLWriter *VAR_2){
  PLReader VAR_3, VAR_4;
  PLWriter VAR_5;

  FUNC_0( FUNC_1(VAR_0)==FUNC_1(VAR_1) );
  FUNC_0( VAR_0->iType==VAR_1->iType );
  FUNC_0( VAR_0->iType==VAR_2->iType );

  FUNC_4(&VAR_3, VAR_0);
  FUNC_4(&VAR_4, VAR_1);
  FUNC_8(&VAR_5, VAR_2, FUNC_1(VAR_0));

  while( !FUNC_2(&VAR_3) || !FUNC_2(&VAR_4) ){
    int VAR_6 = FUNC_10(&VAR_3, &VAR_4);
    if( VAR_6<0 ){
      FUNC_6(&VAR_5, &VAR_3);
      FUNC_5(&VAR_3);
    }else if( VAR_6>0 ){
      FUNC_6(&VAR_5, &VAR_4);
      FUNC_5(&VAR_4);
    }else{
      FUNC_6(&VAR_5, &VAR_3);
      FUNC_5(&VAR_3);
      FUNC_5(&VAR_4);
    }
  }

  FUNC_9(&VAR_5);
  FUNC_7(&VAR_5);
  FUNC_3(&VAR_3);
  FUNC_3(&VAR_4);
}
