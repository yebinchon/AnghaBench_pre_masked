
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_6__ {int alarmThreshold; int mutex; } ;
struct TYPE_4__ {int (* xRoundup ) (int) ;void* (* xRealloc ) (void*,int) ;} ;
struct TYPE_5__ {TYPE_1__ m; scalar_t__ bMemstat; } ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 void* FUNC_14 (void*,int) ;
 void* FUNC_15 (void*,int) ;
 void* FUNC_16 (void*,int) ;

void *FUNC_17(void *VAR_5, u64 VAR_6){
  int VAR_7, VAR_8, VAR_9;
  void *VAR_10;
  FUNC_1( FUNC_5(VAR_5, VAR_0) );
  FUNC_1( FUNC_6(VAR_5, (u8)~VAR_0) );
  if( VAR_5==0 ){
    return FUNC_2(VAR_6);
  }
  if( VAR_6==0 ){
    FUNC_10(VAR_5);
    return 0;
  }
  if( VAR_6>=0x7fffff00 ){

    return 0;
  }
  VAR_7 = FUNC_4(VAR_5);



  VAR_8 = VAR_4.m.xRoundup((int)VAR_6);
  if( VAR_7==VAR_8 ){
    VAR_10 = VAR_5;
  }else if( VAR_4.bMemstat ){
    FUNC_11(VAR_3);
    FUNC_7(VAR_1, (int)VAR_6);
    VAR_9 = VAR_8 - VAR_7;
    if( VAR_9>0 && FUNC_9(VAR_2) >=
          VAR_3-VAR_9 ){
      FUNC_3(VAR_9);
    }
    VAR_10 = VAR_4.m.xRealloc(VAR_5, VAR_8);
    if( VAR_10==0 && VAR_3>0 ){
      FUNC_3((int)VAR_6);
      VAR_10 = VAR_4.m.xRealloc(VAR_5, VAR_8);
    }
    if( VAR_10 ){
      VAR_8 = FUNC_4(VAR_10);
      FUNC_8(VAR_2, VAR_8-VAR_7);
    }
    FUNC_12(VAR_3);
  }else{
    VAR_10 = VAR_4.m.xRealloc(VAR_5, VAR_8);
  }
  FUNC_1( FUNC_0(VAR_10) );
  return VAR_10;
}
