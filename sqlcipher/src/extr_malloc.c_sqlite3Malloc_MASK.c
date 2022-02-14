
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {void* (* xMalloc ) (int) ;} ;
struct TYPE_5__ {TYPE_1__ m; scalar_t__ bMemstat; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,void**) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;

void *FUNC_6(u64 VAR_2){
  void *VAR_3;
  if( VAR_2==0 || VAR_2>=0x7fffff00 ){





    VAR_3 = 0;
  }else if( VAR_1.bMemstat ){
    FUNC_3(VAR_0);
    FUNC_2((int)VAR_2, &VAR_3);
    FUNC_4(VAR_0);
  }else{
    VAR_3 = VAR_1.m.xMalloc((int)VAR_2);
  }
  FUNC_1( FUNC_0(VAR_3) );
  return VAR_3;
}
