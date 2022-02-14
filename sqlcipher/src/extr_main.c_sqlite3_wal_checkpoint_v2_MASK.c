
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ isInterrupted; } ;
struct TYPE_11__ {scalar_t__ nBusy; } ;
struct TYPE_13__ {scalar_t__ nVdbeActive; int mutex; TYPE_2__ u1; TYPE_1__ busyHandler; } ;
typedef TYPE_3__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int*,int*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int,char*,char const*) ;
 int FUNC_5 (TYPE_3__*,char const*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(
  sqlite3 *VAR_9,
  const char *VAR_10,
  int VAR_11,
  int *VAR_12,
  int *VAR_13
){



  int VAR_14;
  int VAR_15 = VAR_5;






  if( VAR_12 ) *VAR_12 = -1;
  if( VAR_13 ) *VAR_13 = -1;

  FUNC_0( VAR_1==0 );
  FUNC_0( VAR_0==1 );
  FUNC_0( VAR_2==2 );
  FUNC_0( VAR_3==3 );
  if( VAR_11<VAR_1 || VAR_11>VAR_3 ){


    return VAR_6;
  }

  FUNC_7(VAR_9->mutex);
  if( VAR_10 && VAR_10[0] ){
    VAR_15 = FUNC_5(VAR_9, VAR_10);
  }
  if( VAR_15<0 ){
    VAR_14 = VAR_4;
    FUNC_4(VAR_9, VAR_4, "unknown database: %s", VAR_10);
  }else{
    VAR_9->busyHandler.nBusy = 0;
    VAR_14 = FUNC_2(VAR_9, VAR_15, VAR_11, VAR_12, VAR_13);
    FUNC_3(VAR_9, VAR_14);
  }
  VAR_14 = FUNC_1(VAR_9, VAR_14);



  if( VAR_9->nVdbeActive==0 ){
    VAR_9->u1.isInterrupted = 0;
  }

  FUNC_8(VAR_9->mutex);
  return VAR_14;

}
